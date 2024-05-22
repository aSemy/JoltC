#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_ShapeSettings_GetRefCount(
  JPC_ShapeSettings_t * self
);

void JPC_ShapeSettings_AddRef(
  JPC_ShapeSettings_t * self
);

void JPC_ShapeSettings_Release(
  JPC_ShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_ShapeSettings_Create(
  JPC_ShapeSettings_t * self
);

void JPC_ShapeSettings_ClearCachedResult(
  JPC_ShapeSettings_t * self
);

//endregion functions

//region properties

unsigned long long int JPC_ShapeSettings_mUserData_Get(
  JPC_ShapeSettings_t * self
);

void JPC_ShapeSettings_mUserData_Set(
  JPC_ShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

