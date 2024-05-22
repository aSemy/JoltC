#include "JoltC/JPC_ArrayFloat.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayFloat_empty(
  JPC_ArrayFloat_t * self
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayFloat_size(
  JPC_ArrayFloat_t * self
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  long result = selfCpp->size();
  return result;
};

float JPC_ArrayFloat_at(
  JPC_ArrayFloat_t * self,
  long inIndex
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  float result = selfCpp->at(
  inIndex
  );
  return result;
};

void JPC_ArrayFloat_push_back(
  JPC_ArrayFloat_t * self,
  float inValue
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  
  selfCpp->push_back(
  inValue
  );
};

void JPC_ArrayFloat_reserve(
  JPC_ArrayFloat_t * self,
  unsigned long inSize
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArrayFloat_resize(
  JPC_ArrayFloat_t * self,
  unsigned long inSize
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayFloat_clear(
  JPC_ArrayFloat_t * self
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  
  selfCpp->clear();
};

JPC_FloatMemRef_t * JPC_ArrayFloat_data(
  JPC_ArrayFloat_t * self
) {
  ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
  FloatMemRef * result = selfCpp->data();
  return reinterpret_cast<JPC_FloatMemRef_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

