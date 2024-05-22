#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_OffsetCenterOfMassShapeSettings_t * JPC_OffsetCenterOfMassShapeSettings_new(
  const JPC_Vec3_t * inOffset,
  JPC_ShapeSettings_t * inShape
);

//endregion constructors

//region functions

unsigned long JPC_OffsetCenterOfMassShapeSettings_GetRefCount(
  JPC_OffsetCenterOfMassShapeSettings_t * self
);

void JPC_OffsetCenterOfMassShapeSettings_AddRef(
  JPC_OffsetCenterOfMassShapeSettings_t * self
);

void JPC_OffsetCenterOfMassShapeSettings_Release(
  JPC_OffsetCenterOfMassShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_OffsetCenterOfMassShapeSettings_Create(
  JPC_OffsetCenterOfMassShapeSettings_t * self
);

void JPC_OffsetCenterOfMassShapeSettings_ClearCachedResult(
  JPC_OffsetCenterOfMassShapeSettings_t * self
);

//endregion functions

//region properties

JPC_Vec3_t * JPC_OffsetCenterOfMassShapeSettings_mOffset_Get(
  JPC_OffsetCenterOfMassShapeSettings_t * self
);

void JPC_OffsetCenterOfMassShapeSettings_mOffset_Set(
  JPC_OffsetCenterOfMassShapeSettings_t * self,
  JPC_Vec3_t * mOffset
);

unsigned long long int JPC_OffsetCenterOfMassShapeSettings_mUserData_Get(
  JPC_OffsetCenterOfMassShapeSettings_t * self
);

void JPC_OffsetCenterOfMassShapeSettings_mUserData_Set(
  JPC_OffsetCenterOfMassShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

