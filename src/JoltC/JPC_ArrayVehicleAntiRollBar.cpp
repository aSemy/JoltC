#include "JoltC/JPC_ArrayVehicleAntiRollBar.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayVehicleAntiRollBar_empty(
  JPC_ArrayVehicleAntiRollBar_t * self
) {
  ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayVehicleAntiRollBar_size(
  JPC_ArrayVehicleAntiRollBar_t * self
) {
  ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_VehicleAntiRollBar_t * JPC_ArrayVehicleAntiRollBar_at(
  JPC_ArrayVehicleAntiRollBar_t * self,
  long inIndex
) {
  ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
  VehicleAntiRollBar& resultRef = selfCpp->at(
  inIndex
  );
  VehicleAntiRollBar * result = &resultRef;
  return reinterpret_cast<JPC_VehicleAntiRollBar_t *>(result);
};

void JPC_ArrayVehicleAntiRollBar_push_back(
  JPC_ArrayVehicleAntiRollBar_t * self,
  JPC_VehicleAntiRollBar_t * inValue
) {
  ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<VehicleAntiRollBar *>(inValue->obj)
  );
};

void JPC_ArrayVehicleAntiRollBar_resize(
  JPC_ArrayVehicleAntiRollBar_t * self,
  unsigned long inSize
) {
  ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayVehicleAntiRollBar_clear(
  JPC_ArrayVehicleAntiRollBar_t * self
) {
  ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

