#include "JoltC/JoltC_JPHString.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `JPHString` instance.
 */
JoltC_JPHString_t * JoltC_JPHString_new(
  char* str,
  long length
) {
  JoltC_JPHString_t * cInstance = new JoltC_JPHString_t();
  JPHString * cppInstance = new JPHString(
    str,
    length
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

const char* JoltC_JPHString_c_str(
  JoltC_JPHString_t * self
) {
  JPHString * selfCpp = static_cast<JPHString *>(self->obj);
  return selfCpp->c_str();
}

unsigned long JoltC_JPHString_size(
  JoltC_JPHString_t * self
) {
  JPHString * selfCpp = static_cast<JPHString *>(self->obj);
  return selfCpp->size();
}

//endregion

#ifdef __cplusplus
}
#endif

