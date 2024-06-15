#pragma once
#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_PathConstraintPath_destroy(
  JoltC_PathConstraintPath_t * self
);

//endregion
//region converters

/**
 * Convert an instance of JoltC_PathConstraintPathEm_t into JoltC_PathConstraintPath_t.
 */
JoltC_PathConstraintPath_t * JoltC_PathConstraintPath_From_PathConstraintPathEm(
  JoltC_PathConstraintPathEm_t * subtype
);

//endregion

//region functions

bool JoltC_PathConstraintPath_IsLooping(
  JoltC_PathConstraintPath_t * self
);

void JoltC_PathConstraintPath_SetIsLooping(
  JoltC_PathConstraintPath_t * self,
  bool inIsLooping
);

unsigned long JoltC_PathConstraintPath_GetRefCount(
  JoltC_PathConstraintPath_t * self
);

void JoltC_PathConstraintPath_AddRef(
  JoltC_PathConstraintPath_t * self
);

void JoltC_PathConstraintPath_Release(
  JoltC_PathConstraintPath_t * self
);

//endregion


#ifdef __cplusplus
}
#endif
