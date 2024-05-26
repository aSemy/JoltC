#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_SphereShapeSettings_t into JoltC_ConvexShapeSettings_t.
 */
JoltC_ConvexShapeSettings_t * JoltC_ConvexShapeSettings_From_SphereShapeSettings(
  JoltC_SphereShapeSettings_t * subtype
);

/**
 * Convert an instance of JoltC_BoxShapeSettings_t into JoltC_ConvexShapeSettings_t.
 */
JoltC_ConvexShapeSettings_t * JoltC_ConvexShapeSettings_From_BoxShapeSettings(
  JoltC_BoxShapeSettings_t * subtype
);

/**
 * Convert an instance of JoltC_CylinderShapeSettings_t into JoltC_ConvexShapeSettings_t.
 */
JoltC_ConvexShapeSettings_t * JoltC_ConvexShapeSettings_From_CylinderShapeSettings(
  JoltC_CylinderShapeSettings_t * subtype
);

/**
 * Convert an instance of JoltC_CapsuleShapeSettings_t into JoltC_ConvexShapeSettings_t.
 */
JoltC_ConvexShapeSettings_t * JoltC_ConvexShapeSettings_From_CapsuleShapeSettings(
  JoltC_CapsuleShapeSettings_t * subtype
);

/**
 * Convert an instance of JoltC_TaperedCapsuleShapeSettings_t into JoltC_ConvexShapeSettings_t.
 */
JoltC_ConvexShapeSettings_t * JoltC_ConvexShapeSettings_From_TaperedCapsuleShapeSettings(
  JoltC_TaperedCapsuleShapeSettings_t * subtype
);

/**
 * Convert an instance of JoltC_ConvexHullShapeSettings_t into JoltC_ConvexShapeSettings_t.
 */
JoltC_ConvexShapeSettings_t * JoltC_ConvexShapeSettings_From_ConvexHullShapeSettings(
  JoltC_ConvexHullShapeSettings_t * subtype
);

//endregion

//region functions

unsigned long JoltC_ConvexShapeSettings_GetRefCount(
  JoltC_ConvexShapeSettings_t * self
);

void JoltC_ConvexShapeSettings_AddRef(
  JoltC_ConvexShapeSettings_t * self
);

void JoltC_ConvexShapeSettings_Release(
  JoltC_ConvexShapeSettings_t * self
);

JoltC_Shape_ShapeResult_t * JoltC_ConvexShapeSettings_Create(
  JoltC_ConvexShapeSettings_t * self
);

void JoltC_ConvexShapeSettings_ClearCachedResult(
  JoltC_ConvexShapeSettings_t * self
);

//endregion

//region properties

JoltC_PhysicsMaterial_t * JoltC_ConvexShapeSettings_mMaterial_Get(
  JoltC_ConvexShapeSettings_t * self
);

void JoltC_ConvexShapeSettings_mMaterial_Set(
  JoltC_ConvexShapeSettings_t * self,
  JoltC_PhysicsMaterial_t * mMaterial
);

float JoltC_ConvexShapeSettings_mDensity_Get(
  JoltC_ConvexShapeSettings_t * self
);

void JoltC_ConvexShapeSettings_mDensity_Set(
  JoltC_ConvexShapeSettings_t * self,
  float mDensity
);

unsigned long long int JoltC_ConvexShapeSettings_mUserData_Get(
  JoltC_ConvexShapeSettings_t * self
);

void JoltC_ConvexShapeSettings_mUserData_Set(
  JoltC_ConvexShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion


#ifdef __cplusplus
}
#endif

