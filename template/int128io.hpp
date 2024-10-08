#ifndef __ROTARYMARS__INT128_INPUT_H
#define __ROTARYMARS__INT128_INPUT_H

#include <iostream>
#include <string>
#include <cstdint>

inline std::istream& operator>>(std::istream& in, __int128& val) {
    std::string str;
    in >> str;
    val = 0;
    for (char c : str) {
        val = val * 10 + (c - '0');
    }
    return in;
}

inline std::ostream& operator<<(std::ostream& out, __int128 val) {
    if (val == 0) {
        out << '0';
    } else {
        if (val < 0) {
            out << '-';
            val = -val;
        }
        std::string str;
        while (val > 0) {
            str += '0' + (val % 10);
            val /= 10;
        }
        for (auto it = str.rbegin(); it != str.rend(); ++it) {
            out << *it;
        }
    }
    return out;
}

#endif
