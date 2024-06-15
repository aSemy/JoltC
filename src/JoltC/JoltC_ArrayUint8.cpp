#include "JoltC/JoltC_ArrayUint8.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArrayUint8_destroy(
  JoltC_ArrayUint8_t * self
){
  if (self == NULL) return;
  delete static_cast<ArrayUint8 *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_ArrayUint8_empty(
  JoltC_ArrayUint8_t * self
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArrayUint8_size(
  JoltC_ArrayUint8_t * self
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  return selfCpp->size();
}

unsigned char JoltC_ArrayUint8_at(
  JoltC_ArrayUint8_t * self,
  long inIndex
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  return selfCpp->at(
    inIndex
  );
}

void JoltC_ArrayUint8_push_back(
  JoltC_ArrayUint8_t * self,
  unsigned char inValue
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  selfCpp->push_back(
    inValue
  );
}

void JoltC_ArrayUint8_reserve(
  JoltC_ArrayUint8_t * self,
  unsigned long inSize
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArrayUint8_resize(
  JoltC_ArrayUint8_t * self,
  unsigned long inSize
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArrayUint8_clear(
  JoltC_ArrayUint8_t * self
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  selfCpp->clear();
}

JoltC_Uint8MemRef_t * JoltC_ArrayUint8_data(
  JoltC_ArrayUint8_t * self
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  const Uint8MemRef * resultPtr = selfCpp->data();
  JoltC_Uint8MemRef_t * result = new JoltC_Uint8MemRef_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

//endregion


#ifdef __cplusplus
}
#endif
