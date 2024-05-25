#include "JoltC/JoltC_BodyFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BodyFilter_t * JoltC_BodyFilter_new(
  char** outErrMsg
) {
  try {
    JoltC_BodyFilter_t * cInstance = new JoltC_BodyFilter_t();
    BodyFilter * cppInstance = new BodyFilter();
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

