#ifndef OSI_INCLUDE_OSI_DATA_LINK_LAYER_UTILS_HPP
#define OSI_INCLUDE_OSI_DATA_LINK_LAYER_UTILS_HPP

#include <optional>
#include <variant>

#include "ethernet/ethernet.hpp"

namespace osi
{
namespace data_link_layer
{
using Layer_t = std::variant<Ethernet>;

std::optional<Layer_t> deserialize(uint32_t layerType, std::span<const std::byte> data) noexcept;
} // namespace data_link_layer
} // namespace osi

#endif // OSI_INCLUDE_OSI_DATA_LINK_LAYER_UTILS_HPP
