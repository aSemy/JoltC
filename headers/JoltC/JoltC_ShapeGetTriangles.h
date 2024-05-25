#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeGetTriangles_t * JoltC_ShapeGetTriangles_new(
  JoltC_Shape_t * inShape,
  const JoltC_AABox_t * inBox,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
);

//endregion constructors

//region functions

long JoltC_ShapeGetTriangles_GetNumTriangles(
  JoltC_ShapeGetTriangles_t * self,
  char** outErrMsg
);

long JoltC_ShapeGetTriangles_GetVerticesSize(
  JoltC_ShapeGetTriangles_t * self,
  char** outErrMsg
);

const void* JoltC_ShapeGetTriangles_GetVerticesData(
  JoltC_ShapeGetTriangles_t * self,
  char** outErrMsg
);

const JoltC_PhysicsMaterial_t * JoltC_ShapeGetTriangles_GetMaterial(
  JoltC_ShapeGetTriangles_t * self,
  long inTriangle,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

