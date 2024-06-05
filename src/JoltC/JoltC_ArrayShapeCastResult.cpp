#include "JoltC/JoltC_ArrayShapeCastResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayShapeCastResult_empty(
  JoltC_ArrayShapeCastResult_t * self
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArrayShapeCastResult_size(
  JoltC_ArrayShapeCastResult_t * self
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  long result = selfCpp->size();
  return result;
};

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
};

void JoltC_ArrayShapeCastResult_push_back(
  JoltC_ArrayShapeCastResult_t * self,
  JoltC_ShapeCastResult_t * inValue
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  selfCpp->push_back(
    *reinterpret_cast<ShapeCastResult *>(inValue->obj)
  );
};

void JoltC_ArrayShapeCastResult_reserve(
  JoltC_ArrayShapeCastResult_t * self,
  unsigned long inSize
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  selfCpp->reserve(
    inSize
  );
};

void JoltC_ArrayShapeCastResult_resize(
  JoltC_ArrayShapeCastResult_t * self,
  unsigned long inSize
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  selfCpp->resize(
    inSize
  );
};

void JoltC_ArrayShapeCastResult_clear(
  JoltC_ArrayShapeCastResult_t * self
) {
  ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

