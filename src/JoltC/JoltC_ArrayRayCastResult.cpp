#include "JoltC/JoltC_ArrayRayCastResult.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayRayCastResult_empty(
  JoltC_ArrayRayCastResult_t * self
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArrayRayCastResult_size(
  JoltC_ArrayRayCastResult_t * self
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_RayCastResult_t * JoltC_ArrayRayCastResult_at(
  JoltC_ArrayRayCastResult_t * self,
  long inIndex
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  RayCastResult* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_RayCastResult_t* result = new JoltC_RayCastResult_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_ArrayRayCastResult_push_back(
  JoltC_ArrayRayCastResult_t * self,
  JoltC_RayCastResult_t * inValue
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  
  selfCpp->push_back(
    *reinterpret_cast<RayCastResult *>(inValue->obj)
  );
};

void JoltC_ArrayRayCastResult_reserve(
  JoltC_ArrayRayCastResult_t * self,
  unsigned long inSize
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  
  selfCpp->reserve(
    inSize
  );
};

void JoltC_ArrayRayCastResult_resize(
  JoltC_ArrayRayCastResult_t * self,
  unsigned long inSize
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  
  selfCpp->resize(
    inSize
  );
};

void JoltC_ArrayRayCastResult_clear(
  JoltC_ArrayRayCastResult_t * self
) {
  ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
  
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

