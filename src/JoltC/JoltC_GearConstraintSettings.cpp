#include "JoltC/JoltC_GearConstraintSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_GearConstraintSettings_t * JoltC_GearConstraintSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_GearConstraintSettings_t * cInstance = new JoltC_GearConstraintSettings_t();
    GearConstraintSettings * cppInstance = new GearConstraintSettings();
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

void JoltC_GearConstraintSettings_SetRatio(
  JoltC_GearConstraintSettings_t * self,
  long inNumTeethGear1,
  long inNumTeethGear2,
  char** outErrMsg
) {
  try {
    GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
    
    selfCpp->SetRatio(
    inNumTeethGear1,
    inNumTeethGear2
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Constraint_t * JoltC_GearConstraintSettings_Create(
  JoltC_GearConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
) {
  try {
    GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
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

unsigned long JoltC_GearConstraintSettings_GetRefCount(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
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

void JoltC_GearConstraintSettings_AddRef(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_GearConstraintSettings_Release(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
    
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

JoltC_EConstraintSpace JoltC_GearConstraintSettings_mSpace_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  EConstraintSpace result = selfCpp->mSpace;
  return static_cast<JoltC_EConstraintSpace>(static_cast<int>(result));
};

void JoltC_GearConstraintSettings_mSpace_Set(
  JoltC_GearConstraintSettings_t * self,
  JoltC_EConstraintSpace mSpace,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mSpace = static_cast<EConstraintSpace>(static_cast<int>(mSpace));
};

JoltC_Vec3_t * JoltC_GearConstraintSettings_mHingeAxis1_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mHingeAxis1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_GearConstraintSettings_mHingeAxis1_Set(
  JoltC_GearConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis1,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis1 = *reinterpret_cast<Vec3 *>(mHingeAxis1->obj);
};

JoltC_Vec3_t * JoltC_GearConstraintSettings_mHingeAxis2_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mHingeAxis2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_GearConstraintSettings_mHingeAxis2_Set(
  JoltC_GearConstraintSettings_t * self,
  JoltC_Vec3_t * mHingeAxis2,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mHingeAxis2 = *reinterpret_cast<Vec3 *>(mHingeAxis2->obj);
};

float JoltC_GearConstraintSettings_mRatio_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  float result = selfCpp->mRatio;
  return result;
};

void JoltC_GearConstraintSettings_mRatio_Set(
  JoltC_GearConstraintSettings_t * self,
  float mRatio,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mRatio = mRatio;
};

bool JoltC_GearConstraintSettings_mEnabled_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_GearConstraintSettings_mEnabled_Set(
  JoltC_GearConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_GearConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_GearConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_GearConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_GearConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_GearConstraintSettings_t * self,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_GearConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_GearConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
) {
  GearConstraintSettings * selfCpp = static_cast<GearConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

