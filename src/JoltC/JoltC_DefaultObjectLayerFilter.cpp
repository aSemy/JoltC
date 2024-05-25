#include "JoltC/JoltC_DefaultObjectLayerFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_DefaultObjectLayerFilter_t * JoltC_DefaultObjectLayerFilter_new(
  const JoltC_ObjectLayerPairFilter_t * inFilter,
  unsigned long inObjectLayer,
  char** outErrMsg
) {
  try {
    JoltC_DefaultObjectLayerFilter_t * cInstance = new JoltC_DefaultObjectLayerFilter_t();
    DefaultObjectLayerFilter * cppInstance = new DefaultObjectLayerFilter(
      *reinterpret_cast<ObjectLayerPairFilter *>(inFilter->obj),
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

