#include "JoltC/JoltC_RayCastSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RayCastSettings_t * JoltC_RayCastSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_RayCastSettings_t * cInstance = new JoltC_RayCastSettings_t();
    RayCastSettings * cppInstance = new RayCastSettings();
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

//region properties

JoltC_EBackFaceMode JoltC_RayCastSettings_mBackFaceMode_Get(
  JoltC_RayCastSettings_t * self,
  char** outErrMsg
) {
  RayCastSettings * selfCpp = static_cast<RayCastSettings *>(self->obj);
  EBackFaceMode result = selfCpp->mBackFaceMode;
  return static_cast<JoltC_EBackFaceMode>(static_cast<int>(result));
};

void JoltC_RayCastSettings_mBackFaceMode_Set(
  JoltC_RayCastSettings_t * self,
  JoltC_EBackFaceMode mBackFaceMode,
  char** outErrMsg
) {
  RayCastSettings * selfCpp = static_cast<RayCastSettings *>(self->obj);
  selfCpp->mBackFaceMode = static_cast<EBackFaceMode>(static_cast<int>(mBackFaceMode));
};

bool JoltC_RayCastSettings_mTreatConvexAsSolid_Get(
  JoltC_RayCastSettings_t * self,
  char** outErrMsg
) {
  RayCastSettings * selfCpp = static_cast<RayCastSettings *>(self->obj);
  bool result = selfCpp->mTreatConvexAsSolid;
  return result;
};

void JoltC_RayCastSettings_mTreatConvexAsSolid_Set(
  JoltC_RayCastSettings_t * self,
  bool mTreatConvexAsSolid,
  char** outErrMsg
) {
  RayCastSettings * selfCpp = static_cast<RayCastSettings *>(self->obj);
  selfCpp->mTreatConvexAsSolid = mTreatConvexAsSolid;
};

//endregion properties

#ifdef __cplusplus
}
#endif

