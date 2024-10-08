#pragma once

#include "RE/B/BSPointerHandle.h"
#include "RE/B/BSTSmartPointer.h"
#include "RE/D/DelayFunctor.h"

namespace RE
{
	namespace BSScript
	{
		class IVirtualMachine;
	}

	namespace SkyrimScript
	{
		class SetMotionTypeFunctor : public DelayFunctor
		{
		public:
			inline static constexpr auto RTTI = RTTI_SkyrimScript____SetMotionTypeFunctor;
			inline static constexpr auto VTABLE = VTABLE_SkyrimScript____SetMotionTypeFunctor;

			~SetMotionTypeFunctor() override;  // 00

			// override (DelayFunctor)
			RE::BSScript::Variable operator()() override;                                                              // 01
			bool                   IsLatent() const override;                                                          // 02 - { return true; }
			bool                   SaveImpl(BSStorage& a_storage) const override;                                      // 04
			FunctorType            GetType() const override;                                                           // 05 - { return 8; }
			bool                   LoadImpl(const BSStorage& a_storage, std::uint32_t a_arg2, bool& a_arg3) override;  // 06

			// members
			ObjectRefHandle                            objectToChange;  // 10
			std::uint32_t                              type;            // 14
			BSTSmartPointer<BSScript::IVirtualMachine> vm;              // 18
			bool                                       allowActivate;   // 20
			std::uint8_t                               pad21;           // 21
			std::uint16_t                              pad22;           // 22
			std::uint32_t                              pad24;           // 24
		};
		static_assert(sizeof(SetMotionTypeFunctor) == 0x28);
	}
}
