#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_OffsetCenterOfMassShapeSettings_t * JoltC_OffsetCenterOfMassShapeSettings_new(
  JoltC_Vec3_t * inOffset,
  JoltC_ShapeSettings_t * inShape
);

//endregion

//region functions

unsigned long JoltC_OffsetCenterOfMassShapeSettings_GetRefCount(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
);

void JoltC_OffsetCenterOfMassShapeSettings_AddRef(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
);

void JoltC_OffsetCenterOfMassShapeSettings_Release(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
);

JoltC_Shape_ShapeResult_t * JoltC_OffsetCenterOfMassShapeSettings_Create(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
);

void JoltC_OffsetCenterOfMassShapeSettings_ClearCachedResult(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
);

//endregion

//region properties

JoltC_Vec3_t * JoltC_OffsetCenterOfMassShapeSettings_mOffset_Get(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
);

void JoltC_OffsetCenterOfMassShapeSettings_mOffset_Set(
  JoltC_OffsetCenterOfMassShapeSettings_t * self,
  JoltC_Vec3_t * mOffset
);

unsigned long long int JoltC_OffsetCenterOfMassShapeSettings_mUserData_Get(
  JoltC_OffsetCenterOfMassShapeSettings_t * self
);

void JoltC_OffsetCenterOfMassShapeSettings_mUserData_Set(
  JoltC_OffsetCenterOfMassShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion


#ifdef __cplusplus
}
#endif

