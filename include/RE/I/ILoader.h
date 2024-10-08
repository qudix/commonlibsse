#pragma once

#include "RE/B/BSTSmartPointer.h"
#include "RE/U/UnlinkedTypes.h"

namespace RE
{
	namespace BSScript
	{
		class IStore;

		struct ILoader
		{
		public:
			inline static constexpr auto RTTI = RTTI_BSScript__ILoader;
			inline static constexpr auto VTABLE = VTABLE_BSScript__ILoader;

			virtual ~ILoader();  // 00

			// add
			virtual ILoader* Clone() = 0;                                                        // 01
			virtual void     SetScriptStore(const BSTSmartPointer<IStore>& a_store) = 0;         // 02
			virtual bool     GetClass(const char* a_name, UnlinkedTypes::Object& a_object) = 0;  // 03
		};
		static_assert(sizeof(ILoader) == 0x8);
	}
}
