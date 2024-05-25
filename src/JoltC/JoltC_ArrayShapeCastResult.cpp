#include "JoltC/JPC_ArrayShapeCastResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayShapeCastResult_empty(
  JPC_ArrayShapeCastResult_t * self
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayShapeCastResult_size(
  JPC_ArrayShapeCastResult_t * self
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_ShapeCastResult_t * JPC_ArrayShapeCastResult_at(
  JPC_ArrayShapeCastResult_t * self,
  long inIndex
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  ShapeCastResult& resultRef = selfCpp->at(
  inIndex
  );
  ShapeCastResult * result = &resultRef;
  return reinterpret_cast<JPC_ShapeCastResult_t *>(result);
};

void JPC_ArrayShapeCastResult_push_back(
  JPC_ArrayShapeCastResult_t * self,
  const JPC_ShapeCastResult_t * inValue
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<ShapeCastResult *>(inValue->obj)
  );
};

void JPC_ArrayShapeCastResult_reserve(
  JPC_ArrayShapeCastResult_t * self,
  unsigned long inSize
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArrayShapeCastResult_resize(
  JPC_ArrayShapeCastResult_t * self,
  unsigned long inSize
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayShapeCastResult_clear(
  JPC_ArrayShapeCastResult_t * self
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

