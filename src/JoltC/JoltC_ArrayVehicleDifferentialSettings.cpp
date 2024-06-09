#include "JoltC/JoltC_ArrayVehicleDifferentialSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayVehicleDifferentialSettings_empty(
  JoltC_ArrayVehicleDifferentialSettings_t * self
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  return selfCpp->empty();
}

long JoltC_ArrayVehicleDifferentialSettings_size(
  JoltC_ArrayVehicleDifferentialSettings_t * self
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  return selfCpp->size();
}

JoltC_VehicleDifferentialSettings_t * JoltC_ArrayVehicleDifferentialSettings_at(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  long inIndex
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  VehicleDifferentialSettings* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_VehicleDifferentialSettings_t* result = new JoltC_VehicleDifferentialSettings_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

void JoltC_ArrayVehicleDifferentialSettings_push_back(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  JoltC_VehicleDifferentialSettings_t * inValue
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  VehicleDifferentialSettings * inValueCpp = static_cast<VehicleDifferentialSettings *>(inValue->obj);
  selfCpp->push_back(
    *inValueCpp
  );
}

void JoltC_ArrayVehicleDifferentialSettings_resize(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  unsigned long inSize
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  selfCpp->resize(
    inSize
  );
}

void JoltC_ArrayVehicleDifferentialSettings_clear(
  JoltC_ArrayVehicleDifferentialSettings_t * self
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  selfCpp->clear();
}

//endregion

#ifdef __cplusplus
}
#endif

