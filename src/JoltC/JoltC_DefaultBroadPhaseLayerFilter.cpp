#include "JoltC/JoltC_DefaultBroadPhaseLayerFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_DefaultBroadPhaseLayerFilter_t * JoltC_DefaultBroadPhaseLayerFilter_new(
  const JoltC_ObjectVsBroadPhaseLayerFilter_t * inFilter,
  unsigned long inObjectLayer,
  char** outErrMsg
) {
  try {
    JoltC_DefaultBroadPhaseLayerFilter_t * cInstance = new JoltC_DefaultBroadPhaseLayerFilter_t();
    DefaultBroadPhaseLayerFilter * cppInstance = new DefaultBroadPhaseLayerFilter(
      *reinterpret_cast<ObjectVsBroadPhaseLayerFilter *>(inFilter->obj),
      inObjectLayer
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

#ifdef __cplusplus
}
#endif

