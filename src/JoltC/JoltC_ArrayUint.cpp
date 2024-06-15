#include "JoltC/JoltC_ArrayUint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArrayUint_destroy(
  JoltC_ArrayUint_t * self
){
  if (self == NULL) return;
  delete static_cast<ArrayUint *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_ArrayUint_empty(
  JoltC_ArrayUint_t * self
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArrayUint_size(
  JoltC_ArrayUint_t * self
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  return selfCpp->size();
}

unsigned long JoltC_ArrayUint_at(
  JoltC_ArrayUint_t * self,
  long inIndex
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  return selfCpp->at(
    inIndex
  );
}

void JoltC_ArrayUint_push_back(
  JoltC_ArrayUint_t * self,
  unsigned long inValue
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  selfCpp->push_back(
    inValue
  );
}

void JoltC_ArrayUint_reserve(
  JoltC_ArrayUint_t * self,
  unsigned long inSize
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  selfCpp->reserve(
    inSize
  );
}

void JoltC_ArrayUint_resize(
  JoltC_ArrayUint_t * self,
  unsigned long inSize
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArrayUint_clear(
  JoltC_ArrayUint_t * self
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  selfCpp->clear();
}

JoltC_UintMemRef_t * JoltC_ArrayUint_data(
  JoltC_ArrayUint_t * self
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  const UintMemRef * resultPtr = selfCpp->data();
  JoltC_UintMemRef_t * result = new JoltC_UintMemRef_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

//endregion


#ifdef __cplusplus
}
#endif
