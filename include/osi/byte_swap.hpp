#ifndef OSI_INCLUDE_UTILS_BYTE_SWAP_HPP
#define OSI_INCLUDE_UTILS_BYTE_SWAP_HPP

#ifdef __WIN32
#include <winsock2.h>
#define bswap16(value) __builtin_bswap16(value)
#define bswap32(value) __builtin_bswap32(value)
#define bswap64(value) __builtin_bswap64(value)
#elif __linux__
#include <byteswap.h>
#define bswap16(value) bswap_16(value)
#define bswap32(value) bswap_32(value)
#define bswap64(value) bswap_64(value)
#endif

#endif // OSI_INCLUDEUTILS_BYTE_SWAP_HPP
