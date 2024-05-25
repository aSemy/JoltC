#include "JoltC/JoltC_JoltInterface.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_JoltInterface_t * JoltC_JoltInterface_new(
  const JoltC_JoltSettings_t * inSettings,
  char** outErrMsg
) {
  try {
    JoltC_JoltInterface_t * cInstance = new JoltC_JoltInterface_t();
    JoltInterface * cppInstance = new JoltInterface(
      *reinterpret_cast<JoltSettings *>(inSettings->obj)
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

void JoltC_JoltInterface_Step(
  JoltC_JoltInterface_t * self,
  float inDeltaTime,
  long inCollisionSteps,
  char** outErrMsg
) {
  try {
    JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
    
    selfCpp->Step(
    inDeltaTime,
    inCollisionSteps
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_PhysicsSystem_t * JoltC_JoltInterface_GetPhysicsSystem(
  JoltC_JoltInterface_t * self,
  char** outErrMsg
) {
  try {
    JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
    PhysicsSystem * result = selfCpp->GetPhysicsSystem();
    return reinterpret_cast<JoltC_PhysicsSystem_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_TempAllocator_t * JoltC_JoltInterface_GetTempAllocator(
  JoltC_JoltInterface_t * self,
  char** outErrMsg
) {
  try {
    JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
    TempAllocator * result = selfCpp->GetTempAllocator();
    return reinterpret_cast<JoltC_TempAllocator_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_ObjectLayerPairFilter_t * JoltC_JoltInterface_GetObjectLayerPairFilter(
  JoltC_JoltInterface_t * self,
  char** outErrMsg
) {
  try {
    JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
    ObjectLayerPairFilter * result = selfCpp->GetObjectLayerPairFilter();
    return reinterpret_cast<JoltC_ObjectLayerPairFilter_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_JoltInterface_GetObjectVsBroadPhaseLayerFilter(
  JoltC_JoltInterface_t * self,
  char** outErrMsg
) {
  try {
    JoltInterface * selfCpp = static_cast<JoltInterface *>(self->obj);
    ObjectVsBroadPhaseLayerFilter * result = selfCpp->GetObjectVsBroadPhaseLayerFilter();
    return reinterpret_cast<JoltC_ObjectVsBroadPhaseLayerFilter_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long long int JoltC_JoltInterface_sGetTotalMemory(
  char** outErrMsg
) {
  try {
    unsigned long long int result = JoltInterface::sGetTotalMemory();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long long int JoltC_JoltInterface_sGetFreeMemory(
  char** outErrMsg
) {
  try {
    unsigned long long int result = JoltInterface::sGetFreeMemory();
    return result;
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

