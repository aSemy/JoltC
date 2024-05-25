#include "JoltC/JoltC_FixedConstraintSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_FixedConstraintSettings_t * JoltC_FixedConstraintSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_FixedConstraintSettings_t * cInstance = new JoltC_FixedConstraintSettings_t();
    FixedConstraintSettings * cppInstance = new FixedConstraintSettings();
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

JoltC_Constraint_t * JoltC_FixedConstraintSettings_Create(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
) {
  try {
    FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
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

unsigned long JoltC_FixedConstraintSettings_GetRefCount(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
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

void JoltC_FixedConstraintSettings_AddRef(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_FixedConstraintSettings_Release(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
    
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

JoltC_EConstraintSpace JoltC_FixedConstraintSettings_mSpace_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
};

void JoltC_FixedConstraintSettings_mSpace_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

bool JoltC_FixedConstraintSettings_mAutoDetectPoint_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  bool result = selfCpp->mAutoDetectPoint;
  return result;
};

void JoltC_FixedConstraintSettings_mAutoDetectPoint_Set(
  JoltC_FixedConstraintSettings_t * self,
  bool mAutoDetectPoint,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAutoDetectPoint = mAutoDetectPoint;
};

JoltC_RVec3_t * JoltC_FixedConstraintSettings_mPoint1_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint1;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_FixedConstraintSettings_mPoint1_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint1,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mPoint1 = *reinterpret_cast<RVec3 *>(mPoint1->obj);
};

JoltC_Vec3_t * JoltC_FixedConstraintSettings_mAxisX1_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAxisX1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_FixedConstraintSettings_mAxisX1_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisX1,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAxisX1 = *reinterpret_cast<Vec3 *>(mAxisX1->obj);
};

JoltC_Vec3_t * JoltC_FixedConstraintSettings_mAxisY1_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAxisY1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_FixedConstraintSettings_mAxisY1_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisY1,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAxisY1 = *reinterpret_cast<Vec3 *>(mAxisY1->obj);
};

JoltC_RVec3_t * JoltC_FixedConstraintSettings_mPoint2_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  RVec3 resultValue = selfCpp->mPoint2;
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JoltC_RVec3_t *>(result);
};

void JoltC_FixedConstraintSettings_mPoint2_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_RVec3_t * mPoint2,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mPoint2 = *reinterpret_cast<RVec3 *>(mPoint2->obj);
};

JoltC_Vec3_t * JoltC_FixedConstraintSettings_mAxisX2_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAxisX2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_FixedConstraintSettings_mAxisX2_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisX2,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAxisX2 = *reinterpret_cast<Vec3 *>(mAxisX2->obj);
};

JoltC_Vec3_t * JoltC_FixedConstraintSettings_mAxisY2_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mAxisY2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_FixedConstraintSettings_mAxisY2_Set(
  JoltC_FixedConstraintSettings_t * self,
  JoltC_Vec3_t * mAxisY2,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mAxisY2 = *reinterpret_cast<Vec3 *>(mAxisY2->obj);
};

bool JoltC_FixedConstraintSettings_mEnabled_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_FixedConstraintSettings_mEnabled_Set(
  JoltC_FixedConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_FixedConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_FixedConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_FixedConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_FixedConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_FixedConstraintSettings_t * self,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_FixedConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_FixedConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
) {
  FixedConstraintSettings * selfCpp = static_cast<FixedConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif
