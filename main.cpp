#include <format>
#include <fstream>
#include <logger.hpp>
#include <vector>

#include "include/osi/data_link_layer/utils.hpp"
#include "include/osi/network_layer/utils.hpp"
#include "include/osi/transport_layer/utils.hpp"

std::vector<std::byte> read_osi_bin_packet_data()
{
	std::ifstream file("C:\\Users\\8483ed\\Documents\\vscode\\cpp\\osi\\osi_bin_packet_data.bin", std::ios::binary);

	if (not file)
	{
		throw std::runtime_error("cannot open the file");
	}

	file.seekg(std::ios::beg, std::ios::end);
	const int64_t file_size{file.tellg()};
	file.seekg(std::ios::beg);

	logger::println(std::format("file size: {} bytes", file_size));

	std::vector<std::byte> data(file_size);
	file.read(reinterpret_cast<char*>(data.data()), data.size());

	return data;
}

int main(int argc, char const* argv[])
{
	const auto data{read_osi_bin_packet_data()};

	// data_link_layer
	const auto data_link_layer{osi::data_link_layer::deserialize(1, data)};

	if (not data_link_layer)
	{
		throw std::runtime_error("cannot deserialize data link layer");
	}

	// network_layer
	auto next_layer_info{std::visit(
		[](auto&& layer) { return std::pair<int32_t, std::span<const std::byte>>{layer.nextLayerType(), layer.payload()}; },
		*data_link_layer)};

	logger::println(std::format("network layer: {}", next_layer_info.first));

	const auto network_layer{osi::network_layer::deserialize(next_layer_info.first, next_layer_info.second)};

	if (not network_layer)
	{
		throw std::runtime_error("cannot deserialize network layer");
	}

	// transport_layer
	next_layer_info = std::visit(
		[](auto&& layer) { return std::pair<int32_t, std::span<const std::byte>>{layer.nextLayerType(), layer.payload()}; }, *network_layer);

	logger::println(std::format("transport layer: {}", next_layer_info.first));

	const auto transport_layer{osi::transport_layer::deserialize(next_layer_info.first, next_layer_info.second)};

	if (not transport_layer)
	{
		throw std::runtime_error("cannot deserialize transport layer");
	}

	next_layer_info = std::visit(
		[](auto&& layer) { return std::pair<int32_t, std::span<const std::byte>>{layer.nextLayerType(), layer.payload()}; }, *transport_layer);

	logger::println(std::format("unsuported layer: {}", next_layer_info.first));

	return 0;
}
