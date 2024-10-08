#pragma once

#include "RE/B/BSTHashMap.h"
#include "RE/N/NiObject.h"
#include "RE/N/NiPoint3.h"

namespace RE
{
	class NiCloningProcess
	{
	public:
		// members
		BSTHashMap<NiObject*, NiObject*> cloneMap;    // 00
		BSTHashMap<NiObject*, bool>      processMap;  // 30
		std::uint32_t                    copyType;    // 60
		char                             appendChar;  // 64
		std::uint16_t                    pad65;       // 65
		NiPoint3                         scale;       // 68
	};
	static_assert(sizeof(NiCloningProcess) == 0x78);
}
