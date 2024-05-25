#include "JoltC/JoltC_BroadPhaseLayer.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseLayer_t * JoltC_BroadPhaseLayer_new(
  unsigned short inLayer,
  char** outErrMsg
) {
  try {
    JoltC_BroadPhaseLayer_t * cInstance = new JoltC_BroadPhaseLayer_t();
    BroadPhaseLayer * cppInstance = new BroadPhaseLayer(
      inLayer
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

unsigned short JoltC_BroadPhaseLayer_GetValue(
  JoltC_BroadPhaseLayer_t * self,
  char** outErrMsg
) {
  try {
    BroadPhaseLayer * selfCpp = static_cast<BroadPhaseLayer *>(self->obj);
    unsigned short result = selfCpp->GetValue();
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

