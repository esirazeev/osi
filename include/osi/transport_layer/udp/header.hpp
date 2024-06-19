#ifndef OSI_INCLUDE_OSI_TRANSPORT_LAYER_UDP_HEADER_HPP
#define OSI_INCLUDE_OSI_TRANSPORT_LAYER_UDP_HEADER_HPP

#include <cstdint>

namespace osi
{
namespace transport_layer
{
#pragma pack(push, 1)
struct UdpHeader
{
	uint16_t sourcePort;
	uint16_t destinationPort;
	uint16_t length;
	uint16_t checksum;
};
#pragma pack(pop)
} // namespace transport_layer
} // namespace osi

#endif // OSI_INCLUDE_OSI_TRANSPORT_LAYER_UDP_HEADER_HPP
