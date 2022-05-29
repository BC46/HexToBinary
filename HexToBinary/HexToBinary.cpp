#include "HexToBinary.hpp"
#include <iostream>
#include <string>

bool ConvertHexToBinary(LPCWSTR hexString, DWORD hexLength, BYTE *binaryString) {
    if (hexLength % 2 != 0)
        return false;

    std::wstring byte;

    int j(0);
    for (int i(0); i < hexLength; i += 2) {
        byte = { hexString[i], hexString[i + 1] };

        binaryString[j++] = stoul(byte, nullptr, 16);
    }

    return true;
};