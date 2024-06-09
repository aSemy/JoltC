#include "JoltC/JoltC_ArrayFloat.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayFloat_empty(
  JoltC_ArrayFloat_t * self
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArrayFloat_size(
  JoltC_ArrayFloat_t * self
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  return selfCpp->size();
}

float JoltC_ArrayFloat_at(
  JoltC_ArrayFloat_t * self,
  long inIndex
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  return selfCpp->at(
    inIndex
  );
}

void JoltC_ArrayFloat_push_back(
  JoltC_ArrayFloat_t * self,
  float inValue
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  selfCpp->push_back(
    inValue
  );
}

void JoltC_ArrayFloat_reserve(
  JoltC_ArrayFloat_t * self,
  unsigned long inSize
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArrayFloat_resize(
  JoltC_ArrayFloat_t * self,
  unsigned long inSize
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArrayFloat_clear(
  JoltC_ArrayFloat_t * self
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  selfCpp->clear();
}

JoltC_FloatMemRef_t * JoltC_ArrayFloat_data(
  JoltC_ArrayFloat_t * self
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  const FloatMemRef * resultPtr = selfCpp->data();
  JoltC_FloatMemRef_t * result = new JoltC_FloatMemRef_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

//endregion

#ifdef __cplusplus
}
#endif

