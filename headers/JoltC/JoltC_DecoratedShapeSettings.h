#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_DecoratedShapeSettings_GetRefCount(
  JPC_DecoratedShapeSettings_t * self
);

void JPC_DecoratedShapeSettings_AddRef(
  JPC_DecoratedShapeSettings_t * self
);

void JPC_DecoratedShapeSettings_Release(
  JPC_DecoratedShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_DecoratedShapeSettings_Create(
  JPC_DecoratedShapeSettings_t * self
);

void JPC_DecoratedShapeSettings_ClearCachedResult(
  JPC_DecoratedShapeSettings_t * self
);

//endregion functions

//region properties

unsigned long long int JPC_DecoratedShapeSettings_mUserData_Get(
  JPC_DecoratedShapeSettings_t * self
);

void JPC_DecoratedShapeSettings_mUserData_Set(
  JPC_DecoratedShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

