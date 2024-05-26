#include "JoltC/JoltC_JPHString.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

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
  const char* result = selfCpp->c_str();
  return result;
};

unsigned long JoltC_JPHString_size(
  JoltC_JPHString_t * self
) {
  JPHString * selfCpp = static_cast<JPHString *>(self->obj);
  unsigned long result = selfCpp->size();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

