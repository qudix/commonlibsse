#pragma once

#include "RE/H/hkpEntity.h"

namespace RE
{
	class hkpRigidBody : public hkpEntity
	{
	public:
		inline static constexpr auto RTTI = RTTI_hkpRigidBody;
		inline static constexpr auto VTABLE = VTABLE_hkpRigidBody;

		~hkpRigidBody() override;  // 00

		// override (hkpEntity)
		hkWorldOperation::Result SetShape(const hkpShape* a_shape) override;               // 03
		hkWorldOperation::Result UpdateShape(hkpShapeModifier* a_shapeModifier) override;  // 04
		hkMotionState*           GetMotionState() override;                                // 05 - { return &motion.motionState; }

		// add
		virtual hkpRigidBody* Clone() const;  // 07

		void ApplyLinearImpulse(const hkVector4& a_impulse);
		void SetLinearVelocity(const hkVector4& a_newVel);
		void SetAngularVelocity(const hkVector4& a_newVel);
	};
	static_assert(sizeof(hkpRigidBody) == 0x2D0);
}
