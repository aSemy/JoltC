#include "JoltC/JoltC_SpecifiedObjectLayerFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SpecifiedObjectLayerFilter_t * JoltC_SpecifiedObjectLayerFilter_new(
  unsigned long inObjectLayer,
  char** outErrMsg
) {
  try {
    JoltC_SpecifiedObjectLayerFilter_t * cInstance = new JoltC_SpecifiedObjectLayerFilter_t();
    SpecifiedObjectLayerFilter * cppInstance = new SpecifiedObjectLayerFilter(
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
