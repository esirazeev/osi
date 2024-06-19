#ifndef OSI_INCLUDE_OSI_TRANSPORT_LAYER_UDP_HPP
#define OSI_INCLUDE_OSI_TRANSPORT_LAYER_UDP_HPP

#include <optional>
#include <span>

#include "header.hpp"
#include "../../layer.hpp"

namespace osi
{
namespace transport_layer
{
class Udp final : public Layer<Udp, UdpHeader>
{
public:
	int32_t nextLayerType() const noexcept;
	static void bsawp(UdpHeader& header) noexcept;
};
} // namespace transport_layer
} // namespace osi

#endif // OSI_INCLUDE_OSI_TRANSPORT_LAYER_UDP_HPP
