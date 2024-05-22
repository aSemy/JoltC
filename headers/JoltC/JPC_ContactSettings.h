#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ContactSettings_t * JPC_ContactSettings_new();

//endregion constructors

//region properties

float JPC_ContactSettings_mCombinedFriction_Get(
  JPC_ContactSettings_t * self
);

void JPC_ContactSettings_mCombinedFriction_Set(
  JPC_ContactSettings_t * self,
  float mCombinedFriction
);

float JPC_ContactSettings_mCombinedRestitution_Get(
  JPC_ContactSettings_t * self
);

void JPC_ContactSettings_mCombinedRestitution_Set(
  JPC_ContactSettings_t * self,
  float mCombinedRestitution
);

float JPC_ContactSettings_mInvMassScale1_Get(
  JPC_ContactSettings_t * self
);

void JPC_ContactSettings_mInvMassScale1_Set(
  JPC_ContactSettings_t * self,
  float mInvMassScale1
);

float JPC_ContactSettings_mInvInertiaScale1_Get(
  JPC_ContactSettings_t * self
);

void JPC_ContactSettings_mInvInertiaScale1_Set(
  JPC_ContactSettings_t * self,
  float mInvInertiaScale1
);

float JPC_ContactSettings_mInvMassScale2_Get(
  JPC_ContactSettings_t * self
);

void JPC_ContactSettings_mInvMassScale2_Set(
  JPC_ContactSettings_t * self,
  float mInvMassScale2
);

float JPC_ContactSettings_mInvInertiaScale2_Get(
  JPC_ContactSettings_t * self
);

void JPC_ContactSettings_mInvInertiaScale2_Set(
  JPC_ContactSettings_t * self,
  float mInvInertiaScale2
);

bool JPC_ContactSettings_mIsSensor_Get(
  JPC_ContactSettings_t * self
);

void JPC_ContactSettings_mIsSensor_Set(
  JPC_ContactSettings_t * self,
  bool mIsSensor
);

JPC_Vec3_t * JPC_ContactSettings_mRelativeLinearSurfaceVelocity_Get(
  JPC_ContactSettings_t * self
);

void JPC_ContactSettings_mRelativeLinearSurfaceVelocity_Set(
  JPC_ContactSettings_t * self,
  JPC_Vec3_t * mRelativeLinearSurfaceVelocity
);

JPC_Vec3_t * JPC_ContactSettings_mRelativeAngularSurfaceVelocity_Get(
  JPC_ContactSettings_t * self
);

void JPC_ContactSettings_mRelativeAngularSurfaceVelocity_Set(
  JPC_ContactSettings_t * self,
  JPC_Vec3_t * mRelativeAngularSurfaceVelocity
);

//endregion properties


#ifdef __cplusplus
}
#endif

