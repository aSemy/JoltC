#include "JoltC/JPC_PhysicsMaterial.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_PhysicsMaterial_t * JPC_PhysicsMaterial_new() {
  JPC_PhysicsMaterial_t * cInstance = new JPC_PhysicsMaterial_t();
  PhysicsMaterial * cppInstance = new PhysicsMaterial();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_PhysicsMaterial_GetRefCount(
  JPC_PhysicsMaterial_t * self
) {
  PhysicsMaterial * selfCpp = static_cast<PhysicsMaterial *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_PhysicsMaterial_AddRef(
  JPC_PhysicsMaterial_t * self
) {
  PhysicsMaterial * selfCpp = static_cast<PhysicsMaterial *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_PhysicsMaterial_Release(
  JPC_PhysicsMaterial_t * self
) {
  PhysicsMaterial * selfCpp = static_cast<PhysicsMaterial *>(self->obj);
  
  selfCpp->Release();
};

//endregion functions

#ifdef __cplusplus
}
#endif

