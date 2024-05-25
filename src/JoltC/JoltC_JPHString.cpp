#include "JoltC/JoltC_JPHString.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_JPHString_t * JoltC_JPHString_new(
  char* str,
  long length,
  char** outErrMsg
) {
  try {
    JoltC_JPHString_t * cInstance = new JoltC_JPHString_t();
    JPHString * cppInstance = new JPHString(
      str,
      length
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

const char* JoltC_JPHString_c_str(
  JoltC_JPHString_t * self,
  char** outErrMsg
) {
  try {
    JPHString * selfCpp = static_cast<JPHString *>(self->obj);
    const char* result = selfCpp->c_str();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_JPHString_size(
  JoltC_JPHString_t * self,
  char** outErrMsg
) {
  try {
    JPHString * selfCpp = static_cast<JPHString *>(self->obj);
    unsigned long result = selfCpp->size();
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

