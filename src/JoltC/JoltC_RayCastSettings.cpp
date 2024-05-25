#include "JoltC/JPC_RayCastSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RayCastSettings_t * JPC_RayCastSettings_new() {
  JPC_RayCastSettings_t * cInstance = new JPC_RayCastSettings_t();
  RayCastSettings * cppInstance = new RayCastSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

JPC_EBackFaceMode JPC_RayCastSettings_mBackFaceMode_Get(
  JPC_RayCastSettings_t * self
) {
  RayCastSettings * selfCpp = static_cast<RayCastSettings *>(self->obj);
  EBackFaceMode result = selfCpp->mBackFaceMode;
  return static_cast<JPC_EBackFaceMode>(static_cast<int>(result));
};

void JPC_RayCastSettings_mBackFaceMode_Set(
  JPC_RayCastSettings_t * self,
  JPC_EBackFaceMode mBackFaceMode
) {
  RayCastSettings * selfCpp = static_cast<RayCastSettings *>(self->obj);
  selfCpp->mBackFaceMode = static_cast<EBackFaceMode>(static_cast<int>(mBackFaceMode));
};

bool JPC_RayCastSettings_mTreatConvexAsSolid_Get(
  JPC_RayCastSettings_t * self
) {
  RayCastSettings * selfCpp = static_cast<RayCastSettings *>(self->obj);
  bool result = selfCpp->mTreatConvexAsSolid;
  return result;
};

void JPC_RayCastSettings_mTreatConvexAsSolid_Set(
  JPC_RayCastSettings_t * self,
  bool mTreatConvexAsSolid
) {
  RayCastSettings * selfCpp = static_cast<RayCastSettings *>(self->obj);
  selfCpp->mTreatConvexAsSolid = mTreatConvexAsSolid;
};

//endregion properties

#ifdef __cplusplus
}
#endif

