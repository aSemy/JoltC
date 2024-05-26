#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_JPHString_t * JoltC_JPHString_new(
  char* str,
  long length
);

//endregion

//region functions

const char* JoltC_JPHString_c_str(
  JoltC_JPHString_t * self
);

unsigned long JoltC_JPHString_size(
  JoltC_JPHString_t * self
);

//endregion


#ifdef __cplusplus
}
#endif

