#include "JoltC/JoltC_JoltInterface.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_JoltInterface_t * JoltC_JoltInterface_new(
  const JoltC_JoltSettings_t * inSettings
) {
  JoltC_JoltInterface_t * cInstance = new JoltC_JoltInterface_t();
  JoltInterface * cppInstance = new JoltInterface(
    *reinterpret_cast<JoltSettings *>(inSettings->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

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
};

JoltC_PhysicsSystem_t * JoltC_JoltInterface_GetPhysicsSystem(
  JoltC_JoltInterface_t * self
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  PhysicsSystem * result = selfCpp->GetPhysicsSystem();
  return reinterpret_cast<JoltC_PhysicsSystem_t *>(result);
};

JoltC_TempAllocator_t * JoltC_JoltInterface_GetTempAllocator(
  JoltC_JoltInterface_t * self
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  TempAllocator * result = selfCpp->GetTempAllocator();
  return reinterpret_cast<JoltC_TempAllocator_t *>(result);
};

JoltC_ObjectLayerPairFilter_t * JoltC_JoltInterface_GetObjectLayerPairFilter(
  JoltC_JoltInterface_t * self
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  ObjectLayerPairFilter * result = selfCpp->GetObjectLayerPairFilter();
  return reinterpret_cast<JoltC_ObjectLayerPairFilter_t *>(result);
};

JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_JoltInterface_GetObjectVsBroadPhaseLayerFilter(
  JoltC_JoltInterface_t * self
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  ObjectVsBroadPhaseLayerFilter * result = selfCpp->GetObjectVsBroadPhaseLayerFilter();
  return reinterpret_cast<JoltC_ObjectVsBroadPhaseLayerFilter_t *>(result);
};

unsigned long long int JoltC_JoltInterface_sGetTotalMemory() {
  unsigned long long int result = JoltInterface::sGetTotalMemory();
  return result;
};

unsigned long long int JoltC_JoltInterface_sGetFreeMemory() {
  unsigned long long int result = JoltInterface::sGetFreeMemory();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

