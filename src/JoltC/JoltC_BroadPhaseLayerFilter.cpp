#include "JoltC/JoltC_BroadPhaseLayerFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BroadPhaseLayerFilter_t * JoltC_BroadPhaseLayerFilter_new(
  char** outErrMsg
) {
  try {
    JoltC_BroadPhaseLayerFilter_t * cInstance = new JoltC_BroadPhaseLayerFilter_t();
    BroadPhaseLayerFilter * cppInstance = new BroadPhaseLayerFilter();
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

