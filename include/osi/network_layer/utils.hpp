#ifndef OSI_INCLUDE_OSI_NETWORK_LAYER_UTILS_HPP
#define OSI_INCLUDE_OSI_NETWORK_LAYER_UTILS_HPP

#include <optional>
#include <variant>

#include "ip_v4/ip_v4.hpp"

namespace osi
{
namespace network_layer
{
using Layer_t = std::variant<IPv4>;

std::optional<Layer_t> deserialize(uint32_t layerType, std::span<const std::byte> data) noexcept;
} // namespace network_layer
} // namespace osi

#endif // OSI_INCLUDE_OSI_NETWORK_LAYER_UTILS_HPP
