#include "JoltC/JPC_SixDOFConstraintSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SixDOFConstraintSettings_t * JPC_SixDOFConstraintSettings_new() {
  JPC_SixDOFConstraintSettings_t * cInstance = new JPC_SixDOFConstraintSettings_t();
  SixDOFConstraintSettings * cppInstance = new SixDOFConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_SixDOFConstraintSettings_MakeFreeAxis(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  
  selfCpp->MakeFreeAxis(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
};

bool JPC_SixDOFConstraintSettings_IsFreeAxis(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  bool result = selfCpp->IsFreeAxis(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

void JPC_SixDOFConstraintSettings_MakeFixedAxis(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  
  selfCpp->MakeFixedAxis(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
};

bool JPC_SixDOFConstraintSettings_IsFixedAxis(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  bool result = selfCpp->IsFixedAxis(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

void JPC_SixDOFConstraintSettings_SetLimitedAxis(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SixDOFConstraintSettings_EAxis inAxis,
  float inMin,
  float inMax
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  
  selfCpp->SetLimitedAxis(
  static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis)),
  inMin,
  inMax
  );
};

JPC_Constraint_t * JPC_SixDOFConstraintSettings_Create(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_Body_t * inBody1,
  JPC_Body_t * inBody2
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  Constraint * result = selfCpp->Create(
  *reinterpret_cast<Body *>(inBody1->obj),
  *reinterpret_cast<Body *>(inBody2->obj)
  );
  return reinterpret_cast<JPC_Constraint_t *>(result);
};

unsigned long JPC_SixDOFConstraintSettings_GetRefCount(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_SixDOFConstraintSettings_AddRef(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_SixDOFConstraintSettings_Release(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

//region properties

JPC_EConstraintSpace JPC_SixDOFConstraintSettings_mSpace_Get(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JPC_EConstraintSpace>(static_cast<int>(result));
};

void JPC_SixDOFConstraintSettings_mSpace_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_EConstraintSpace mSpace
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JPC_RVec3_t * JPC_SixDOFConstraintSettings_mPosition1_Get(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPosition1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_SixDOFConstraintSettings_mPosition1_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_RVec3_t * mPosition1
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mPosition1 = *reinterpret_cast<RVec3 *>(mPosition1->obj);
};

JPC_Vec3_t * JPC_SixDOFConstraintSettings_mAxisX1_Get(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAxisX1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SixDOFConstraintSettings_mAxisX1_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_Vec3_t * mAxisX1
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mAxisX1 = *reinterpret_cast<Vec3 *>(mAxisX1->obj);
};

JPC_Vec3_t * JPC_SixDOFConstraintSettings_mAxisY1_Get(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAxisY1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SixDOFConstraintSettings_mAxisY1_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_Vec3_t * mAxisY1
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mAxisY1 = *reinterpret_cast<Vec3 *>(mAxisY1->obj);
};

JPC_RVec3_t * JPC_SixDOFConstraintSettings_mPosition2_Get(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPosition2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

void JPC_SixDOFConstraintSettings_mPosition2_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_RVec3_t * mPosition2
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mPosition2 = *reinterpret_cast<RVec3 *>(mPosition2->obj);
};

JPC_Vec3_t * JPC_SixDOFConstraintSettings_mAxisX2_Get(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAxisX2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SixDOFConstraintSettings_mAxisX2_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_Vec3_t * mAxisX2
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mAxisX2 = *reinterpret_cast<Vec3 *>(mAxisX2->obj);
};

JPC_Vec3_t * JPC_SixDOFConstraintSettings_mAxisY2_Get(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAxisY2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_SixDOFConstraintSettings_mAxisY2_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_Vec3_t * mAxisY2
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mAxisY2 = *reinterpret_cast<Vec3 *>(mAxisY2->obj);
};

size_t JPC_SixDOFConstraintSettings_mMaxFriction_Get(
  JPC_SixDOFConstraintSettings_t * self,
  float * outValue
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  size_t resultSize = std::size(selfCpp->mMaxFriction);
  // TODO get result array...
  return resultSize;
};

void JPC_SixDOFConstraintSettings_mMaxFriction_Set(
  JPC_SixDOFConstraintSettings_t * self,
  float * mMaxFriction,
  size_t mMaxFrictionSize
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  for (size_t i = 0; i < mMaxFrictionSize; i++) {
    selfCpp->mMaxFriction[i] = mMaxFriction[i];
  };
};

JPC_ESwingType JPC_SixDOFConstraintSettings_mSwingType_Get(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  ESwingType result = selfCpp->mSwingType;
  return static_cast<JPC_ESwingType>(static_cast<int>(result));
};

void JPC_SixDOFConstraintSettings_mSwingType_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_ESwingType mSwingType
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mSwingType = static_cast<ESwingType>(static_cast<int>(mSwingType));
};

size_t JPC_SixDOFConstraintSettings_mLimitMin_Get(
  JPC_SixDOFConstraintSettings_t * self,
  float * outValue
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  size_t resultSize = std::size(selfCpp->mLimitMin);
  // TODO get result array...
  return resultSize;
};

void JPC_SixDOFConstraintSettings_mLimitMin_Set(
  JPC_SixDOFConstraintSettings_t * self,
  float * mLimitMin,
  size_t mLimitMinSize
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  for (size_t i = 0; i < mLimitMinSize; i++) {
    selfCpp->mLimitMin[i] = mLimitMin[i];
  };
};

size_t JPC_SixDOFConstraintSettings_mLimitMax_Get(
  JPC_SixDOFConstraintSettings_t * self,
  float * outValue
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  size_t resultSize = std::size(selfCpp->mLimitMax);
  // TODO get result array...
  return resultSize;
};

void JPC_SixDOFConstraintSettings_mLimitMax_Set(
  JPC_SixDOFConstraintSettings_t * self,
  float * mLimitMax,
  size_t mLimitMaxSize
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  for (size_t i = 0; i < mLimitMaxSize; i++) {
    selfCpp->mLimitMax[i] = mLimitMax[i];
  };
};

size_t JPC_SixDOFConstraintSettings_mLimitsSpringSettings_Get(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SpringSettings_t * * outValue
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  size_t resultSize = std::size(selfCpp->mLimitsSpringSettings);
  // TODO get result array...
  return resultSize;
};

void JPC_SixDOFConstraintSettings_mLimitsSpringSettings_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_SpringSettings_t * * mLimitsSpringSettings,
  size_t mLimitsSpringSettingsSize
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  for (size_t i = 0; i < mLimitsSpringSettingsSize; i++) {
    selfCpp->mLimitsSpringSettings[i] = *(reinterpret_cast<SpringSettings *>(mLimitsSpringSettings[i]->obj));
  };
};

size_t JPC_SixDOFConstraintSettings_mMotorSettings_Get(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_MotorSettings_t * * outValue
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  size_t resultSize = std::size(selfCpp->mMotorSettings);
  // TODO get result array...
  return resultSize;
};

void JPC_SixDOFConstraintSettings_mMotorSettings_Set(
  JPC_SixDOFConstraintSettings_t * self,
  JPC_MotorSettings_t * * mMotorSettings,
  size_t mMotorSettingsSize
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  for (size_t i = 0; i < mMotorSettingsSize; i++) {
    selfCpp->mMotorSettings[i] = *(reinterpret_cast<MotorSettings *>(mMotorSettings[i]->obj));
  };
};

bool JPC_SixDOFConstraintSettings_mEnabled_Get(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JPC_SixDOFConstraintSettings_mEnabled_Set(
  JPC_SixDOFConstraintSettings_t * self,
  bool mEnabled
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JPC_SixDOFConstraintSettings_mNumVelocityStepsOverride_Get(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JPC_SixDOFConstraintSettings_mNumVelocityStepsOverride_Set(
  JPC_SixDOFConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JPC_SixDOFConstraintSettings_mNumPositionStepsOverride_Get(
  JPC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JPC_SixDOFConstraintSettings_mNumPositionStepsOverride_Set(
  JPC_SixDOFConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

