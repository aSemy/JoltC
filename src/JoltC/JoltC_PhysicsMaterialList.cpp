#include "JoltC/JoltC_PhysicsMaterialList.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `PhysicsMaterialList` instance.
 */
JoltC_PhysicsMaterialList_t * JoltC_PhysicsMaterialList_new() {
  JoltC_PhysicsMaterialList_t * cInstance = new JoltC_PhysicsMaterialList_t();
  PhysicsMaterialList * cppInstance = new PhysicsMaterialList();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_PhysicsMaterialList_empty(
  JoltC_PhysicsMaterialList_t * self
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  return selfCpp->empty();
}

long JoltC_PhysicsMaterialList_size(
  JoltC_PhysicsMaterialList_t * self
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  return selfCpp->size();
}

JoltC_PhysicsMaterial_t * JoltC_PhysicsMaterialList_at(
  JoltC_PhysicsMaterialList_t * self,
  long inIndex
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  const PhysicsMaterial * resultPtr = selfCpp->at(
    inIndex
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_PhysicsMaterialList_push_back(
  JoltC_PhysicsMaterialList_t * self,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  const PhysicsMaterial * inMaterialCpp = static_cast<const PhysicsMaterial *>(inMaterial->obj);
  selfCpp->push_back(
    inMaterialCpp
  );
}

void JoltC_PhysicsMaterialList_reserve(
  JoltC_PhysicsMaterialList_t * self,
  unsigned long inSize
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_PhysicsMaterialList_resize(
  JoltC_PhysicsMaterialList_t * self,
  unsigned long inSize
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_PhysicsMaterialList_clear(
  JoltC_PhysicsMaterialList_t * self
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  selfCpp->clear();
}

//endregion

#ifdef __cplusplus
}
#endif

