#ifndef UTILS_H
#define UTILS_H

#include <string>
#include <vector>

namespace utils {
    std::string toHex(const unsigned char* data, size_t len);
    std::vector<unsigned char> fromHex(const std::string& hex);
    bool validateAddress(const std::string& address);
}

#endif