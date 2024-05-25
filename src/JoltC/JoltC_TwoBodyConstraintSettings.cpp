#include "JoltC/JoltC_TwoBodyConstraintSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Constraint_t * JoltC_TwoBodyConstraintSettings_Create(
  JoltC_TwoBodyConstraintSettings_t * self,
  JoltC_Body_t * inBody1,
  JoltC_Body_t * inBody2,
  char** outErrMsg
) {
  try {
    TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
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

unsigned long JoltC_TwoBodyConstraintSettings_GetRefCount(
  JoltC_TwoBodyConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
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

void JoltC_TwoBodyConstraintSettings_AddRef(
  JoltC_TwoBodyConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_TwoBodyConstraintSettings_Release(
  JoltC_TwoBodyConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
    
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

bool JoltC_TwoBodyConstraintSettings_mEnabled_Get(
  JoltC_TwoBodyConstraintSettings_t * self,
  char** outErrMsg
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_TwoBodyConstraintSettings_mEnabled_Set(
  JoltC_TwoBodyConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_TwoBodyConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_TwoBodyConstraintSettings_t * self,
  char** outErrMsg
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_TwoBodyConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_TwoBodyConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_TwoBodyConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_TwoBodyConstraintSettings_t * self,
  char** outErrMsg
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_TwoBodyConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_TwoBodyConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
) {
  TwoBodyConstraintSettings * selfCpp = static_cast<TwoBodyConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

