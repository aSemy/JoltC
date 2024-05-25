#include "JoltC/JoltC_ShapeFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeFilter_t * JoltC_ShapeFilter_new(
  char** outErrMsg
) {
  try {
    JoltC_ShapeFilter_t * cInstance = new JoltC_ShapeFilter_t();
    ShapeFilter * cppInstance = new ShapeFilter();
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

