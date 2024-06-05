#include "JoltC/JoltC_JoltSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_JoltSettings_t * JoltC_JoltSettings_new() {
  JoltC_JoltSettings_t * cInstance = new JoltC_JoltSettings_t();
  JoltSettings * cppInstance = new JoltSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

unsigned long JoltC_JoltSettings_mMaxBodies_Get(
  JoltC_JoltSettings_t * self
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxBodies;
  return result;
};

void JoltC_JoltSettings_mMaxBodies_Set(
  JoltC_JoltSettings_t * self,
  unsigned long mMaxBodies
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mMaxBodies = mMaxBodies;
};

unsigned long JoltC_JoltSettings_mMaxBodyPairs_Get(
  JoltC_JoltSettings_t * self
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxBodyPairs;
  return result;
};

void JoltC_JoltSettings_mMaxBodyPairs_Set(
  JoltC_JoltSettings_t * self,
  unsigned long mMaxBodyPairs
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mMaxBodyPairs = mMaxBodyPairs;
};

unsigned long JoltC_JoltSettings_mMaxContactConstraints_Get(
  JoltC_JoltSettings_t * self
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxContactConstraints;
  return result;
};

void JoltC_JoltSettings_mMaxContactConstraints_Set(
  JoltC_JoltSettings_t * self,
  unsigned long mMaxContactConstraints
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mMaxContactConstraints = mMaxContactConstraints;
};

JoltC_BroadPhaseLayerInterface_t * JoltC_JoltSettings_mBroadPhaseLayerInterface_Get(
  JoltC_JoltSettings_t * self
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  const BroadPhaseLayerInterface * resultValue = selfCpp->mBroadPhaseLayerInterface;
  JoltC_BroadPhaseLayerInterface_t* result = new JoltC_BroadPhaseLayerInterface_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_JoltSettings_mBroadPhaseLayerInterface_Set(
  JoltC_JoltSettings_t * self,
  JoltC_BroadPhaseLayerInterface_t * mBroadPhaseLayerInterface
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mBroadPhaseLayerInterface = reinterpret_cast<BroadPhaseLayerInterface *>(mBroadPhaseLayerInterface->obj);
};

JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_JoltSettings_mObjectVsBroadPhaseLayerFilter_Get(
  JoltC_JoltSettings_t * self
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  const ObjectVsBroadPhaseLayerFilter * resultValue = selfCpp->mObjectVsBroadPhaseLayerFilter;
  JoltC_ObjectVsBroadPhaseLayerFilter_t* result = new JoltC_ObjectVsBroadPhaseLayerFilter_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_JoltSettings_mObjectVsBroadPhaseLayerFilter_Set(
  JoltC_JoltSettings_t * self,
  JoltC_ObjectVsBroadPhaseLayerFilter_t * mObjectVsBroadPhaseLayerFilter
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mObjectVsBroadPhaseLayerFilter = reinterpret_cast<ObjectVsBroadPhaseLayerFilter *>(mObjectVsBroadPhaseLayerFilter->obj);
};

JoltC_ObjectLayerPairFilter_t * JoltC_JoltSettings_mObjectLayerPairFilter_Get(
  JoltC_JoltSettings_t * self
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  const ObjectLayerPairFilter * resultValue = selfCpp->mObjectLayerPairFilter;
  JoltC_ObjectLayerPairFilter_t* result = new JoltC_ObjectLayerPairFilter_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_JoltSettings_mObjectLayerPairFilter_Set(
  JoltC_JoltSettings_t * self,
  JoltC_ObjectLayerPairFilter_t * mObjectLayerPairFilter
) {
  JoltSettings * selfCpp = static_cast<JoltSettings *>(self->obj);
  selfCpp->mObjectLayerPairFilter = reinterpret_cast<ObjectLayerPairFilter *>(mObjectLayerPairFilter->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

