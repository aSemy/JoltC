#include "JoltC/JoltC_ArrayVehicleAntiRollBar.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayVehicleAntiRollBar_empty(
  JoltC_ArrayVehicleAntiRollBar_t * self
) {
  ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArrayVehicleAntiRollBar_size(
  JoltC_ArrayVehicleAntiRollBar_t * self
) {
  ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
  return selfCpp->size();
}

JoltC_VehicleAntiRollBar_t * JoltC_ArrayVehicleAntiRollBar_at(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  long inIndex
) {
  ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
  VehicleAntiRollBar* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_VehicleAntiRollBar_t* result = new JoltC_VehicleAntiRollBar_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArrayVehicleAntiRollBar_push_back(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  JoltC_VehicleAntiRollBar_t * inValue
) {
  ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
  VehicleAntiRollBar * inValueCpp = static_cast<VehicleAntiRollBar *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArrayVehicleAntiRollBar_resize(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  unsigned long inSize
) {
  ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArrayVehicleAntiRollBar_clear(
  JoltC_ArrayVehicleAntiRollBar_t * self
) {
  ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
  selfCpp->clear();
}

//endregion

#ifdef __cplusplus
}
#endif

