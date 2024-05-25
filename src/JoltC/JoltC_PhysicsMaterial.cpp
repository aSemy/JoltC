#include "JoltC/JoltC_PhysicsMaterial.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PhysicsMaterial_t * JoltC_PhysicsMaterial_new(
  char** outErrMsg
) {
  try {
    JoltC_PhysicsMaterial_t * cInstance = new JoltC_PhysicsMaterial_t();
    PhysicsMaterial * cppInstance = new PhysicsMaterial();
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

unsigned long JoltC_PhysicsMaterial_GetRefCount(
  JoltC_PhysicsMaterial_t * self,
  char** outErrMsg
) {
  try {
    PhysicsMaterial * selfCpp = static_cast<PhysicsMaterial *>(self->obj);
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

void JoltC_PhysicsMaterial_AddRef(
  JoltC_PhysicsMaterial_t * self,
  char** outErrMsg
) {
  try {
    PhysicsMaterial * selfCpp = static_cast<PhysicsMaterial *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_PhysicsMaterial_Release(
  JoltC_PhysicsMaterial_t * self,
  char** outErrMsg
) {
  try {
    PhysicsMaterial * selfCpp = static_cast<PhysicsMaterial *>(self->obj);
    
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

