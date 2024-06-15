#include "JoltC/JoltC_RayCastSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `RayCastSettings` instance.
 */
JoltC_RayCastSettings_t * JoltC_RayCastSettings_new() {
  JoltC_RayCastSettings_t * cInstance = new JoltC_RayCastSettings_t();
  RayCastSettings * cppInstance = new RayCastSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_RayCastSettings_destroy(
  JoltC_RayCastSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<RayCastSettings *>(self->obj);
  free(self);
}

//endregion
//region properties

JoltC_EBackFaceMode JoltC_RayCastSettings_mBackFaceMode_Get(
  JoltC_RayCastSettings_t * self
) {
  RayCastSettings * selfCpp = static_cast<RayCastSettings *>(self->obj);
  EBackFaceMode result = selfCpp->mBackFaceMode;
  return static_cast<JoltC_EBackFaceMode>(static_cast<int>(result));
}

void JoltC_RayCastSettings_mBackFaceMode_Set(
  JoltC_RayCastSettings_t * self,
  JoltC_EBackFaceMode mBackFaceMode
) {
  RayCastSettings * selfCpp = static_cast<RayCastSettings *>(self->obj);
  selfCpp->mBackFaceMode = static_cast<EBackFaceMode>(static_cast<int>(mBackFaceMode));
}

bool JoltC_RayCastSettings_mTreatConvexAsSolid_Get(
  JoltC_RayCastSettings_t * self
) {
  RayCastSettings * selfCpp = static_cast<RayCastSettings *>(self->obj);
  return selfCpp->mTreatConvexAsSolid;
}

void JoltC_RayCastSettings_mTreatConvexAsSolid_Set(
  JoltC_RayCastSettings_t * self,
  bool mTreatConvexAsSolid
) {
  RayCastSettings * selfCpp = static_cast<RayCastSettings *>(self->obj);
  selfCpp->mTreatConvexAsSolid = mTreatConvexAsSolid;
}

//endregion


#ifdef __cplusplus
}
#endif
