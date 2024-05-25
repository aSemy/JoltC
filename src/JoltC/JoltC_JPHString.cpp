#include "JoltC/JPC_JPHString.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_JPHString_t * JPC_JPHString_new(
  char* str,
  long length
) {
  JPC_JPHString_t * cInstance = new JPC_JPHString_t();
  JPHString * cppInstance = new JPHString(
    str,
    length
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

const char* JPC_JPHString_c_str(
  JPC_JPHString_t * self
) {
  JPHString * selfCpp = static_cast<JPHString *>(self->obj);
  const char* result = selfCpp->c_str();
  return result;
};

unsigned long JPC_JPHString_size(
  JPC_JPHString_t * self
) {
  JPHString * selfCpp = static_cast<JPHString *>(self->obj);
  unsigned long result = selfCpp->size();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

