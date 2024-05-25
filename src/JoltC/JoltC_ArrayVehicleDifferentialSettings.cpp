#include "JoltC/JoltC_ArrayVehicleDifferentialSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayVehicleDifferentialSettings_empty(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  char** outErrMsg
) {
  try {
    ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
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

long JoltC_ArrayVehicleDifferentialSettings_size(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  char** outErrMsg
) {
  try {
    ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
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

JoltC_VehicleDifferentialSettings_t * JoltC_ArrayVehicleDifferentialSettings_at(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
    VehicleDifferentialSettings& resultRef = selfCpp->at(
    inIndex
    );
    VehicleDifferentialSettings * result = &resultRef;
    return reinterpret_cast<JoltC_VehicleDifferentialSettings_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayVehicleDifferentialSettings_push_back(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  JoltC_VehicleDifferentialSettings_t * inValue,
  char** outErrMsg
) {
  try {
    ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<VehicleDifferentialSettings *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayVehicleDifferentialSettings_resize(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
    
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

void JoltC_ArrayVehicleDifferentialSettings_clear(
  JoltC_ArrayVehicleDifferentialSettings_t * self,
  char** outErrMsg
) {
  try {
    ArrayVehicleDifferentialSettings * selfCpp = static_cast<ArrayVehicleDifferentialSettings *>(self->obj);
    
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

