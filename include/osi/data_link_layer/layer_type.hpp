#ifndef OSI_INCLUDE_OSI_DATA_LINK_LAYER_LAYER_TYPE_HPP
#define OSI_INCLUDE_OSI_DATA_LINK_LAYER_LAYER_TYPE_HPP

#include <cstdint>

namespace osi
{
namespace data_link_layer
{
enum class LayerType : uint8_t
{
	ethernet = 0x01
};
} // namespace data_link_layer
} // namespace osi

#endif // OSI_INCLUDE_OSI_DATA_LINK_LAYER_LAYER_TYPE_HPP
