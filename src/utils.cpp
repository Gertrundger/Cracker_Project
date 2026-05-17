#include "utils.h"
#include <cctype>
#include <algorithm>

namespace utils {
    std::string toHex(const unsigned char* data, size_t len) {
        static const char* hex = "0123456789abcdef";
        std::string out(len * 2, ' ');
        for (size_t i = 0; i < len; ++i) {
            out[i*2]   = hex[(data[i] >> 4) & 0xF];
            out[i*2+1] = hex[data[i] & 0xF];
        }
        return out;
    }

    std::vector<unsigned char> fromHex(const std::string& hex) {
        std::vector<unsigned char> bytes;
        for (size_t i = 0; i < hex.length(); i += 2) {
            std::string byteString = hex.substr(i, 2);
            unsigned char byte = (unsigned char) strtol(byteString.c_str(), nullptr, 16);
            bytes.push_back(byte);
        }
        return bytes;
    }

    bool validateAddress(const std::string& address) {
        // Very basic placeholder
        return !address.empty() && (address[0] == '1' || address[0] == '3' || address[0] == 'b' || address[0] == 'B');
    }
}