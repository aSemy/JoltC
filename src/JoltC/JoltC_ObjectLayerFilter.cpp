#include "JoltC/JoltC_ObjectLayerFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectLayerFilter_t * JoltC_ObjectLayerFilter_new(
  char** outErrMsg
) {
  try {
    JoltC_ObjectLayerFilter_t * cInstance = new JoltC_ObjectLayerFilter_t();
    ObjectLayerFilter * cppInstance = new ObjectLayerFilter();
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

