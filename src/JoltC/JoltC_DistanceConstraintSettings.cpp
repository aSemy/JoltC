#include "JoltC/JoltC_DistanceConstraintSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_DistanceConstraintSettings_t * JoltC_DistanceConstraintSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_DistanceConstraintSettings_t * cInstance = new JoltC_DistanceConstraintSettings_t();
    DistanceConstraintSettings * cppInstance = new DistanceConstraintSettings();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

JoltC_Constraint_t * JoltC_DistanceConstraintSettings_Create(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
) {
  try {
    DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
    Constraint * result = selfCpp->Create(
    *reinterpret_cast<Body *>(inBody1->obj),
    *reinterpret_cast<Body *>(inBody2->obj)
    );
    return reinterpret_cast<JoltC_Constraint_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_DistanceConstraintSettings_GetRefCount(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
    unsigned long result = selfCpp->GetRefCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_DistanceConstraintSettings_AddRef(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_DistanceConstraintSettings_Release(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

//region properties

JoltC_EConstraintSpace JoltC_DistanceConstraintSettings_mSpace_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
};

void JoltC_DistanceConstraintSettings_mSpace_Set(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JoltC_RVec3_t * JoltC_DistanceConstraintSettings_mPoint1_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_DistanceConstraintSettings_mPoint1_Set(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *reinterpret_cast<RVec3 *>(mPoint1->obj);
};

JoltC_RVec3_t * JoltC_DistanceConstraintSettings_mPoint2_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_DistanceConstraintSettings_mPoint2_Set(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *reinterpret_cast<RVec3 *>(mPoint2->obj);
};

float JoltC_DistanceConstraintSettings_mMinDistance_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  float result = selfCpp->mMinDistance;
  return result;
};

void JoltC_DistanceConstraintSettings_mMinDistance_Set(
  JoltC_DistanceConstraintSettings_t * self,
  float mMinDistance,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mMinDistance = mMinDistance;
};

float JoltC_DistanceConstraintSettings_mMaxDistance_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxDistance;
  return result;
};

void JoltC_DistanceConstraintSettings_mMaxDistance_Set(
  JoltC_DistanceConstraintSettings_t * self,
  float mMaxDistance,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mMaxDistance = mMaxDistance;
};

JoltC_SpringSettings_t * JoltC_DistanceConstraintSettings_mLimitsSpringSettings_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  SpringSettings resultValue = selfCpp->mLimitsSpringSettings;
  SpringSettings* result = new SpringSettings(resultValue);
  return reinterpret_cast<JoltC_SpringSettings_t *>(result);
};

void JoltC_DistanceConstraintSettings_mLimitsSpringSettings_Set(
  JoltC_DistanceConstraintSettings_t * self,
  JoltC_SpringSettings_t * mLimitsSpringSettings,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mLimitsSpringSettings = *reinterpret_cast<SpringSettings *>(mLimitsSpringSettings->obj);
};

bool JoltC_DistanceConstraintSettings_mEnabled_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_DistanceConstraintSettings_mEnabled_Set(
  JoltC_DistanceConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_DistanceConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_DistanceConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_DistanceConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_DistanceConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_DistanceConstraintSettings_t * self,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_DistanceConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_DistanceConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
) {
  DistanceConstraintSettings * selfCpp = static_cast<DistanceConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif
