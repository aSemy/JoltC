#include "JoltC/JoltC_JoltSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_JoltSettings_t * JoltC_JoltSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_JoltSettings_t * cInstance = new JoltC_JoltSettings_t();
    JoltSettings * cppInstance = new JoltSettings();
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

unsigned long JoltC_JoltSettings_mMaxBodies_Get(
  JoltC_JoltSettings_t * self,
  char** outErrMsg
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxBodies;
  return result;
};

void JoltC_JoltSettings_mMaxBodies_Set(
  JoltC_JoltSettings_t * self,
  unsigned long mMaxBodies,
  char** outErrMsg
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mMaxBodies = mMaxBodies;
};

unsigned long JoltC_JoltSettings_mMaxBodyPairs_Get(
  JoltC_JoltSettings_t * self,
  char** outErrMsg
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxBodyPairs;
  return result;
};

void JoltC_JoltSettings_mMaxBodyPairs_Set(
  JoltC_JoltSettings_t * self,
  unsigned long mMaxBodyPairs,
  char** outErrMsg
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mMaxBodyPairs = mMaxBodyPairs;
};

unsigned long JoltC_JoltSettings_mMaxContactConstraints_Get(
  JoltC_JoltSettings_t * self,
  char** outErrMsg
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxContactConstraints;
  return result;
};

void JoltC_JoltSettings_mMaxContactConstraints_Set(
  JoltC_JoltSettings_t * self,
  unsigned long mMaxContactConstraints,
  char** outErrMsg
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mMaxContactConstraints = mMaxContactConstraints;
};

JoltC_BroadPhaseLayerInterface_t * JoltC_JoltSettings_mBroadPhaseLayerInterface_Get(
  JoltC_JoltSettings_t * self,
  char** outErrMsg
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  BroadPhaseLayerInterface * result = selfCpp->mBroadPhaseLayerInterface;
  return reinterpret_cast<JoltC_BroadPhaseLayerInterface_t *>(result);
};

void JoltC_JoltSettings_mBroadPhaseLayerInterface_Set(
  JoltC_JoltSettings_t * self,
  JoltC_BroadPhaseLayerInterface_t * mBroadPhaseLayerInterface,
  char** outErrMsg
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mBroadPhaseLayerInterface = reinterpret_cast<BroadPhaseLayerInterface *>(mBroadPhaseLayerInterface->obj);
};

JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_JoltSettings_mObjectVsBroadPhaseLayerFilter_Get(
  JoltC_JoltSettings_t * self,
  char** outErrMsg
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  ObjectVsBroadPhaseLayerFilter * result = selfCpp->mObjectVsBroadPhaseLayerFilter;
  return reinterpret_cast<JoltC_ObjectVsBroadPhaseLayerFilter_t *>(result);
};

void JoltC_JoltSettings_mObjectVsBroadPhaseLayerFilter_Set(
  JoltC_JoltSettings_t * self,
  JoltC_ObjectVsBroadPhaseLayerFilter_t * mObjectVsBroadPhaseLayerFilter,
  char** outErrMsg
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mObjectVsBroadPhaseLayerFilter = reinterpret_cast<ObjectVsBroadPhaseLayerFilter *>(mObjectVsBroadPhaseLayerFilter->obj);
};

JoltC_ObjectLayerPairFilter_t * JoltC_JoltSettings_mObjectLayerPairFilter_Get(
  JoltC_JoltSettings_t * self,
  char** outErrMsg
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  ObjectLayerPairFilter * result = selfCpp->mObjectLayerPairFilter;
  return reinterpret_cast<JoltC_ObjectLayerPairFilter_t *>(result);
};

void JoltC_JoltSettings_mObjectLayerPairFilter_Set(
  JoltC_JoltSettings_t * self,
  JoltC_ObjectLayerPairFilter_t * mObjectLayerPairFilter,
  char** outErrMsg
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mObjectLayerPairFilter = reinterpret_cast<ObjectLayerPairFilter *>(mObjectLayerPairFilter->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

