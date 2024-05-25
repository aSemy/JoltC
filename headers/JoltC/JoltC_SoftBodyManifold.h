#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JPC_ArraySoftBodyVertex_t * JPC_SoftBodyManifold_GetVertices(
  JPC_SoftBodyManifold_t * self
);

bool JPC_SoftBodyManifold_HasContact(
  JPC_SoftBodyManifold_t * self,
  const JPC_SoftBodyVertex_t * inVertex
);

JPC_Vec3_t * JPC_SoftBodyManifold_GetLocalContactPoint(
  JPC_SoftBodyManifold_t * self,
  const JPC_SoftBodyVertex_t * inVertex
);

JPC_Vec3_t * JPC_SoftBodyManifold_GetContactNormal(
  JPC_SoftBodyManifold_t * self,
  const JPC_SoftBodyVertex_t * inVertex
);

JPC_BodyID_t * JPC_SoftBodyManifold_GetContactBodyID(
  JPC_SoftBodyManifold_t * self,
  const JPC_SoftBodyVertex_t * inVertex
);

//endregion functions


#ifdef __cplusplus
}
#endif

