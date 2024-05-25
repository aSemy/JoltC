#include "JoltC/JoltC_IgnoreSingleBodyFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IgnoreSingleBodyFilter_t * JoltC_IgnoreSingleBodyFilter_new(
  const JoltC_BodyID_t * inBodyID,
  char** outErrMsg
) {
  try {
    JoltC_IgnoreSingleBodyFilter_t * cInstance = new JoltC_IgnoreSingleBodyFilter_t();
    IgnoreSingleBodyFilter * cppInstance = new IgnoreSingleBodyFilter(
      *reinterpret_cast<BodyID *>(inBodyID->obj)
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

