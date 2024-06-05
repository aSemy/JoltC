#include "JoltC/JoltC_ArrayCollidePointResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayCollidePointResult_empty(
  JoltC_ArrayCollidePointResult_t * self
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArrayCollidePointResult_size(
  JoltC_ArrayCollidePointResult_t * self
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_CollidePointResult_t * JoltC_ArrayCollidePointResult_at(
  JoltC_ArrayCollidePointResult_t * self,
  long inIndex
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  CollidePointResult* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_CollidePointResult_t* result = new JoltC_CollidePointResult_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_ArrayCollidePointResult_push_back(
  JoltC_ArrayCollidePointResult_t * self,
  JoltC_CollidePointResult_t * inValue
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  selfCpp->push_back(
    *reinterpret_cast<CollidePointResult *>(inValue->obj)
  );
};

void JoltC_ArrayCollidePointResult_reserve(
  JoltC_ArrayCollidePointResult_t * self,
  unsigned long inSize
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  selfCpp->reserve(
    inSize
  );
};

void JoltC_ArrayCollidePointResult_resize(
  JoltC_ArrayCollidePointResult_t * self,
  unsigned long inSize
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  selfCpp->resize(
    inSize
  );
};

void JoltC_ArrayCollidePointResult_clear(
  JoltC_ArrayCollidePointResult_t * self
) {
  ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

