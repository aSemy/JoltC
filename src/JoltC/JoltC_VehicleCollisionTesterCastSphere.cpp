#include "JoltC/JoltC_VehicleCollisionTesterCastSphere.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_VehicleCollisionTesterCastSphere_t * JoltC_VehicleCollisionTesterCastSphere_new(
  unsigned long inObjectLayer,
  float inRadius,
  JoltC_Vec3_t * inUp,
  float inMaxSlopeAngle,
  char** outErrMsg
) {
  try {
    JoltC_VehicleCollisionTesterCastSphere_t * cInstance = new JoltC_VehicleCollisionTesterCastSphere_t();
    VehicleCollisionTesterCastSphere * cppInstance = new VehicleCollisionTesterCastSphere(
      inObjectLayer,
      inRadius,
      *reinterpret_cast<Vec3 *>(inUp->obj),
      inMaxSlopeAngle
    );
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

unsigned long JoltC_VehicleCollisionTesterCastSphere_GetRefCount(
  JoltC_VehicleCollisionTesterCastSphere_t * self,
  char** outErrMsg
) {
  try {
    VehicleCollisionTesterCastSphere * selfCpp = static_cast<VehicleCollisionTesterCastSphere *>(self->obj);
    unsigned long result = selfCpp->GetRefCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleCollisionTesterCastSphere_AddRef(
  JoltC_VehicleCollisionTesterCastSphere_t * self,
  char** outErrMsg
) {
  try {
    VehicleCollisionTesterCastSphere * selfCpp = static_cast<VehicleCollisionTesterCastSphere *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_VehicleCollisionTesterCastSphere_Release(
  JoltC_VehicleCollisionTesterCastSphere_t * self,
  char** outErrMsg
) {
  try {
    VehicleCollisionTesterCastSphere * selfCpp = static_cast<VehicleCollisionTesterCastSphere *>(self->obj);
    
    selfCpp->Release();
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

