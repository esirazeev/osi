#ifndef OSI_INCLUDE_OSI_TRANSPORT_LAYER_UTILS_HPP
#define OSI_INCLUDE_OSI_TRANSPORT_LAYER_UTILS_HPP

#include <optional>
#include <variant>

#include "udp/udp.hpp"

namespace osi
{
namespace transport_layer
{
using Layer_t = std::variant<Udp>;

std::optional<Layer_t> deserialize(uint32_t layerType, std::span<const std::byte> data) noexcept;
} // namespace transport_layer
} // namespace osi

#endif // OSI_INCLUDE_OSI_TRANSPORT_LAYER_UTILS_HPP
