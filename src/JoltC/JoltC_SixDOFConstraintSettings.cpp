#include "JoltC/JoltC_SixDOFConstraintSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SixDOFConstraintSettings_t * JoltC_SixDOFConstraintSettings_new() {
  JoltC_SixDOFConstraintSettings_t * cInstance = new JoltC_SixDOFConstraintSettings_t();
  SixDOFConstraintSettings * cppInstance = new SixDOFConstraintSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_SixDOFConstraintSettings_MakeFreeAxis(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  
  selfCpp->MakeFreeAxis(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
};

bool JoltC_SixDOFConstraintSettings_IsFreeAxis(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  bool result = selfCpp->IsFreeAxis(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

void JoltC_SixDOFConstraintSettings_MakeFixedAxis(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  
  selfCpp->MakeFixedAxis(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
};

bool JoltC_SixDOFConstraintSettings_IsFixedAxis(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  bool result = selfCpp->IsFixedAxis(
    static_cast<SixDOFConstraintSettings_EAxis>(static_cast<int>(inAxis))
  );
  return result;
};

void JoltC_SixDOFConstraintSettings_SetLimitedAxis(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SixDOFConstraintSettings_EAxis inAxis,
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

JoltC_Constraint_t * JoltC_SixDOFConstraintSettings_Create(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  Constraint * resultValue = selfCpp->Create(
    *reinterpret_cast<Body *>(inBody1->obj),
    *reinterpret_cast<Body *>(inBody2->obj)
  );
  JoltC_Constraint_t* result = new JoltC_Constraint_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

unsigned long JoltC_SixDOFConstraintSettings_GetRefCount(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_SixDOFConstraintSettings_AddRef(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_SixDOFConstraintSettings_Release(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  
  selfCpp->Release();
};

//endregion

//region properties

JoltC_EConstraintSpace JoltC_SixDOFConstraintSettings_mSpace_Get(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
};

void JoltC_SixDOFConstraintSettings_mSpace_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JoltC_RVec3_t * JoltC_SixDOFConstraintSettings_mPosition1_Get(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  static RVec3 resultValue = selfCpp->mPosition1;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SixDOFConstraintSettings_mPosition1_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition1
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mPosition1 = *reinterpret_cast<RVec3 *>(mPosition1->obj);
};

JoltC_Vec3_t * JoltC_SixDOFConstraintSettings_mAxisX1_Get(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  static Vec3 resultValue = selfCpp->mAxisX1;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SixDOFConstraintSettings_mAxisX1_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisX1
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mAxisX1 = *reinterpret_cast<Vec3 *>(mAxisX1->obj);
};

JoltC_Vec3_t * JoltC_SixDOFConstraintSettings_mAxisY1_Get(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  static Vec3 resultValue = selfCpp->mAxisY1;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SixDOFConstraintSettings_mAxisY1_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisY1
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mAxisY1 = *reinterpret_cast<Vec3 *>(mAxisY1->obj);
};

JoltC_RVec3_t * JoltC_SixDOFConstraintSettings_mPosition2_Get(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  static RVec3 resultValue = selfCpp->mPosition2;
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SixDOFConstraintSettings_mPosition2_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_RVec3_t * mPosition2
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mPosition2 = *reinterpret_cast<RVec3 *>(mPosition2->obj);
};

JoltC_Vec3_t * JoltC_SixDOFConstraintSettings_mAxisX2_Get(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  static Vec3 resultValue = selfCpp->mAxisX2;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SixDOFConstraintSettings_mAxisX2_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisX2
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mAxisX2 = *reinterpret_cast<Vec3 *>(mAxisX2->obj);
};

JoltC_Vec3_t * JoltC_SixDOFConstraintSettings_mAxisY2_Get(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  static Vec3 resultValue = selfCpp->mAxisY2;
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_SixDOFConstraintSettings_mAxisY2_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisY2
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mAxisY2 = *reinterpret_cast<Vec3 *>(mAxisY2->obj);
};

size_t JoltC_SixDOFConstraintSettings_mMaxFriction_Get(
  JoltC_SixDOFConstraintSettings_t * self,
  float * outValue
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  size_t resultSize = std::size(selfCpp->mMaxFriction);
  // TODO get result array...
  return resultSize;
};

void JoltC_SixDOFConstraintSettings_mMaxFriction_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  float * mMaxFriction,
  size_t mMaxFrictionSize
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  for (size_t i = 0; i < mMaxFrictionSize; i++) {
    selfCpp->mMaxFriction[i] = mMaxFriction[i];
  };
};

JoltC_ESwingType JoltC_SixDOFConstraintSettings_mSwingType_Get(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  ESwingType result = selfCpp->mSwingType;
  return static_cast<JoltC_ESwingType>(static_cast<int>(result));
};

void JoltC_SixDOFConstraintSettings_mSwingType_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_ESwingType mSwingType
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mSwingType = static_cast<ESwingType>(static_cast<int>(mSwingType));
};

size_t JoltC_SixDOFConstraintSettings_mLimitMin_Get(
  JoltC_SixDOFConstraintSettings_t * self,
  float * outValue
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  size_t resultSize = std::size(selfCpp->mLimitMin);
  // TODO get result array...
  return resultSize;
};

void JoltC_SixDOFConstraintSettings_mLimitMin_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  float * mLimitMin,
  size_t mLimitMinSize
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  for (size_t i = 0; i < mLimitMinSize; i++) {
    selfCpp->mLimitMin[i] = mLimitMin[i];
  };
};

size_t JoltC_SixDOFConstraintSettings_mLimitMax_Get(
  JoltC_SixDOFConstraintSettings_t * self,
  float * outValue
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  size_t resultSize = std::size(selfCpp->mLimitMax);
  // TODO get result array...
  return resultSize;
};

void JoltC_SixDOFConstraintSettings_mLimitMax_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  float * mLimitMax,
  size_t mLimitMaxSize
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  for (size_t i = 0; i < mLimitMaxSize; i++) {
    selfCpp->mLimitMax[i] = mLimitMax[i];
  };
};

size_t JoltC_SixDOFConstraintSettings_mLimitsSpringSettings_Get(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SpringSettings_t * * outValue
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  size_t resultSize = std::size(selfCpp->mLimitsSpringSettings);
  // TODO get result array...
  return resultSize;
};

void JoltC_SixDOFConstraintSettings_mLimitsSpringSettings_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_SpringSettings_t * * mLimitsSpringSettings,
  size_t mLimitsSpringSettingsSize
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  for (size_t i = 0; i < mLimitsSpringSettingsSize; i++) {
    selfCpp->mLimitsSpringSettings[i] = *(reinterpret_cast<SpringSettings *>(mLimitsSpringSettings[i]->obj));
  };
};

size_t JoltC_SixDOFConstraintSettings_mMotorSettings_Get(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_MotorSettings_t * * outValue
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  size_t resultSize = std::size(selfCpp->mMotorSettings);
  // TODO get result array...
  return resultSize;
};

void JoltC_SixDOFConstraintSettings_mMotorSettings_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  JoltC_MotorSettings_t * * mMotorSettings,
  size_t mMotorSettingsSize
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  for (size_t i = 0; i < mMotorSettingsSize; i++) {
    selfCpp->mMotorSettings[i] = *(reinterpret_cast<MotorSettings *>(mMotorSettings[i]->obj));
  };
};

bool JoltC_SixDOFConstraintSettings_mEnabled_Get(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_SixDOFConstraintSettings_mEnabled_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  bool mEnabled
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_SixDOFConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_SixDOFConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  long mNumVelocityStepsOverride
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_SixDOFConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_SixDOFConstraintSettings_t * self
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_SixDOFConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_SixDOFConstraintSettings_t * self,
  long mNumPositionStepsOverride
) {
  SixDOFConstraintSettings * selfCpp = static_cast<SixDOFConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion

#ifdef __cplusplus
}
#endif

