#include "JoltC/JPC_ArrayRayCastResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayRayCastResult_empty(
  JPC_ArrayRayCastResult_t * self
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayRayCastResult_size(
  JPC_ArrayRayCastResult_t * self
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_RayCastResult_t * JPC_ArrayRayCastResult_at(
  JPC_ArrayRayCastResult_t * self,
  long inIndex
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  RayCastResult& resultRef = selfCpp->at(
  inIndex
  );
  RayCastResult * result = &resultRef;
  return reinterpret_cast<JPC_RayCastResult_t *>(result);
};

void JPC_ArrayRayCastResult_push_back(
  JPC_ArrayRayCastResult_t * self,
  const JPC_RayCastResult_t * inValue
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<RayCastResult *>(inValue->obj)
  );
};

void JPC_ArrayRayCastResult_reserve(
  JPC_ArrayRayCastResult_t * self,
  unsigned long inSize
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArrayRayCastResult_resize(
  JPC_ArrayRayCastResult_t * self,
  unsigned long inSize
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayRayCastResult_clear(
  JPC_ArrayRayCastResult_t * self
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

