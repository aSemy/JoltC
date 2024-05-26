#include "JoltC/JoltC_ArrayWheelSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayWheelSettings_empty(
  JoltC_ArrayWheelSettings_t * self
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArrayWheelSettings_size(
  JoltC_ArrayWheelSettings_t * self
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_WheelSettings_t * JoltC_ArrayWheelSettings_at(
  JoltC_ArrayWheelSettings_t * self,
  long inIndex
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  WheelSettings * resultValue = selfCpp->at(
    inIndex
  );
  JoltC_WheelSettings_t* result = new JoltC_WheelSettings_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_ArrayWheelSettings_push_back(
  JoltC_ArrayWheelSettings_t * self,
  JoltC_WheelSettings_t * inValue
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  
  selfCpp->push_back(
    Ref<WheelSettings>(reinterpret_cast<WheelSettings *>(inValue->obj))
  );
};

void JoltC_ArrayWheelSettings_resize(
  JoltC_ArrayWheelSettings_t * self,
  unsigned long inSize
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  
  selfCpp->resize(
    inSize
  );
};

void JoltC_ArrayWheelSettings_clear(
  JoltC_ArrayWheelSettings_t * self
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

