#ifndef OSI_INCLUDE_OSI_DATA_LINK_LAYER_ETHERNET_HPP
#define OSI_INCLUDE_OSI_DATA_LINK_LAYER_ETHERNET_HPP

#include <optional>
#include <span>

#include "header.hpp"
#include "../../layer.hpp"

namespace osi
{
namespace data_link_layer
{
class Ethernet final : public Layer<Ethernet, EthernetHeader>
{
public:
	int32_t nextLayerType() const noexcept;
	static void bsawp(EthernetHeader& header) noexcept;
};
} // namespace data_link_layer
} // namespace osi

#endif // OSI_INCLUDE_OSI_DATA_LINK_LAYER_ETHERNET_HPP
