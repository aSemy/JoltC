#include "JoltC/JPC_JoltInterface.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_JoltInterface_t * JPC_JoltInterface_new(
  const JPC_JoltSettings_t * inSettings
) {
  JPC_JoltInterface_t * cInstance = new JPC_JoltInterface_t();
  JoltInterface * cppInstance = new JoltInterface(
    *reinterpret_cast<JoltSettings *>(inSettings->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_JoltInterface_Step(
  JPC_JoltInterface_t * self,
  float inDeltaTime,
  long inCollisionSteps
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  
  selfCpp->Step(
  inDeltaTime,
  inCollisionSteps
  );
};

JPC_PhysicsSystem_t * JPC_JoltInterface_GetPhysicsSystem(
  JPC_JoltInterface_t * self
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  PhysicsSystem * result = selfCpp->GetPhysicsSystem();
  return reinterpret_cast<JPC_PhysicsSystem_t *>(result);
};

JPC_TempAllocator_t * JPC_JoltInterface_GetTempAllocator(
  JPC_JoltInterface_t * self
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  TempAllocator * result = selfCpp->GetTempAllocator();
  return reinterpret_cast<JPC_TempAllocator_t *>(result);
};

JPC_ObjectLayerPairFilter_t * JPC_JoltInterface_GetObjectLayerPairFilter(
  JPC_JoltInterface_t * self
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  ObjectLayerPairFilter * result = selfCpp->GetObjectLayerPairFilter();
  return reinterpret_cast<JPC_ObjectLayerPairFilter_t *>(result);
};

JPC_ObjectVsBroadPhaseLayerFilter_t * JPC_JoltInterface_GetObjectVsBroadPhaseLayerFilter(
  JPC_JoltInterface_t * self
) {
  JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
  ObjectVsBroadPhaseLayerFilter * result = selfCpp->GetObjectVsBroadPhaseLayerFilter();
  return reinterpret_cast<JPC_ObjectVsBroadPhaseLayerFilter_t *>(result);
};

unsigned long long int JPC_JoltInterface_sGetTotalMemory() {
  unsigned long long int result = JoltInterface::sGetTotalMemory();
  return result;
};

unsigned long long int JPC_JoltInterface_sGetFreeMemory() {
  unsigned long long int result = JoltInterface::sGetFreeMemory();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

