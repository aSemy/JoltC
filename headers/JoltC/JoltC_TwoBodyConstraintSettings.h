#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_FixedConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_FixedConstraintSettings(
  JoltC_FixedConstraintSettings_t * subtype
);

/**
 * Convert an instance of JoltC_DistanceConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_DistanceConstraintSettings(
  JoltC_DistanceConstraintSettings_t * subtype
);

/**
 * Convert an instance of JoltC_PointConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_PointConstraintSettings(
  JoltC_PointConstraintSettings_t * subtype
);

/**
 * Convert an instance of JoltC_HingeConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_HingeConstraintSettings(
  JoltC_HingeConstraintSettings_t * subtype
);

/**
 * Convert an instance of JoltC_ConeConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_ConeConstraintSettings(
  JoltC_ConeConstraintSettings_t * subtype
);

/**
 * Convert an instance of JoltC_SliderConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_SliderConstraintSettings(
  JoltC_SliderConstraintSettings_t * subtype
);

/**
 * Convert an instance of JoltC_SwingTwistConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_SwingTwistConstraintSettings(
  JoltC_SwingTwistConstraintSettings_t * subtype
);

/**
 * Convert an instance of JoltC_SixDOFConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_SixDOFConstraintSettings(
  JoltC_SixDOFConstraintSettings_t * subtype
);

/**
 * Convert an instance of JoltC_PathConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_PathConstraintSettings(
  JoltC_PathConstraintSettings_t * subtype
);

/**
 * Convert an instance of JoltC_PulleyConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_PulleyConstraintSettings(
  JoltC_PulleyConstraintSettings_t * subtype
);

/**
 * Convert an instance of JoltC_GearConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_GearConstraintSettings(
  JoltC_GearConstraintSettings_t * subtype
);

/**
 * Convert an instance of JoltC_RackAndPinionConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_RackAndPinionConstraintSettings(
  JoltC_RackAndPinionConstraintSettings_t * subtype
);

//endregion

//region functions

JoltC_Constraint_t * JoltC_TwoBodyConstraintSettings_Create(
  JoltC_TwoBodyConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
);

unsigned long JoltC_TwoBodyConstraintSettings_GetRefCount(
  JoltC_TwoBodyConstraintSettings_t * self
);

void JoltC_TwoBodyConstraintSettings_AddRef(
  JoltC_TwoBodyConstraintSettings_t * self
);

void JoltC_TwoBodyConstraintSettings_Release(
  JoltC_TwoBodyConstraintSettings_t * self
);

//endregion

//region properties

bool JoltC_TwoBodyConstraintSettings_mEnabled_Get(
  JoltC_TwoBodyConstraintSettings_t * self
);

void JoltC_TwoBodyConstraintSettings_mEnabled_Set(
  JoltC_TwoBodyConstraintSettings_t * self,
  bool mEnabled
);

long JoltC_TwoBodyConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_TwoBodyConstraintSettings_t * self
);

void JoltC_TwoBodyConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_TwoBodyConstraintSettings_t * self,
  long mNumVelocityStepsOverride
);

long JoltC_TwoBodyConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_TwoBodyConstraintSettings_t * self
);

void JoltC_TwoBodyConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_TwoBodyConstraintSettings_t * self,
  long mNumPositionStepsOverride
);

//endregion


#ifdef __cplusplus
}
#endif

