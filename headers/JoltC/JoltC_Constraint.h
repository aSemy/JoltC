#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_Constraint_destroy(
  JoltC_Constraint_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_TwoBodyConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_TwoBodyConstraint(
  JoltC_TwoBodyConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_DistanceConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_DistanceConstraint(
  JoltC_DistanceConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_PointConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_PointConstraint(
  JoltC_PointConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_HingeConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_HingeConstraint(
  JoltC_HingeConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_ConeConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_ConeConstraint(
  JoltC_ConeConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_SliderConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_SliderConstraint(
  JoltC_SliderConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_SwingTwistConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_SwingTwistConstraint(
  JoltC_SwingTwistConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_SixDOFConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_SixDOFConstraint(
  JoltC_SixDOFConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_PathConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_PathConstraint(
  JoltC_PathConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_PulleyConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_PulleyConstraint(
  JoltC_PulleyConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_GearConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_GearConstraint(
  JoltC_GearConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_RackAndPinionConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_RackAndPinionConstraint(
  JoltC_RackAndPinionConstraint_t * subtype
);

/**
 * Convert an instance of JoltC_VehicleConstraint_t into JoltC_Constraint_t.
 */
JoltC_Constraint_t * JoltC_Constraint_From_VehicleConstraint(
  JoltC_VehicleConstraint_t * subtype
);

//endregion

//region functions

unsigned long JoltC_Constraint_GetRefCount(
  JoltC_Constraint_t * self
);

void JoltC_Constraint_AddRef(
  JoltC_Constraint_t * self
);

void JoltC_Constraint_Release(
  JoltC_Constraint_t * self
);

JoltC_EConstraintType JoltC_Constraint_GetType(
  JoltC_Constraint_t * self
);

JoltC_EConstraintSubType JoltC_Constraint_GetSubType(
  JoltC_Constraint_t * self
);

unsigned long JoltC_Constraint_GetConstraintPriority(
  JoltC_Constraint_t * self
);

void JoltC_Constraint_SetConstraintPriority(
  JoltC_Constraint_t * self,
  unsigned long inPriority
);

void JoltC_Constraint_SetNumVelocityStepsOverride(
  JoltC_Constraint_t * self,
  long inN
);

long JoltC_Constraint_GetNumVelocityStepsOverride(
  JoltC_Constraint_t * self
);

void JoltC_Constraint_SetNumPositionStepsOverride(
  JoltC_Constraint_t * self,
  long inN
);

long JoltC_Constraint_GetNumPositionStepsOverride(
  JoltC_Constraint_t * self
);

void JoltC_Constraint_SetEnabled(
  JoltC_Constraint_t * self,
  bool inEnabled
);

bool JoltC_Constraint_GetEnabled(
  JoltC_Constraint_t * self
);

bool JoltC_Constraint_IsActive(
  JoltC_Constraint_t * self
);

unsigned long long int JoltC_Constraint_GetUserData(
  JoltC_Constraint_t * self
);

void JoltC_Constraint_SetUserData(
  JoltC_Constraint_t * self,
  unsigned long long int inUserData
);

void JoltC_Constraint_ResetWarmStart(
  JoltC_Constraint_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
