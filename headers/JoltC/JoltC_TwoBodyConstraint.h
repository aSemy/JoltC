#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_DistanceConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_DistanceConstraint(
  JoltC_DistanceConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_PointConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_PointConstraint(
  JoltC_PointConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_HingeConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_HingeConstraint(
  JoltC_HingeConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_ConeConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_ConeConstraint(
  JoltC_ConeConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_SliderConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_SliderConstraint(
  JoltC_SliderConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_SwingTwistConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_SwingTwistConstraint(
  JoltC_SwingTwistConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_SixDOFConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_SixDOFConstraint(
  JoltC_SixDOFConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_PathConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_PathConstraint(
  JoltC_PathConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_PulleyConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_PulleyConstraint(
  JoltC_PulleyConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_GearConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_GearConstraint(
  JoltC_GearConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_RackAndPinionConstraint_t into JoltC_TwoBodyConstraint_t.
 */
JoltC_TwoBodyConstraint_t * JoltC_TwoBodyConstraint_From_RackAndPinionConstraint(
  JoltC_RackAndPinionConstraint_t * subtype
);

//endregion

//region functions

JoltC_Body_t * JoltC_TwoBodyConstraint_GetBody1(
  JoltC_TwoBodyConstraint_t * self
);

JoltC_Body_t * JoltC_TwoBodyConstraint_GetBody2(
  JoltC_TwoBodyConstraint_t * self
);

JoltC_Mat44_t * JoltC_TwoBodyConstraint_GetConstraintToBody1Matrix(
  JoltC_TwoBodyConstraint_t * self
);

JoltC_Mat44_t * JoltC_TwoBodyConstraint_GetConstraintToBody2Matrix(
  JoltC_TwoBodyConstraint_t * self
);

unsigned long JoltC_TwoBodyConstraint_GetRefCount(
  JoltC_TwoBodyConstraint_t * self
);

void JoltC_TwoBodyConstraint_AddRef(
  JoltC_TwoBodyConstraint_t * self
);

void JoltC_TwoBodyConstraint_Release(
  JoltC_TwoBodyConstraint_t * self
);

JoltC_EConstraintType JoltC_TwoBodyConstraint_GetType(
  JoltC_TwoBodyConstraint_t * self
);

JoltC_EConstraintSubType JoltC_TwoBodyConstraint_GetSubType(
  JoltC_TwoBodyConstraint_t * self
);

unsigned long JoltC_TwoBodyConstraint_GetConstraintPriority(
  JoltC_TwoBodyConstraint_t * self
);

void JoltC_TwoBodyConstraint_SetConstraintPriority(
  JoltC_TwoBodyConstraint_t * self,
  unsigned long inPriority
);

void JoltC_TwoBodyConstraint_SetNumVelocityStepsOverride(
  JoltC_TwoBodyConstraint_t * self,
  long inN
);

long JoltC_TwoBodyConstraint_GetNumVelocityStepsOverride(
  JoltC_TwoBodyConstraint_t * self
);

void JoltC_TwoBodyConstraint_SetNumPositionStepsOverride(
  JoltC_TwoBodyConstraint_t * self,
  long inN
);

long JoltC_TwoBodyConstraint_GetNumPositionStepsOverride(
  JoltC_TwoBodyConstraint_t * self
);

void JoltC_TwoBodyConstraint_SetEnabled(
  JoltC_TwoBodyConstraint_t * self,
  bool inEnabled
);

bool JoltC_TwoBodyConstraint_GetEnabled(
  JoltC_TwoBodyConstraint_t * self
);

bool JoltC_TwoBodyConstraint_IsActive(
  JoltC_TwoBodyConstraint_t * self
);

unsigned long long int JoltC_TwoBodyConstraint_GetUserData(
  JoltC_TwoBodyConstraint_t * self
);

void JoltC_TwoBodyConstraint_SetUserData(
  JoltC_TwoBodyConstraint_t * self,
  unsigned long long int inUserData
);

void JoltC_TwoBodyConstraint_ResetWarmStart(
  JoltC_TwoBodyConstraint_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

