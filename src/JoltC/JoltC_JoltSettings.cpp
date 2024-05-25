#include "JoltC/JPC_JoltSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_JoltSettings_t * JPC_JoltSettings_new() {
  JPC_JoltSettings_t * cInstance = new JPC_JoltSettings_t();
  JoltSettings * cppInstance = new JoltSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

unsigned long JPC_JoltSettings_mMaxBodies_Get(
  JPC_JoltSettings_t * self
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxBodies;
  return result;
};

void JPC_JoltSettings_mMaxBodies_Set(
  JPC_JoltSettings_t * self,
  unsigned long mMaxBodies
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mMaxBodies = mMaxBodies;
};

unsigned long JPC_JoltSettings_mMaxBodyPairs_Get(
  JPC_JoltSettings_t * self
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxBodyPairs;
  return result;
};

void JPC_JoltSettings_mMaxBodyPairs_Set(
  JPC_JoltSettings_t * self,
  unsigned long mMaxBodyPairs
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mMaxBodyPairs = mMaxBodyPairs;
};

unsigned long JPC_JoltSettings_mMaxContactConstraints_Get(
  JPC_JoltSettings_t * self
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxContactConstraints;
  return result;
};

void JPC_JoltSettings_mMaxContactConstraints_Set(
  JPC_JoltSettings_t * self,
  unsigned long mMaxContactConstraints
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mMaxContactConstraints = mMaxContactConstraints;
};

JPC_BroadPhaseLayerInterface_t * JPC_JoltSettings_mBroadPhaseLayerInterface_Get(
  JPC_JoltSettings_t * self
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  BroadPhaseLayerInterface * result = selfCpp->mBroadPhaseLayerInterface;
  return reinterpret_cast<JPC_BroadPhaseLayerInterface_t *>(result);
};

void JPC_JoltSettings_mBroadPhaseLayerInterface_Set(
  JPC_JoltSettings_t * self,
  JPC_BroadPhaseLayerInterface_t * mBroadPhaseLayerInterface
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mBroadPhaseLayerInterface = reinterpret_cast<BroadPhaseLayerInterface *>(mBroadPhaseLayerInterface->obj);
};

JPC_ObjectVsBroadPhaseLayerFilter_t * JPC_JoltSettings_mObjectVsBroadPhaseLayerFilter_Get(
  JPC_JoltSettings_t * self
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  ObjectVsBroadPhaseLayerFilter * result = selfCpp->mObjectVsBroadPhaseLayerFilter;
  return reinterpret_cast<JPC_ObjectVsBroadPhaseLayerFilter_t *>(result);
};

void JPC_JoltSettings_mObjectVsBroadPhaseLayerFilter_Set(
  JPC_JoltSettings_t * self,
  JPC_ObjectVsBroadPhaseLayerFilter_t * mObjectVsBroadPhaseLayerFilter
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mObjectVsBroadPhaseLayerFilter = reinterpret_cast<ObjectVsBroadPhaseLayerFilter *>(mObjectVsBroadPhaseLayerFilter->obj);
};

JPC_ObjectLayerPairFilter_t * JPC_JoltSettings_mObjectLayerPairFilter_Get(
  JPC_JoltSettings_t * self
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  ObjectLayerPairFilter * result = selfCpp->mObjectLayerPairFilter;
  return reinterpret_cast<JPC_ObjectLayerPairFilter_t *>(result);
};

void JPC_JoltSettings_mObjectLayerPairFilter_Set(
  JPC_JoltSettings_t * self,
  JPC_ObjectLayerPairFilter_t * mObjectLayerPairFilter
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mObjectLayerPairFilter = reinterpret_cast<ObjectLayerPairFilter *>(mObjectLayerPairFilter->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

