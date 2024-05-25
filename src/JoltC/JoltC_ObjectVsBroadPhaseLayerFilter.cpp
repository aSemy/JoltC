#include "JoltC/JoltC_ObjectVsBroadPhaseLayerFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectVsBroadPhaseLayerFilter_t * JoltC_ObjectVsBroadPhaseLayerFilter_new(
  char** outErrMsg
) {
  try {
    JoltC_ObjectVsBroadPhaseLayerFilter_t * cInstance = new JoltC_ObjectVsBroadPhaseLayerFilter_t();
    ObjectVsBroadPhaseLayerFilter * cppInstance = new ObjectVsBroadPhaseLayerFilter();
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

#ifdef __cplusplus
}
#endif

