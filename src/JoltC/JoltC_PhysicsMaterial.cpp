#include "JoltC/JoltC_PhysicsMaterial.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PhysicsMaterial_t * JoltC_PhysicsMaterial_new() {
  JoltC_PhysicsMaterial_t * cInstance = new JoltC_PhysicsMaterial_t();
  PhysicsMaterial * cppInstance = new PhysicsMaterial();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_PhysicsMaterial_GetRefCount(
  JoltC_PhysicsMaterial_t * self
) {
  PhysicsMaterial * selfCpp = static_cast<PhysicsMaterial *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_PhysicsMaterial_AddRef(
  JoltC_PhysicsMaterial_t * self
) {
  PhysicsMaterial * selfCpp = static_cast<PhysicsMaterial *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_PhysicsMaterial_Release(
  JoltC_PhysicsMaterial_t * self
) {
  PhysicsMaterial * selfCpp = static_cast<PhysicsMaterial *>(self->obj);
  
  selfCpp->Release();
};

//endregion

#ifdef __cplusplus
}
#endif

