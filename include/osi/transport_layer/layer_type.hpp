#ifndef OSI_INCLUDE_OSI_TRANSPORT_LAYER_LAYER_TYPE_HPP
#define OSI_INCLUDE_OSI_TRANSPORT_LAYER_LAYER_TYPE_HPP

#include <cstdint>

namespace osi
{
namespace transport_layer
{
enum class LayerType : uint8_t
{
	udp = 0x11
};
} // namespace transport_layer
} // namespace osi

#endif // OSI_INCLUDE_OSI_TRANSPORT_LAYER_LAYER_TYPE_HPP
