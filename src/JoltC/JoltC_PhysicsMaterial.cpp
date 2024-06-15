#include "JoltC/JoltC_PhysicsMaterial.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `PhysicsMaterial` instance.
 */
JoltC_PhysicsMaterial_t * JoltC_PhysicsMaterial_new() {
  JoltC_PhysicsMaterial_t * cInstance = new JoltC_PhysicsMaterial_t();
  PhysicsMaterial * cppInstance = new PhysicsMaterial();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_PhysicsMaterial_destroy(
  JoltC_PhysicsMaterial_t * self
){
  if (self == NULL) return;
  delete static_cast<PhysicsMaterial *>(self->obj);
  free(self);
}

//endregion
//region functions

unsigned long JoltC_PhysicsMaterial_GetRefCount(
  JoltC_PhysicsMaterial_t * self
) {
  PhysicsMaterial * selfCpp = static_cast<PhysicsMaterial *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_PhysicsMaterial_AddRef(
  JoltC_PhysicsMaterial_t * self
) {
  PhysicsMaterial * selfCpp = static_cast<PhysicsMaterial *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_PhysicsMaterial_Release(
  JoltC_PhysicsMaterial_t * self
) {
  PhysicsMaterial * selfCpp = static_cast<PhysicsMaterial *>(self->obj);
  selfCpp->Release();
}

//endregion


#ifdef __cplusplus
}
#endif
