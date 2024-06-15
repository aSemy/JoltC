#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ContactSettings_t * JoltC_ContactSettings_new();

//endregion

//region destructor

void JoltC_ContactSettings_destroy(
  JoltC_ContactSettings_t * self
);

//endregion
//region properties

float JoltC_ContactSettings_mCombinedFriction_Get(
  JoltC_ContactSettings_t * self
);

void JoltC_ContactSettings_mCombinedFriction_Set(
  JoltC_ContactSettings_t * self,
  float mCombinedFriction
);

float JoltC_ContactSettings_mCombinedRestitution_Get(
  JoltC_ContactSettings_t * self
);

void JoltC_ContactSettings_mCombinedRestitution_Set(
  JoltC_ContactSettings_t * self,
  float mCombinedRestitution
);

float JoltC_ContactSettings_mInvMassScale1_Get(
  JoltC_ContactSettings_t * self
);

void JoltC_ContactSettings_mInvMassScale1_Set(
  JoltC_ContactSettings_t * self,
  float mInvMassScale1
);

float JoltC_ContactSettings_mInvInertiaScale1_Get(
  JoltC_ContactSettings_t * self
);

void JoltC_ContactSettings_mInvInertiaScale1_Set(
  JoltC_ContactSettings_t * self,
  float mInvInertiaScale1
);

float JoltC_ContactSettings_mInvMassScale2_Get(
  JoltC_ContactSettings_t * self
);

void JoltC_ContactSettings_mInvMassScale2_Set(
  JoltC_ContactSettings_t * self,
  float mInvMassScale2
);

float JoltC_ContactSettings_mInvInertiaScale2_Get(
  JoltC_ContactSettings_t * self
);

void JoltC_ContactSettings_mInvInertiaScale2_Set(
  JoltC_ContactSettings_t * self,
  float mInvInertiaScale2
);

bool JoltC_ContactSettings_mIsSensor_Get(
  JoltC_ContactSettings_t * self
);

void JoltC_ContactSettings_mIsSensor_Set(
  JoltC_ContactSettings_t * self,
  bool mIsSensor
);

JoltC_Vec3_t * JoltC_ContactSettings_mRelativeLinearSurfaceVelocity_Get(
  JoltC_ContactSettings_t * self
);

void JoltC_ContactSettings_mRelativeLinearSurfaceVelocity_Set(
  JoltC_ContactSettings_t * self,
  JoltC_Vec3_t * mRelativeLinearSurfaceVelocity
);

JoltC_Vec3_t * JoltC_ContactSettings_mRelativeAngularSurfaceVelocity_Get(
  JoltC_ContactSettings_t * self
);

void JoltC_ContactSettings_mRelativeAngularSurfaceVelocity_Set(
  JoltC_ContactSettings_t * self,
  JoltC_Vec3_t * mRelativeAngularSurfaceVelocity
);

//endregion


#ifdef __cplusplus
}
#endif
