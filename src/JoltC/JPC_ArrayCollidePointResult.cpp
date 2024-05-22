#include "JoltC/JPC_ArrayCollidePointResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayCollidePointResult_empty(
  JPC_ArrayCollidePointResult_t * self
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayCollidePointResult_size(
  JPC_ArrayCollidePointResult_t * self
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_CollidePointResult_t * JPC_ArrayCollidePointResult_at(
  JPC_ArrayCollidePointResult_t * self,
  long inIndex
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  CollidePointResult& resultRef = selfCpp->at(
  inIndex
  );
  CollidePointResult * result = &resultRef;
  return reinterpret_cast<JPC_CollidePointResult_t *>(result);
};

void JPC_ArrayCollidePointResult_push_back(
  JPC_ArrayCollidePointResult_t * self,
  const JPC_CollidePointResult_t * inValue
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<CollidePointResult *>(inValue->obj)
  );
};

void JPC_ArrayCollidePointResult_reserve(
  JPC_ArrayCollidePointResult_t * self,
  unsigned long inSize
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArrayCollidePointResult_resize(
  JPC_ArrayCollidePointResult_t * self,
  unsigned long inSize
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayCollidePointResult_clear(
  JPC_ArrayCollidePointResult_t * self
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

