#include "osi/transport_layer/udp/udp.hpp"
#include "osi/byte_swap.hpp"

namespace osi
{
namespace transport_layer
{
int32_t Udp::nextLayerType() const noexcept
{
	return -1;
}

void Udp::bsawp(UdpHeader& header) noexcept
{
	if constexpr (std::endian::native != std::endian::little)
	{
		header.sourcePort = bswap16(header.sourcePort);
		header.destinationPort = bswap16(header.destinationPort);
		header.length = bswap16(header.length);
		header.checksum = bswap16(header.checksum);
	}
}
} // namespace transport_layer
} // namespace osi
