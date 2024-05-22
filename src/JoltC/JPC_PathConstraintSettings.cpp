#include "JoltC/JPC_PathConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_PathConstraintSettings_t * JPC_PathConstraintSettings_new() {
  JPC_PathConstraintSettings_t * cInstance = new JPC_PathConstraintSettings_t();
  PathConstraintSettings * cppInstance = new PathConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Constraint_t * JPC_PathConstraintSettings_Create(
  JPC_PathConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JPC_Constraint_t *>(result);
};

unsigned long JPC_PathConstraintSettings_GetRefCount(
  JPC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_PathConstraintSettings_AddRef(
  JPC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_PathConstraintSettings_Release(
  JPC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

const JPC_PathConstraintPath_t * JPC_PathConstraintSettings_mPath_Get(
  JPC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  const PathConstraintPath * result = selfCpp->mPath;
  return reinterpret_cast<const JPC_PathConstraintPath_t *>(result);
};

const void JPC_PathConstraintSettings_mPath_Set(
  JPC_PathConstraintSettings_t * self,
  const JPC_PathConstraintPath_t * mPath
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPath = reinterpret_cast<PathConstraintPath *>(mPath->obj);
};

JPC_Vec3_t * JPC_PathConstraintSettings_mPathPosition_Get(
  JPC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mPathPosition;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_PathConstraintSettings_mPathPosition_Set(
  JPC_PathConstraintSettings_t * self,
  JPC_Vec3_t * mPathPosition
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPathPosition = *reinterpret_cast<Vec3 *>(mPathPosition->obj);
};

JPC_Quat_t * JPC_PathConstraintSettings_mPathRotation_Get(
  JPC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  Quat resultValue = selfCpp->mPathRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

void JPC_PathConstraintSettings_mPathRotation_Set(
  JPC_PathConstraintSettings_t * self,
  JPC_Quat_t * mPathRotation
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPathRotation = *reinterpret_cast<Quat *>(mPathRotation->obj);
};

float JPC_PathConstraintSettings_mPathFraction_Get(
  JPC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  float result = selfCpp->mPathFraction;
  return result;
};

void JPC_PathConstraintSettings_mPathFraction_Set(
  JPC_PathConstraintSettings_t * self,
  float mPathFraction
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPathFraction = mPathFraction;
};

float JPC_PathConstraintSettings_mMaxFrictionForce_Get(
  JPC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxFrictionForce;
  return result;
};

void JPC_PathConstraintSettings_mMaxFrictionForce_Set(
  JPC_PathConstraintSettings_t * self,
  float mMaxFrictionForce
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mMaxFrictionForce = mMaxFrictionForce;
};

JPC_EPathRotationConstraintType JPC_PathConstraintSettings_mRotationConstraintType_Get(
  JPC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  EPathRotationConstraintType result = selfCpp->mRotationConstraintType;
  return static_cast<JPC_EPathRotationConstraintType>(static_cast<int>(result));
};

void JPC_PathConstraintSettings_mRotationConstraintType_Set(
  JPC_PathConstraintSettings_t * self,
  JPC_EPathRotationConstraintType mRotationConstraintType
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mRotationConstraintType = static_cast<EPathRotationConstraintType>(static_cast<int>(mRotationConstraintType));
};

JPC_MotorSettings_t * JPC_PathConstraintSettings_mPositionMotorSettings_Get(
  JPC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  MotorSettings resultValue = selfCpp->mPositionMotorSettings;
  MotorSettings* result = new MotorSettings(resultValue);
  return reinterpret_cast<JPC_MotorSettings_t *>(result);
};

void JPC_PathConstraintSettings_mPositionMotorSettings_Set(
  JPC_PathConstraintSettings_t * self,
  JPC_MotorSettings_t * mPositionMotorSettings
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPositionMotorSettings = *reinterpret_cast<MotorSettings *>(mPositionMotorSettings->obj);
};

bool JPC_PathConstraintSettings_mEnabled_Get(
  JPC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_PathConstraintSettings_mEnabled_Set(
  JPC_PathConstraintSettings_t * self,
  bool mEnabled
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_PathConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_PathConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_PathConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_PathConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_PathConstraintSettings_t * self
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_PathConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_PathConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

