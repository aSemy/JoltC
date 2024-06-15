#include "JoltC/JoltC_ArrayMat44.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArrayMat44_destroy(
  JoltC_ArrayMat44_t * self
){
  if (self == NULL) return;
  delete static_cast<ArrayMat44 *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_ArrayMat44_empty(
  JoltC_ArrayMat44_t * self
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArrayMat44_size(
  JoltC_ArrayMat44_t * self
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  return selfCpp->size();
}

JoltC_Mat44_t * JoltC_ArrayMat44_at(
  JoltC_ArrayMat44_t * self,
  long inIndex
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  Mat44* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArrayMat44_push_back(
  JoltC_ArrayMat44_t * self,
  JoltC_Mat44_t * inValue
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  const Mat44 * inValueCpp = static_cast<const Mat44 *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArrayMat44_reserve(
  JoltC_ArrayMat44_t * self,
  unsigned long inSize
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArrayMat44_resize(
  JoltC_ArrayMat44_t * self,
  unsigned long inSize
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArrayMat44_clear(
  JoltC_ArrayMat44_t * self
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  selfCpp->clear();
}

JoltC_Mat44MemRef_t * JoltC_ArrayMat44_data(
  JoltC_ArrayMat44_t * self
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  const Mat44MemRef * resultPtr = selfCpp->data();
  JoltC_Mat44MemRef_t * result = new JoltC_Mat44MemRef_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

//endregion


#ifdef __cplusplus
}
#endif
