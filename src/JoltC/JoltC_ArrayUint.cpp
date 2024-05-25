#include "JoltC/JPC_ArrayUint.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayUint_empty(
  JPC_ArrayUint_t * self
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayUint_size(
  JPC_ArrayUint_t * self
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  long result = selfCpp->size();
  return result;
};

unsigned long JPC_ArrayUint_at(
  JPC_ArrayUint_t * self,
  long inIndex
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  unsigned long result = selfCpp->at(
  inIndex
  );
  return result;
};

void JPC_ArrayUint_push_back(
  JPC_ArrayUint_t * self,
  unsigned long inValue
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  
  selfCpp->push_back(
  inValue
  );
};

void JPC_ArrayUint_reserve(
  JPC_ArrayUint_t * self,
  unsigned long inSize
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArrayUint_resize(
  JPC_ArrayUint_t * self,
  unsigned long inSize
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayUint_clear(
  JPC_ArrayUint_t * self
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  
  selfCpp->clear();
};

JPC_UintMemRef_t * JPC_ArrayUint_data(
  JPC_ArrayUint_t * self
) {
  ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
  UintMemRef * result = selfCpp->data();
  return reinterpret_cast<JPC_UintMemRef_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

