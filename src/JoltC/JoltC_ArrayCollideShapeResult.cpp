#include "JoltC/JoltC_ArrayCollideShapeResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayCollideShapeResult_empty(
  JoltC_ArrayCollideShapeResult_t * self
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArrayCollideShapeResult_size(
  JoltC_ArrayCollideShapeResult_t * self
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  return selfCpp->size();
}

JoltC_CollideShapeResult_t * JoltC_ArrayCollideShapeResult_at(
  JoltC_ArrayCollideShapeResult_t * self,
  long inIndex
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  CollideShapeResult* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_CollideShapeResult_t* result = new JoltC_CollideShapeResult_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArrayCollideShapeResult_push_back(
  JoltC_ArrayCollideShapeResult_t * self,
  JoltC_CollideShapeResult_t * inValue
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  const CollideShapeResult * inValueCpp = static_cast<const CollideShapeResult *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArrayCollideShapeResult_reserve(
  JoltC_ArrayCollideShapeResult_t * self,
  unsigned long inSize
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArrayCollideShapeResult_resize(
  JoltC_ArrayCollideShapeResult_t * self,
  unsigned long inSize
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArrayCollideShapeResult_clear(
  JoltC_ArrayCollideShapeResult_t * self
) {
  ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
  selfCpp->clear();
}

//endregion

#ifdef __cplusplus
}
#endif

