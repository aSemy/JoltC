#include "JoltC/JoltC_ArraySoftBodyVertex.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArraySoftBodyVertex_destroy(
  JoltC_ArraySoftBodyVertex_t * self
){
  if (self == NULL) return;
  delete static_cast<ArraySoftBodyVertex *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_ArraySoftBodyVertex_empty(
  JoltC_ArraySoftBodyVertex_t * self
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArraySoftBodyVertex_size(
  JoltC_ArraySoftBodyVertex_t * self
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  return selfCpp->size();
}

JoltC_SoftBodyVertex_t * JoltC_ArraySoftBodyVertex_at(
  JoltC_ArraySoftBodyVertex_t * self,
  long inIndex
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  SoftBodyVertex* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_SoftBodyVertex_t* result = new JoltC_SoftBodyVertex_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArraySoftBodyVertex_push_back(
  JoltC_ArraySoftBodyVertex_t * self,
  JoltC_SoftBodyVertex_t * inValue
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  const SoftBodyVertex * inValueCpp = static_cast<const SoftBodyVertex *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArraySoftBodyVertex_reserve(
  JoltC_ArraySoftBodyVertex_t * self,
  unsigned long inSize
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArraySoftBodyVertex_resize(
  JoltC_ArraySoftBodyVertex_t * self,
  unsigned long inSize
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArraySoftBodyVertex_clear(
  JoltC_ArraySoftBodyVertex_t * self
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  selfCpp->clear();
}

//endregion


#ifdef __cplusplus
}
#endif
