#include "base32.h"

stringEX base32::base32_encode(stringEX &ref)
{
    stringEX bit_8_strex;
    stringEX encode{};
    for (auto &x : ref)
    {
        bitset<8> bit_8_bitset(x);
        bit_8_strex += bit_8_bitset.to_string();
    }

    auto bit_5_spilt = bit_8_strex.splitByLength(5);
    for (auto &x : bit_5_spilt)
    {
        if (x.length() % 5 != 0)
        {
            for (int i = 0; i < x.length() % 5; i++)
                x += "0";
        }
        bitset<5> bit_5(x);
        encode += base32_list[bit_5.to_ulong()];
    }
    if (encode.length() % 8 != 0)
    {
        for (int i = 0; i < encode.length() % 8; i++)
            encode += '=';
    }
    return encode;
}
stringEX base32::base32_decode(stringEX &ref)
{
    stringEX decode{};
    for (auto &x : ref)
    {
        if (x != '=')
            decode += x;
    }
    vector<int> bit_10_vec(decode.length());
    for (int i = 0; i < decode.length(); i++)
    {
        for (int j = 0; j < base32_list.length(); j++)
        {
            if (decode[i] == base32_list[j])
                bit_10_vec[i] = j;
        }
    }
    decode.clear();
    for (auto &x : bit_10_vec)
    {
        bitset<5> bit_5_bitset(x);
        decode += bit_5_bitset.to_string();
    }
    auto bit_8_vec = decode.splitByLength(8);
    decode.clear();
    for (auto &x : bit_8_vec)
    {
        bitset<8> bit_8_bitset(x);
        decode += static_cast<char>(bit_8_bitset.to_ulong());
    }
    return decode;
}
