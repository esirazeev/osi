#ifndef OSI_INCLUDE_OSI_NETWORK_LAYER_LAYER_TYPE_HPP
#define OSI_INCLUDE_OSI_NETWORK_LAYER_LAYER_TYPE_HPP

#include <cstdint>

namespace osi
{
namespace network_layer
{
enum class LayerType : uint8_t
{
	ip_v4 = 0x08
};
} // namespace network_layer
} // namespace osi

#endif // OSI_INCLUDE_OSI_NETWORK_LAYER_LAYER_TYPE_HPP
