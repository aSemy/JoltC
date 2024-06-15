#include "JoltC/JoltC_ArrayWheelSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_ArrayWheelSettings_destroy(
  JoltC_ArrayWheelSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<ArrayWheelSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_ArrayWheelSettings_empty(
  JoltC_ArrayWheelSettings_t * self
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArrayWheelSettings_size(
  JoltC_ArrayWheelSettings_t * self
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  return selfCpp->size();
}

JoltC_WheelSettings_t * JoltC_ArrayWheelSettings_at(
  JoltC_ArrayWheelSettings_t * self,
  long inIndex
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  const WheelSettings * resultPtr = selfCpp->at(
    inIndex
  );
  JoltC_WheelSettings_t * result = new JoltC_WheelSettings_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_ArrayWheelSettings_push_back(
  JoltC_ArrayWheelSettings_t * self,
  JoltC_WheelSettings_t * inValue
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  WheelSettings * inValueCpp = Ref<WheelSettings>(static_cast<WheelSettings *>(inValue->obj));
  selfCpp->push_back(
    inValueCpp
  );
}

void JoltC_ArrayWheelSettings_resize(
  JoltC_ArrayWheelSettings_t * self,
  unsigned long inSize
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArrayWheelSettings_clear(
  JoltC_ArrayWheelSettings_t * self
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  selfCpp->clear();
}

//endregion


#ifdef __cplusplus
}
#endif
