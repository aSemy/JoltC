#include "JoltC/JoltC_JoltInterface.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `JoltInterface` instance.
 */
JoltC_JoltInterface_t * JoltC_JoltInterface_new(
  JoltC_JoltSettings_t * inSettings
) {
  const JoltSettings * inSettingsCpp = static_cast<const JoltSettings *>(inSettings->obj);
  JoltC_JoltInterface_t * cInstance = new JoltC_JoltInterface_t();
  JoltInterface * cppInstance = new JoltInterface(
    *inSettingsCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_JoltInterface_destroy(
  JoltC_JoltInterface_t * self
){
  if (self == NULL) return;
  delete static_cast<JoltInterface *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_JoltInterface_Step(
  JoltC_JoltInterface_t * self,
  float inDeltaTime,
  long inCollisionSteps
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  selfCpp->Step(
    inDeltaTime,
    inCollisionSteps
  );
}

JoltC_PhysicsSystem_t * JoltC_JoltInterface_GetPhysicsSystem(
  JoltC_JoltInterface_t * self
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  const PhysicsSystem * resultPtr = selfCpp->GetPhysicsSystem();
  JoltC_PhysicsSystem_t * result = new JoltC_PhysicsSystem_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_TempAllocator_t * JoltC_JoltInterface_GetTempAllocator(
  JoltC_JoltInterface_t * self
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  const TempAllocator * resultPtr = selfCpp->GetTempAllocator();
  JoltC_TempAllocator_t * result = new JoltC_TempAllocator_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_ObjectLayerPairFilter_t * JoltC_JoltInterface_GetObjectLayerPairFilter(
  JoltC_JoltInterface_t * self
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  const ObjectLayerPairFilter * resultPtr = selfCpp->GetObjectLayerPairFilter();
  JoltC_ObjectLayerPairFilter_t * result = new JoltC_ObjectLayerPairFilter_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_JoltInterface_GetObjectVsBroadPhaseLayerFilter(
  JoltC_JoltInterface_t * self
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  const ObjectVsBroadPhaseLayerFilter * resultPtr = selfCpp->GetObjectVsBroadPhaseLayerFilter();
  JoltC_ObjectVsBroadPhaseLayerFilter_t * result = new JoltC_ObjectVsBroadPhaseLayerFilter_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

unsigned long long int JoltC_JoltInterface_sGetTotalMemory() {
  return JoltInterface::sGetTotalMemory();
}

unsigned long long int JoltC_JoltInterface_sGetFreeMemory() {
  return JoltInterface::sGetFreeMemory();
}

//endregion


#ifdef __cplusplus
}
#endif
