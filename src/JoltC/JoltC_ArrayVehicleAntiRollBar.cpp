#include "JoltC/JoltC_ArrayVehicleAntiRollBar.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayVehicleAntiRollBar_empty(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  char** outErrMsg
) {
  try {
    ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
    bool result = selfCpp->empty();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

long JoltC_ArrayVehicleAntiRollBar_size(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  char** outErrMsg
) {
  try {
    ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
    long result = selfCpp->size();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_VehicleAntiRollBar_t * JoltC_ArrayVehicleAntiRollBar_at(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
    VehicleAntiRollBar& resultRef = selfCpp->at(
    inIndex
    );
    VehicleAntiRollBar * result = &resultRef;
    return reinterpret_cast<JoltC_VehicleAntiRollBar_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayVehicleAntiRollBar_push_back(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  JoltC_VehicleAntiRollBar_t * inValue,
  char** outErrMsg
) {
  try {
    ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<VehicleAntiRollBar *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayVehicleAntiRollBar_resize(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
    
    selfCpp->resize(
    inSize
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayVehicleAntiRollBar_clear(
  JoltC_ArrayVehicleAntiRollBar_t * self,
  char** outErrMsg
) {
  try {
    ArrayVehicleAntiRollBar * selfCpp = static_cast<ArrayVehicleAntiRollBar *>(self->obj);
    
    selfCpp->clear();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

#ifdef __cplusplus
}
#endif

