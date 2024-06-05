#include "JoltC/JoltC_ArraySoftBodyVertex.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodyVertex_empty(
  JoltC_ArraySoftBodyVertex_t * self
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArraySoftBodyVertex_size(
  JoltC_ArraySoftBodyVertex_t * self
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  long result = selfCpp->size();
  return result;
};

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
};

void JoltC_ArraySoftBodyVertex_push_back(
  JoltC_ArraySoftBodyVertex_t * self,
  JoltC_SoftBodyVertex_t * inValue
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  selfCpp->push_back(
    *reinterpret_cast<SoftBodyVertex *>(inValue->obj)
  );
};

void JoltC_ArraySoftBodyVertex_reserve(
  JoltC_ArraySoftBodyVertex_t * self,
  unsigned long inSize
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  selfCpp->reserve(
    inSize
  );
};

void JoltC_ArraySoftBodyVertex_resize(
  JoltC_ArraySoftBodyVertex_t * self,
  unsigned long inSize
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  selfCpp->resize(
    inSize
  );
};

void JoltC_ArraySoftBodyVertex_clear(
  JoltC_ArraySoftBodyVertex_t * self
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

