#include "JoltC/JoltC_ArrayUint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayUint_empty(
  JoltC_ArrayUint_t * self
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArrayUint_size(
  JoltC_ArrayUint_t * self
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  long result = selfCpp->size();
  return result;
};

unsigned long JoltC_ArrayUint_at(
  JoltC_ArrayUint_t * self,
  long inIndex
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  unsigned long result = selfCpp->at(
    inIndex
  );
  return result;
};

void JoltC_ArrayUint_push_back(
  JoltC_ArrayUint_t * self,
  unsigned long inValue
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  selfCpp->push_back(
    inValue
  );
};

void JoltC_ArrayUint_reserve(
  JoltC_ArrayUint_t * self,
  unsigned long inSize
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  selfCpp->reserve(
    inSize
  );
};

void JoltC_ArrayUint_resize(
  JoltC_ArrayUint_t * self,
  unsigned long inSize
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  selfCpp->resize(
    inSize
  );
};

void JoltC_ArrayUint_clear(
  JoltC_ArrayUint_t * self
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  selfCpp->clear();
};

JoltC_UintMemRef_t * JoltC_ArrayUint_data(
  JoltC_ArrayUint_t * self
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  const UintMemRef * resultValue = selfCpp->data();
  JoltC_UintMemRef_t* result = new JoltC_UintMemRef_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

