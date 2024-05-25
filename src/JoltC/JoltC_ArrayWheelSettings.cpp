#include "JoltC/JPC_ArrayWheelSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayWheelSettings_empty(
  JPC_ArrayWheelSettings_t * self
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayWheelSettings_size(
  JPC_ArrayWheelSettings_t * self
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_WheelSettings_t * JPC_ArrayWheelSettings_at(
  JPC_ArrayWheelSettings_t * self,
  long inIndex
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  WheelSettings * result = selfCpp->at(
  inIndex
  );
  return reinterpret_cast<JPC_WheelSettings_t *>(result);
};

void JPC_ArrayWheelSettings_push_back(
  JPC_ArrayWheelSettings_t * self,
  JPC_WheelSettings_t * inValue
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  
  selfCpp->push_back(
  Ref<WheelSettings>(reinterpret_cast<WheelSettings *>(inValue->obj))
  );
};

void JPC_ArrayWheelSettings_resize(
  JPC_ArrayWheelSettings_t * self,
  unsigned long inSize
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayWheelSettings_clear(
  JPC_ArrayWheelSettings_t * self
) {
  ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

