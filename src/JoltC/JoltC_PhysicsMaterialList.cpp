#include "JoltC/JPC_PhysicsMaterialList.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_PhysicsMaterialList_t * JPC_PhysicsMaterialList_new() {
  JPC_PhysicsMaterialList_t * cInstance = new JPC_PhysicsMaterialList_t();
  PhysicsMaterialList * cppInstance = new PhysicsMaterialList();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_PhysicsMaterialList_empty(
  JPC_PhysicsMaterialList_t * self
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_PhysicsMaterialList_size(
  JPC_PhysicsMaterialList_t * self
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  long result = selfCpp->size();
  return result;
};

const JPC_PhysicsMaterial_t * JPC_PhysicsMaterialList_at(
  JPC_PhysicsMaterialList_t * self,
  long inIndex
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  const PhysicsMaterial * result = selfCpp->at(
  inIndex
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

void JPC_PhysicsMaterialList_push_back(
  JPC_PhysicsMaterialList_t * self,
  const JPC_PhysicsMaterial_t * inMaterial
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  
  selfCpp->push_back(
  reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
};

void JPC_PhysicsMaterialList_reserve(
  JPC_PhysicsMaterialList_t * self,
  unsigned long inSize
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_PhysicsMaterialList_resize(
  JPC_PhysicsMaterialList_t * self,
  unsigned long inSize
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_PhysicsMaterialList_clear(
  JPC_PhysicsMaterialList_t * self
) {
  PhysicsMaterialList * selfCpp = static_cast<PhysicsMaterialList *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

