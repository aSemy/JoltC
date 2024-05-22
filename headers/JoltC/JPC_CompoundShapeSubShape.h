#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JPC_Vec3_t * JPC_CompoundShapeSubShape_GetPositionCOM(
  JPC_CompoundShapeSubShape_t * self
);

JPC_Quat_t * JPC_CompoundShapeSubShape_GetRotation(
  JPC_CompoundShapeSubShape_t * self
);

//endregion functions

//region properties

const JPC_Shape_t * JPC_CompoundShapeSubShape_mShape_Get(
  JPC_CompoundShapeSubShape_t * self
);

const void JPC_CompoundShapeSubShape_mShape_Set(
  JPC_CompoundShapeSubShape_t * self,
  const JPC_Shape_t * mShape
);

unsigned long JPC_CompoundShapeSubShape_mUserData_Get(
  JPC_CompoundShapeSubShape_t * self
);

void JPC_CompoundShapeSubShape_mUserData_Set(
  JPC_CompoundShapeSubShape_t * self,
  unsigned long mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

