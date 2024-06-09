#include "JoltC/JoltC_TwoBodyConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_FixedConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_FixedConstraintSettings(
  JoltC_FixedConstraintSettings_t * subtype
) {
  return (JoltC_TwoBodyConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_DistanceConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_DistanceConstraintSettings(
  JoltC_DistanceConstraintSettings_t * subtype
) {
  return (JoltC_TwoBodyConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_PointConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_PointConstraintSettings(
  JoltC_PointConstraintSettings_t * subtype
) {
  return (JoltC_TwoBodyConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_HingeConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_HingeConstraintSettings(
  JoltC_HingeConstraintSettings_t * subtype
) {
  return (JoltC_TwoBodyConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_ConeConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_ConeConstraintSettings(
  JoltC_ConeConstraintSettings_t * subtype
) {
  return (JoltC_TwoBodyConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_SliderConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_SliderConstraintSettings(
  JoltC_SliderConstraintSettings_t * subtype
) {
  return (JoltC_TwoBodyConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_SwingTwistConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_SwingTwistConstraintSettings(
  JoltC_SwingTwistConstraintSettings_t * subtype
) {
  return (JoltC_TwoBodyConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_SixDOFConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_SixDOFConstraintSettings(
  JoltC_SixDOFConstraintSettings_t * subtype
) {
  return (JoltC_TwoBodyConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_PathConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_PathConstraintSettings(
  JoltC_PathConstraintSettings_t * subtype
) {
  return (JoltC_TwoBodyConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_PulleyConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_PulleyConstraintSettings(
  JoltC_PulleyConstraintSettings_t * subtype
) {
  return (JoltC_TwoBodyConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_GearConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_GearConstraintSettings(
  JoltC_GearConstraintSettings_t * subtype
) {
  return (JoltC_TwoBodyConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_RackAndPinionConstraintSettings_t into JoltC_TwoBodyConstraintSettings_t.
 */
JoltC_TwoBodyConstraintSettings_t * JoltC_TwoBodyConstraintSettings_From_RackAndPinionConstraintSettings(
  JoltC_RackAndPinionConstraintSettings_t * subtype
) {
  return (JoltC_TwoBodyConstraintSettings_t*) subtype;
};

//endregion

//region functions

JoltC_Constraint_t * JoltC_TwoBodyConstraintSettings_Create(
  JoltC_TwoBodyConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  Body * inBody1Cpp = static_cast<Body *>(inBody1->obj);
  Body * inBody2Cpp = static_cast<Body *>(inBody2->obj);
  const Constraint * resultPtr = selfCpp->Create(
    *inBody1Cpp,
    *inBody2Cpp
  );
  JoltC_Constraint_t * result = new JoltC_Constraint_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

unsigned long JoltC_TwoBodyConstraintSettings_GetRefCount(
  JoltC_TwoBodyConstraintSettings_t * self
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_TwoBodyConstraintSettings_AddRef(
  JoltC_TwoBodyConstraintSettings_t * self
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_TwoBodyConstraintSettings_Release(
  JoltC_TwoBodyConstraintSettings_t * self
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  selfCpp->Release();
}

//endregion

//region properties

bool JoltC_TwoBodyConstraintSettings_mEnabled_Get(
  JoltC_TwoBodyConstraintSettings_t * self
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  return selfCpp->mEnabled;
}

void JoltC_TwoBodyConstraintSettings_mEnabled_Set(
  JoltC_TwoBodyConstraintSettings_t * self,
  bool mEnabled
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_TwoBodyConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_TwoBodyConstraintSettings_t * self
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  return selfCpp->mNumVelocityStepsOverride;
}

void JoltC_TwoBodyConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_TwoBodyConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_TwoBodyConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_TwoBodyConstraintSettings_t * self
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  return selfCpp->mNumPositionStepsOverride;
}

void JoltC_TwoBodyConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_TwoBodyConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion

#ifdef __cplusplus
}
#endif

