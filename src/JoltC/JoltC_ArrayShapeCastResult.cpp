#include "JoltC/JoltC_ArrayShapeCastResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArrayShapeCastResult_destroy(
  JoltC_ArrayShapeCastResult_t * self
){
  if (self == NULL) return;
  delete static_cast<ArrayShapeCastResult *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_ArrayShapeCastResult_empty(
  JoltC_ArrayShapeCastResult_t * self
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArrayShapeCastResult_size(
  JoltC_ArrayShapeCastResult_t * self
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  return selfCpp->size();
}

JoltC_ShapeCastResult_t * JoltC_ArrayShapeCastResult_at(
  JoltC_ArrayShapeCastResult_t * self,
  long inIndex
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  ShapeCastResult* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_ShapeCastResult_t* result = new JoltC_ShapeCastResult_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArrayShapeCastResult_push_back(
  JoltC_ArrayShapeCastResult_t * self,
  JoltC_ShapeCastResult_t * inValue
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  const ShapeCastResult * inValueCpp = static_cast<const ShapeCastResult *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArrayShapeCastResult_reserve(
  JoltC_ArrayShapeCastResult_t * self,
  unsigned long inSize
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArrayShapeCastResult_resize(
  JoltC_ArrayShapeCastResult_t * self,
  unsigned long inSize
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArrayShapeCastResult_clear(
  JoltC_ArrayShapeCastResult_t * self
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  selfCpp->clear();
}

//endregion


#ifdef __cplusplus
}
#endif
