#include "JoltC/JPC_ArrayUint8.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayUint8_empty(
  JPC_ArrayUint8_t * self
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayUint8_size(
  JPC_ArrayUint8_t * self
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  long result = selfCpp->size();
  return result;
};

unsigned char JPC_ArrayUint8_at(
  JPC_ArrayUint8_t * self,
  long inIndex
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  unsigned char result = selfCpp->at(
  inIndex
  );
  return result;
};

void JPC_ArrayUint8_push_back(
  JPC_ArrayUint8_t * self,
  unsigned char inValue
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  
  selfCpp->push_back(
  inValue
  );
};

void JPC_ArrayUint8_reserve(
  JPC_ArrayUint8_t * self,
  unsigned long inSize
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArrayUint8_resize(
  JPC_ArrayUint8_t * self,
  unsigned long inSize
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayUint8_clear(
  JPC_ArrayUint8_t * self
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  
  selfCpp->clear();
};

JPC_Uint8MemRef_t * JPC_ArrayUint8_data(
  JPC_ArrayUint8_t * self
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  Uint8MemRef * result = selfCpp->data();
  return reinterpret_cast<JPC_Uint8MemRef_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

