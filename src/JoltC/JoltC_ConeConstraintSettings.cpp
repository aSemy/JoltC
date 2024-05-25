#include "JoltC/JoltC_ConeConstraintSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ConeConstraintSettings_t * JoltC_ConeConstraintSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_ConeConstraintSettings_t * cInstance = new JoltC_ConeConstraintSettings_t();
    ConeConstraintSettings * cppInstance = new ConeConstraintSettings();
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

JoltC_Constraint_t * JoltC_ConeConstraintSettings_Create(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
) {
  try {
    ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
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

unsigned long JoltC_ConeConstraintSettings_GetRefCount(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
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

void JoltC_ConeConstraintSettings_AddRef(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ConeConstraintSettings_Release(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
    
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

JoltC_EConstraintSpace JoltC_ConeConstraintSettings_mSpace_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
};

void JoltC_ConeConstraintSettings_mSpace_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JoltC_RVec3_t * JoltC_ConeConstraintSettings_mPoint1_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_ConeConstraintSettings_mPoint1_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *reinterpret_cast<RVec3 *>(mPoint1->obj);
};

JoltC_Vec3_t * JoltC_ConeConstraintSettings_mTwistAxis1_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mTwistAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_ConeConstraintSettings_mTwistAxis1_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis1,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis1 = *reinterpret_cast<Vec3 *>(mTwistAxis1->obj);
};

JoltC_RVec3_t * JoltC_ConeConstraintSettings_mPoint2_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_ConeConstraintSettings_mPoint2_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *reinterpret_cast<RVec3 *>(mPoint2->obj);
};

JoltC_Vec3_t * JoltC_ConeConstraintSettings_mTwistAxis2_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mTwistAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_ConeConstraintSettings_mTwistAxis2_Set(
  JoltC_ConeConstraintSettings_t * self,
  JoltC_Vec3_t * mTwistAxis2,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mTwistAxis2 = *reinterpret_cast<Vec3 *>(mTwistAxis2->obj);
};

float JoltC_ConeConstraintSettings_mHalfConeAngle_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  float result = selfCpp->mHalfConeAngle;
  return result;
};

void JoltC_ConeConstraintSettings_mHalfConeAngle_Set(
  JoltC_ConeConstraintSettings_t * self,
  float mHalfConeAngle,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mHalfConeAngle = mHalfConeAngle;
};

bool JoltC_ConeConstraintSettings_mEnabled_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_ConeConstraintSettings_mEnabled_Set(
  JoltC_ConeConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_ConeConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_ConeConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_ConeConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_ConeConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_ConeConstraintSettings_t * self,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_ConeConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_ConeConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
) {
  ConeConstraintSettings * selfCpp = static_cast<ConeConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

