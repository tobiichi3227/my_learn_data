#ifndef BASE32_INCLUDE_H
#define BASE32_INCLUDE_H

#include "stringEX.h"
#include <vector>
#include <bitset>

class base32
{
private:
    const string base32_list = "ABCDEFGHIJKLMNOPQRSTUVWXYZ234567";

public:
    stringEX base32_encode(stringEX &);
    stringEX base32_decode(stringEX &);
};
#endif
