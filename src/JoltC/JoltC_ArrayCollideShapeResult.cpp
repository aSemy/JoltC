#include "JoltC/JPC_ArrayCollideShapeResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayCollideShapeResult_empty(
  JPC_ArrayCollideShapeResult_t * self
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayCollideShapeResult_size(
  JPC_ArrayCollideShapeResult_t * self
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_CollideShapeResult_t * JPC_ArrayCollideShapeResult_at(
  JPC_ArrayCollideShapeResult_t * self,
  long inIndex
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  CollideShapeResult& resultRef = selfCpp->at(
  inIndex
  );
  CollideShapeResult * result = &resultRef;
  return reinterpret_cast<JPC_CollideShapeResult_t *>(result);
};

void JPC_ArrayCollideShapeResult_push_back(
  JPC_ArrayCollideShapeResult_t * self,
  const JPC_CollideShapeResult_t * inValue
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<CollideShapeResult *>(inValue->obj)
  );
};

void JPC_ArrayCollideShapeResult_reserve(
  JPC_ArrayCollideShapeResult_t * self,
  unsigned long inSize
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArrayCollideShapeResult_resize(
  JPC_ArrayCollideShapeResult_t * self,
  unsigned long inSize
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayCollideShapeResult_clear(
  JPC_ArrayCollideShapeResult_t * self
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

