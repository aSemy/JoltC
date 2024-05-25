#include "JoltC/JoltC_PathConstraintSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PathConstraintSettings_t * JoltC_PathConstraintSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_PathConstraintSettings_t * cInstance = new JoltC_PathConstraintSettings_t();
    PathConstraintSettings * cppInstance = new PathConstraintSettings();
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

JoltC_Constraint_t * JoltC_PathConstraintSettings_Create(
  JoltC_PathConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
) {
  try {
    PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
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

unsigned long JoltC_PathConstraintSettings_GetRefCount(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
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

void JoltC_PathConstraintSettings_AddRef(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PathConstraintSettings_Release(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
    
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

const JoltC_PathConstraintPath_t * JoltC_PathConstraintSettings_mPath_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  const PathConstraintPath * result = selfCpp->mPath;
  return reinterpret_cast<const JoltC_PathConstraintPath_t *>(result);
};

const void JoltC_PathConstraintSettings_mPath_Set(
  JoltC_PathConstraintSettings_t * self,
  const JoltC_PathConstraintPath_t * mPath,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPath = reinterpret_cast<PathConstraintPath *>(mPath->obj);
};

JoltC_Vec3_t * JoltC_PathConstraintSettings_mPathPosition_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mPathPosition;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_PathConstraintSettings_mPathPosition_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_Vec3_t * mPathPosition,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPathPosition = *reinterpret_cast<Vec3 *>(mPathPosition->obj);
};

JoltC_Quat_t * JoltC_PathConstraintSettings_mPathRotation_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  Quat resultValue = selfCpp->mPathRotation;
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

void JoltC_PathConstraintSettings_mPathRotation_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_Quat_t * mPathRotation,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPathRotation = *reinterpret_cast<Quat *>(mPathRotation->obj);
};

float JoltC_PathConstraintSettings_mPathFraction_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  float result = selfCpp->mPathFraction;
  return result;
};

void JoltC_PathConstraintSettings_mPathFraction_Set(
  JoltC_PathConstraintSettings_t * self,
  float mPathFraction,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPathFraction = mPathFraction;
};

float JoltC_PathConstraintSettings_mMaxFrictionForce_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  float result = selfCpp->mMaxFrictionForce;
  return result;
};

void JoltC_PathConstraintSettings_mMaxFrictionForce_Set(
  JoltC_PathConstraintSettings_t * self,
  float mMaxFrictionForce,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mMaxFrictionForce = mMaxFrictionForce;
};

JoltC_EPathRotationConstraintType JoltC_PathConstraintSettings_mRotationConstraintType_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  EPathRotationConstraintType result = selfCpp->mRotationConstraintType;
  return static_cast<JoltC_EPathRotationConstraintType>(static_cast<int>(result));
};

void JoltC_PathConstraintSettings_mRotationConstraintType_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_EPathRotationConstraintType mRotationConstraintType,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mRotationConstraintType = static_cast<EPathRotationConstraintType>(static_cast<int>(mRotationConstraintType));
};

JoltC_MotorSettings_t * JoltC_PathConstraintSettings_mPositionMotorSettings_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  MotorSettings resultValue = selfCpp->mPositionMotorSettings;
  MotorSettings* result = new MotorSettings(resultValue);
  return reinterpret_cast<JoltC_MotorSettings_t *>(result);
};

void JoltC_PathConstraintSettings_mPositionMotorSettings_Set(
  JoltC_PathConstraintSettings_t * self,
  JoltC_MotorSettings_t * mPositionMotorSettings,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mPositionMotorSettings = *reinterpret_cast<MotorSettings *>(mPositionMotorSettings->obj);
};

bool JoltC_PathConstraintSettings_mEnabled_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_PathConstraintSettings_mEnabled_Set(
  JoltC_PathConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_PathConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_PathConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_PathConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_PathConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_PathConstraintSettings_t * self,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_PathConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_PathConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
) {
  PathConstraintSettings * selfCpp = static_cast<PathConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

