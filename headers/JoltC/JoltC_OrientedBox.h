#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_OrientedBox_t * JPC_OrientedBox_new_0();

JPC_OrientedBox_t * JPC_OrientedBox_new_1(
  const JPC_Mat44_t * inOrientation,
  const JPC_Vec3_t * inHalfExtents
);

//endregion constructors

//region properties

JPC_Mat44_t * JPC_OrientedBox_mOrientation_Get(
  JPC_OrientedBox_t * self
);

void JPC_OrientedBox_mOrientation_Set(
  JPC_OrientedBox_t * self,
  JPC_Mat44_t * mOrientation
);

JPC_Vec3_t * JPC_OrientedBox_mHalfExtents_Get(
  JPC_OrientedBox_t * self
);

void JPC_OrientedBox_mHalfExtents_Set(
  JPC_OrientedBox_t * self,
  JPC_Vec3_t * mHalfExtents
);

//endregion properties


#ifdef __cplusplus
}
#endif

