#include "JoltC/JoltC_ConstraintSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_ConstraintSettings_GetRefCount(
  JoltC_ConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
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

void JoltC_ConstraintSettings_AddRef(
  JoltC_ConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ConstraintSettings_Release(
  JoltC_ConstraintSettings_t * self,
  char** outErrMsg
) {
  try {
    ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
    
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

bool JoltC_ConstraintSettings_mEnabled_Get(
  JoltC_ConstraintSettings_t * self,
  char** outErrMsg
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  bool result = selfCpp->mEnabled;
  return result;
};

void JoltC_ConstraintSettings_mEnabled_Set(
  JoltC_ConstraintSettings_t * self,
  bool mEnabled,
  char** outErrMsg
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  selfCpp->mEnabled = mEnabled;
};

long JoltC_ConstraintSettings_mNumVelocityStepsOverride_Get(
  JoltC_ConstraintSettings_t * self,
  char** outErrMsg
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  long result = selfCpp->mNumVelocityStepsOverride;
  return result;
};

void JoltC_ConstraintSettings_mNumVelocityStepsOverride_Set(
  JoltC_ConstraintSettings_t * self,
  long mNumVelocityStepsOverride,
  char** outErrMsg
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  selfCpp->mNumVelocityStepsOverride = mNumVelocityStepsOverride;
};

long JoltC_ConstraintSettings_mNumPositionStepsOverride_Get(
  JoltC_ConstraintSettings_t * self,
  char** outErrMsg
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  long result = selfCpp->mNumPositionStepsOverride;
  return result;
};

void JoltC_ConstraintSettings_mNumPositionStepsOverride_Set(
  JoltC_ConstraintSettings_t * self,
  long mNumPositionStepsOverride,
  char** outErrMsg
) {
  ConstraintSettings * selfCpp = static_cast<ConstraintSettings *>(self->obj);
  selfCpp->mNumPositionStepsOverride = mNumPositionStepsOverride;
};

//endregion properties

#ifdef __cplusplus
}
#endif

