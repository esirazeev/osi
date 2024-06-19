#ifndef OSI_INCLUDE_OSI_NETWORK_LAYER_IP_V4_HPP
#define OSI_INCLUDE_OSI_NETWORK_LAYER_IP_V4_HPP

#include <optional>
#include <span>

#include "header.hpp"
#include "../../layer.hpp"

namespace osi
{
namespace network_layer
{
class IPv4 final : public Layer<IPv4, IPv4Header>
{
public:
	int32_t nextLayerType() const noexcept;
	static void bsawp(IPv4Header& header) noexcept;
};
} // namespace network_layer
} // namespace osi

#endif // OSI_INCLUDE_OSI_NETWORK_LAYER_IP_V4_HPP
