#pragma once

#include <windows.h>

extern "C" __declspec(dllexport) bool ConvertHexToBinary(LPCWSTR hexString, DWORD hexLength, BYTE *binaryString);