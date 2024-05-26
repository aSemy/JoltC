#include "JoltC/JoltC_PhysicsMaterialList.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

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
  bool result = selfCpp->empty();
  return result;
};

long JoltC_PhysicsMaterialList_size(
  JoltC_PhysicsMaterialList_t * self
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_PhysicsMaterial_t * JoltC_PhysicsMaterialList_at(
  JoltC_PhysicsMaterialList_t * self,
  long inIndex
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  const PhysicsMaterial * resultValue = selfCpp->at(
    inIndex
  );
  JoltC_PhysicsMaterial_t* result = new JoltC_PhysicsMaterial_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_PhysicsMaterialList_push_back(
  JoltC_PhysicsMaterialList_t * self,
  JoltC_PhysicsMaterial_t * inMaterial
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  
  selfCpp->push_back(
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
};

void JoltC_PhysicsMaterialList_reserve(
  JoltC_PhysicsMaterialList_t * self,
  unsigned long inSize
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  
  selfCpp->reserve(
    inSize
  );
};

void JoltC_PhysicsMaterialList_resize(
  JoltC_PhysicsMaterialList_t * self,
  unsigned long inSize
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  
  selfCpp->resize(
    inSize
  );
};

void JoltC_PhysicsMaterialList_clear(
  JoltC_PhysicsMaterialList_t * self
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

