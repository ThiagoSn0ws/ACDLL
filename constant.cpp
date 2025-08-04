#include "pch.h"
#include "constant.h"

HMODULE hModule = GetModuleHandle(nullptr);
uintptr_t exeBaseAddress = (uintptr_t)GetModuleHandle(nullptr);

extern Player* localPlayerPtr =*(Player**) (exeBaseAddress + 0x00187C0C);