#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_JPHString_t * JPC_JPHString_new(
  char* str,
  long length
);

//endregion constructors

//region functions

const char* JPC_JPHString_c_str(
  JPC_JPHString_t * self
);

unsigned long JPC_JPHString_size(
  JPC_JPHString_t * self
);

//endregion functions


#ifdef __cplusplus
}
#endif

