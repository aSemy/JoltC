#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JoltC_ArraySoftBodyVertex_t * JoltC_SoftBodyManifold_GetVertices(
  JoltC_SoftBodyManifold_t * self,
  char** outErrMsg
);

bool JoltC_SoftBodyManifold_HasContact(
  JoltC_SoftBodyManifold_t * self,
  const JoltC_SoftBodyVertex_t * inVertex,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SoftBodyManifold_GetLocalContactPoint(
  JoltC_SoftBodyManifold_t * self,
  const JoltC_SoftBodyVertex_t * inVertex,
  char** outErrMsg
);

JoltC_Vec3_t * JoltC_SoftBodyManifold_GetContactNormal(
  JoltC_SoftBodyManifold_t * self,
  const JoltC_SoftBodyVertex_t * inVertex,
  char** outErrMsg
);

JoltC_BodyID_t * JoltC_SoftBodyManifold_GetContactBodyID(
  JoltC_SoftBodyManifold_t * self,
  const JoltC_SoftBodyVertex_t * inVertex,
  char** outErrMsg
);

//endregion functions


#ifdef __cplusplus
}
#endif

