#include "JoltC/JPC_ArrayVehicleDifferentialSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayVehicleDifferentialSettings_empty(
  JPC_ArrayVehicleDifferentialSettings_t * self
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayVehicleDifferentialSettings_size(
  JPC_ArrayVehicleDifferentialSettings_t * self
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_VehicleDifferentialSettings_t * JPC_ArrayVehicleDifferentialSettings_at(
  JPC_ArrayVehicleDifferentialSettings_t * self,
  long inIndex
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  VehicleDifferentialSettings& resultRef = selfCpp->at(
  inIndex
  );
  VehicleDifferentialSettings * result = &resultRef;
  return reinterpret_cast<JPC_VehicleDifferentialSettings_t *>(result);
};

void JPC_ArrayVehicleDifferentialSettings_push_back(
  JPC_ArrayVehicleDifferentialSettings_t * self,
  JPC_VehicleDifferentialSettings_t * inValue
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<VehicleDifferentialSettings *>(inValue->obj)
  );
};

void JPC_ArrayVehicleDifferentialSettings_resize(
  JPC_ArrayVehicleDifferentialSettings_t * self,
  unsigned long inSize
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayVehicleDifferentialSettings_clear(
  JPC_ArrayVehicleDifferentialSettings_t * self
) {
  ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

