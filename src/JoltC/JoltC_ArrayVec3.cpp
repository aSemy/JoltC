#include "JoltC/JoltC_ArrayVec3.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayVec3_empty(
  JoltC_ArrayVec3_t * self
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArrayVec3_size(
  JoltC_ArrayVec3_t * self
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_Vec3_t * JoltC_ArrayVec3_at(
  JoltC_ArrayVec3_t * self,
  long inIndex
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  Vec3* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_ArrayVec3_push_back(
  JoltC_ArrayVec3_t * self,
  JoltC_Vec3_t * inValue
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  
  selfCpp->push_back(
    *reinterpret_cast<Vec3 *>(inValue->obj)
  );
};

void JoltC_ArrayVec3_reserve(
  JoltC_ArrayVec3_t * self,
  unsigned long inSize
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  
  selfCpp->reserve(
    inSize
  );
};

void JoltC_ArrayVec3_resize(
  JoltC_ArrayVec3_t * self,
  unsigned long inSize
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  
  selfCpp->resize(
    inSize
  );
};

void JoltC_ArrayVec3_clear(
  JoltC_ArrayVec3_t * self
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  
  selfCpp->clear();
};

JoltC_Vec3MemRef_t * JoltC_ArrayVec3_data(
  JoltC_ArrayVec3_t * self
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  Vec3MemRef * resultValue = selfCpp->data();
  JoltC_Vec3MemRef_t* result = new JoltC_Vec3MemRef_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

