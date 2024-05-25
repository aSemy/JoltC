#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ShapeGetTriangles_t * JPC_ShapeGetTriangles_new(
  JPC_Shape_t * inShape,
  const JPC_AABox_t * inBox,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale
);

//endregion constructors

//region functions

long JPC_ShapeGetTriangles_GetNumTriangles(
  JPC_ShapeGetTriangles_t * self
);

long JPC_ShapeGetTriangles_GetVerticesSize(
  JPC_ShapeGetTriangles_t * self
);

const void* JPC_ShapeGetTriangles_GetVerticesData(
  JPC_ShapeGetTriangles_t * self
);

const JPC_PhysicsMaterial_t * JPC_ShapeGetTriangles_GetMaterial(
  JPC_ShapeGetTriangles_t * self,
  long inTriangle
);

//endregion functions


#ifdef __cplusplus
}
#endif

