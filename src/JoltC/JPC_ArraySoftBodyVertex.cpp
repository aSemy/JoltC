#include "JoltC/JPC_ArraySoftBodyVertex.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArraySoftBodyVertex_empty(
  JPC_ArraySoftBodyVertex_t * self
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArraySoftBodyVertex_size(
  JPC_ArraySoftBodyVertex_t * self
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_SoftBodyVertex_t * JPC_ArraySoftBodyVertex_at(
  JPC_ArraySoftBodyVertex_t * self,
  long inIndex
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  SoftBodyVertex& resultRef = selfCpp->at(
  inIndex
  );
  SoftBodyVertex * result = &resultRef;
  return reinterpret_cast<JPC_SoftBodyVertex_t *>(result);
};

void JPC_ArraySoftBodyVertex_push_back(
  JPC_ArraySoftBodyVertex_t * self,
  const JPC_SoftBodyVertex_t * inValue
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<SoftBodyVertex *>(inValue->obj)
  );
};

void JPC_ArraySoftBodyVertex_reserve(
  JPC_ArraySoftBodyVertex_t * self,
  unsigned long inSize
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArraySoftBodyVertex_resize(
  JPC_ArraySoftBodyVertex_t * self,
  unsigned long inSize
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArraySoftBodyVertex_clear(
  JPC_ArraySoftBodyVertex_t * self
) {
  ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

