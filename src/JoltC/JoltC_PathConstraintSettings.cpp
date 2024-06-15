#include "JoltC/JoltC_PathConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `PathConstraintSettings` instance.
 */
JoltC_PathConstraintSettings_t * JoltC_PathConstraintSettings_new() {
  JoltC_PathConstraintSettings_t * cInstance = new JoltC_PathConstraintSettings_t();
  PathConstraintSettings * cppInstance = new PathConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_PathConstraintSettings_destroy(
  JoltC_PathConstraintSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<PathConstraintSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_Constraint_t * JoltC_PathConstraintSettings_Create(
  JoltC_PathConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
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

unsigned long JoltC_PathConstraintSettings_GetRefCount(
  JoltC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_PathConstraintSettings_AddRef(
  JoltC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_PathConstraintSettings_Release(
  JoltC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->Release();
}

//endregion

//region properties

JoltC_PathConstraintPath_t * JoltC_PathConstraintSettings_mPath_Get(
  JoltC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  const PathConstraintPath * resultPtr = selfCpp->mPath;
  JoltC_PathConstraintPath_t * result = new JoltC_PathConstraintPath_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_PathConstraintSettings_mPath_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_PathConstraintPath_t * mPath
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPath = static_cast<const PathConstraintPath *>(mPath->obj);
}

JoltC_Vec3_t * JoltC_PathConstraintSettings_mPathPosition_Get(
  JoltC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mPathPosition;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_PathConstraintSettings_mPathPosition_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_Vec3_t * mPathPosition
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPathPosition = *static_cast<Vec3 *>(mPathPosition->obj);
}

JoltC_Quat_t * JoltC_PathConstraintSettings_mPathRotation_Get(
  JoltC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->mPathRotation;
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_PathConstraintSettings_mPathRotation_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_Quat_t * mPathRotation
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPathRotation = *static_cast<Quat *>(mPathRotation->obj);
}

float JoltC_PathConstraintSettings_mPathFraction_Get(
  JoltC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  return selfCpp->mPathFraction;
}

void JoltC_PathConstraintSettings_mPathFraction_Set(
  JoltC_PathConstraintSettings_t * self,
  float mPathFraction
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPathFraction = mPathFraction;
}

float JoltC_PathConstraintSettings_mMaxFrictionForce_Get(
  JoltC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  return selfCpp->mMaxFrictionForce;
}

void JoltC_PathConstraintSettings_mMaxFrictionForce_Set(
  JoltC_PathConstraintSettings_t * self,
  float mMaxFrictionForce
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mMaxFrictionForce = mMaxFrictionForce;
}

JoltC_EPathRotationConstraintType JoltC_PathConstraintSettings_mRotationConstraintType_Get(
  JoltC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  EPathRotationConstraintType result = selfCpp->mRotationConstraintType;
  return static_cast<JoltC_EPathRotationConstraintType>(static_cast<int>(result));
}

void JoltC_PathConstraintSettings_mRotationConstraintType_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_EPathRotationConstraintType mRotationConstraintType
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mRotationConstraintType = static_cast<EPathRotationConstraintType>(static_cast<int>(mRotationConstraintType));
}

JoltC_MotorSettings_t * JoltC_PathConstraintSettings_mPositionMotorSettings_Get(
  JoltC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  MotorSettings * resultPtr = new MotorSettings();
  *resultPtr = selfCpp->mPositionMotorSettings;
  JoltC_MotorSettings_t * result = new JoltC_MotorSettings_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_PathConstraintSettings_mPositionMotorSettings_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_MotorSettings_t * mPositionMotorSettings
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPositionMotorSettings = *static_cast<MotorSettings *>(mPositionMotorSettings->obj);
}

bool JoltC_PathConstraintSettings_mEnabled_Get(
  JoltC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  return selfCpp->mEnabled;
}

void JoltC_PathConstraintSettings_mEnabled_Set(
  JoltC_PathConstraintSettings_t * self,
  bool mEnabled
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
}

long JoltC_PathConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  return selfCpp->mNumVelocityStepsOverride;
}

void JoltC_PathConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_PathConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
}

long JoltC_PathConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  return selfCpp->mNumPositionStepsOverride;
}

void JoltC_PathConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_PathConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
}

//endregion


#ifdef __cplusplus
}
#endif
