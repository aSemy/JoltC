#include "JoltC/JoltC_ArrayVehicleDifferentialSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayVehicleDifferentialSettings_empty(
  JoltC_ArrayVehicleDifferentialSettings_t * self
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_ArrayVehicleDifferentialSettings_size(
  JoltC_ArrayVehicleDifferentialSettings_t * self
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_VehicleDifferentialSettings_t * JoltC_ArrayVehicleDifferentialSettings_at(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  long inIndex
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  VehicleDifferentialSettings& resultRef = selfCpp->at(
  inIndex
  );
  VehicleDifferentialSettings * result = &resultRef;
  return reinterpret_cast<JoltC_VehicleDifferentialSettings_t *>(result);
};

void JoltC_ArrayVehicleDifferentialSettings_push_back(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  JoltC_VehicleDifferentialSettings_t * inValue
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<VehicleDifferentialSettings *>(inValue->obj)
  );
};

void JoltC_ArrayVehicleDifferentialSettings_resize(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  unsigned long inSize
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JoltC_ArrayVehicleDifferentialSettings_clear(
  JoltC_ArrayVehicleDifferentialSettings_t * self
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

