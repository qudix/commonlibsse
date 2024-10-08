#pragma once

namespace RE
{
	class ImageSpaceEffectParam
	{
	public:
		inline static constexpr auto RTTI = RTTI_ImageSpaceEffectParam;
		inline static constexpr auto VTABLE = VTABLE_ImageSpaceEffectParam;

		virtual ~ImageSpaceEffectParam();  // 00
	};
	static_assert(sizeof(ImageSpaceEffectParam) == 0x8);
}
