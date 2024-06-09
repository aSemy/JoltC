#include "JoltC/JoltC_ConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_TwoBodyConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_TwoBodyConstraintSettings(
  JoltC_TwoBodyConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_FixedConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_FixedConstraintSettings(
  JoltC_FixedConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_DistanceConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_DistanceConstraintSettings(
  JoltC_DistanceConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_PointConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_PointConstraintSettings(
  JoltC_PointConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_HingeConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_HingeConstraintSettings(
  JoltC_HingeConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_ConeConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_ConeConstraintSettings(
  JoltC_ConeConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_SliderConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_SliderConstraintSettings(
  JoltC_SliderConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_SwingTwistConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_SwingTwistConstraintSettings(
  JoltC_SwingTwistConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_SixDOFConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_SixDOFConstraintSettings(
  JoltC_SixDOFConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_PathConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_PathConstraintSettings(
  JoltC_PathConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_PulleyConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_PulleyConstraintSettings(
  JoltC_PulleyConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_GearConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_GearConstraintSettings(
  JoltC_GearConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_RackAndPinionConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_RackAndPinionConstraintSettings(
  JoltC_RackAndPinionConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

/**
 * Convert an instance of JoltC_VehicleConstraintSettings_t into JoltC_ConstraintSettings_t.
 */
JoltC_ConstraintSettings_t * JoltC_ConstraintSettings_From_VehicleConstraintSettings(
  JoltC_VehicleConstraintSettings_t * subtype
) {
  return (JoltC_ConstraintSettings_t*) subtype;
};

//endregion

//region functions

unsigned long JoltC_ConstraintSettings_GetRefCount(
  JoltC_ConstraintSettings_t * self
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_ConstraintSettings_AddRef(
  JoltC_ConstraintSettings_t * self
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_ConstraintSettings_Release(
  JoltC_ConstraintSettings_t * self
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  selfCpp->Release();
}

//endregion

//region properties

bool JoltC_ConstraintSettings_mEnabled_Get(
  JoltC_ConstraintSettings_t * self
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  return selfCpp->mEnabled;
}

void JoltC_ConstraintSettings_mEnabled_Set(
  JoltC_ConstraintSettings_t * self,
  bool mEnabled
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_ConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_ConstraintSettings_t * self
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  return selfCpp->mNumVelocityStepsOverride;
}

void JoltC_ConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_ConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_ConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_ConstraintSettings_t * self
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  return selfCpp->mNumPositionStepsOverride;
}

void JoltC_ConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_ConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion

#ifdef __cplusplus
}
#endif

