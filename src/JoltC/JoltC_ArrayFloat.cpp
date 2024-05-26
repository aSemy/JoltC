#include "JoltC/JoltC_ArrayFloat.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayFloat_empty(
  JoltC_ArrayFloat_t * self
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArrayFloat_size(
  JoltC_ArrayFloat_t * self
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  long result = selfCpp->size();
  return result;
};

float JoltC_ArrayFloat_at(
  JoltC_ArrayFloat_t * self,
  long inIndex
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  float result = selfCpp->at(
  inIndex
  );
  return result;
};

void JoltC_ArrayFloat_push_back(
  JoltC_ArrayFloat_t * self,
  float inValue
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  
  selfCpp->push_back(
  inValue
  );
};

void JoltC_ArrayFloat_reserve(
  JoltC_ArrayFloat_t * self,
  unsigned long inSize
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JoltC_ArrayFloat_resize(
  JoltC_ArrayFloat_t * self,
  unsigned long inSize
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JoltC_ArrayFloat_clear(
  JoltC_ArrayFloat_t * self
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  
  selfCpp->clear();
};

JoltC_FloatMemRef_t * JoltC_ArrayFloat_data(
  JoltC_ArrayFloat_t * self
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  FloatMemRef * result = selfCpp->data();
  return reinterpret_cast<JoltC_FloatMemRef_t *>(result);
};

//endregion

#ifdef __cplusplus
}
#endif

