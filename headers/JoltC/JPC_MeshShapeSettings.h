#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_MeshShapeSettings_t * JPC_MeshShapeSettings_new_0();

JPC_MeshShapeSettings_t * JPC_MeshShapeSettings_new_1(
  const JPC_TriangleList_t * inTriangleList,
  const JPC_PhysicsMaterialList_t * inMaterialList
);

JPC_MeshShapeSettings_t * JPC_MeshShapeSettings_new_2(
  const JPC_VertexList_t * inVertices,
  const JPC_IndexedTriangleList_t * inTriangles,
  const JPC_PhysicsMaterialList_t * inMaterialList
);

//endregion constructors

//region functions

void JPC_MeshShapeSettings_Sanitize(
  JPC_MeshShapeSettings_t * self
);

unsigned long JPC_MeshShapeSettings_GetRefCount(
  JPC_MeshShapeSettings_t * self
);

void JPC_MeshShapeSettings_AddRef(
  JPC_MeshShapeSettings_t * self
);

void JPC_MeshShapeSettings_Release(
  JPC_MeshShapeSettings_t * self
);

JPC_Shape_ShapeResult_t * JPC_MeshShapeSettings_Create(
  JPC_MeshShapeSettings_t * self
);

void JPC_MeshShapeSettings_ClearCachedResult(
  JPC_MeshShapeSettings_t * self
);

//endregion functions

//region properties

JPC_VertexList_t * JPC_MeshShapeSettings_mTriangleVertices_Get(
  JPC_MeshShapeSettings_t * self
);

void JPC_MeshShapeSettings_mTriangleVertices_Set(
  JPC_MeshShapeSettings_t * self,
  JPC_VertexList_t * mTriangleVertices
);

JPC_IndexedTriangleList_t * JPC_MeshShapeSettings_mIndexedTriangles_Get(
  JPC_MeshShapeSettings_t * self
);

void JPC_MeshShapeSettings_mIndexedTriangles_Set(
  JPC_MeshShapeSettings_t * self,
  JPC_IndexedTriangleList_t * mIndexedTriangles
);

JPC_PhysicsMaterialList_t * JPC_MeshShapeSettings_mMaterials_Get(
  JPC_MeshShapeSettings_t * self
);

void JPC_MeshShapeSettings_mMaterials_Set(
  JPC_MeshShapeSettings_t * self,
  JPC_PhysicsMaterialList_t * mMaterials
);

unsigned long JPC_MeshShapeSettings_mMaxTrianglesPerLeaf_Get(
  JPC_MeshShapeSettings_t * self
);

void JPC_MeshShapeSettings_mMaxTrianglesPerLeaf_Set(
  JPC_MeshShapeSettings_t * self,
  unsigned long mMaxTrianglesPerLeaf
);

float JPC_MeshShapeSettings_mActiveEdgeCosThresholdAngle_Get(
  JPC_MeshShapeSettings_t * self
);

void JPC_MeshShapeSettings_mActiveEdgeCosThresholdAngle_Set(
  JPC_MeshShapeSettings_t * self,
  float mActiveEdgeCosThresholdAngle
);

unsigned long long int JPC_MeshShapeSettings_mUserData_Get(
  JPC_MeshShapeSettings_t * self
);

void JPC_MeshShapeSettings_mUserData_Set(
  JPC_MeshShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion properties


#ifdef __cplusplus
}
#endif

