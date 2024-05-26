#include "JoltC/JoltC_ArrayUint8.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayUint8_empty(
  JoltC_ArrayUint8_t * self
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArrayUint8_size(
  JoltC_ArrayUint8_t * self
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  long result = selfCpp->size();
  return result;
};

unsigned char JoltC_ArrayUint8_at(
  JoltC_ArrayUint8_t * self,
  long inIndex
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  unsigned char result = selfCpp->at(
    inIndex
  );
  return result;
};

void JoltC_ArrayUint8_push_back(
  JoltC_ArrayUint8_t * self,
  unsigned char inValue
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  
  selfCpp->push_back(
    inValue
  );
};

void JoltC_ArrayUint8_reserve(
  JoltC_ArrayUint8_t * self,
  unsigned long inSize
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  
  selfCpp->reserve(
    inSize
  );
};

void JoltC_ArrayUint8_resize(
  JoltC_ArrayUint8_t * self,
  unsigned long inSize
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  
  selfCpp->resize(
    inSize
  );
};

void JoltC_ArrayUint8_clear(
  JoltC_ArrayUint8_t * self
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  
  selfCpp->clear();
};

JoltC_Uint8MemRef_t * JoltC_ArrayUint8_data(
  JoltC_ArrayUint8_t * self
) {
  ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
  Uint8MemRef * resultValue = selfCpp->data();
  JoltC_Uint8MemRef_t* result = new JoltC_Uint8MemRef_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

