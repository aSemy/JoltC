#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_MeshShapeSettings_t * JoltC_MeshShapeSettings_new_0();

JoltC_MeshShapeSettings_t * JoltC_MeshShapeSettings_new_1(
  JoltC_TriangleList_t * inTriangleList,
  JoltC_PhysicsMaterialList_t * inMaterialList
);

JoltC_MeshShapeSettings_t * JoltC_MeshShapeSettings_new_2(
  JoltC_VertexList_t * inVertices,
  JoltC_IndexedTriangleList_t * inTriangles,
  JoltC_PhysicsMaterialList_t * inMaterialList
);

//endregion

//region functions

void JoltC_MeshShapeSettings_Sanitize(
  JoltC_MeshShapeSettings_t * self
);

unsigned long JoltC_MeshShapeSettings_GetRefCount(
  JoltC_MeshShapeSettings_t * self
);

void JoltC_MeshShapeSettings_AddRef(
  JoltC_MeshShapeSettings_t * self
);

void JoltC_MeshShapeSettings_Release(
  JoltC_MeshShapeSettings_t * self
);

JoltC_Shape_ShapeResult_t * JoltC_MeshShapeSettings_Create(
  JoltC_MeshShapeSettings_t * self
);

void JoltC_MeshShapeSettings_ClearCachedResult(
  JoltC_MeshShapeSettings_t * self
);

//endregion

//region properties

JoltC_VertexList_t * JoltC_MeshShapeSettings_mTriangleVertices_Get(
  JoltC_MeshShapeSettings_t * self
);

void JoltC_MeshShapeSettings_mTriangleVertices_Set(
  JoltC_MeshShapeSettings_t * self,
  JoltC_VertexList_t * mTriangleVertices
);

JoltC_IndexedTriangleList_t * JoltC_MeshShapeSettings_mIndexedTriangles_Get(
  JoltC_MeshShapeSettings_t * self
);

void JoltC_MeshShapeSettings_mIndexedTriangles_Set(
  JoltC_MeshShapeSettings_t * self,
  JoltC_IndexedTriangleList_t * mIndexedTriangles
);

JoltC_PhysicsMaterialList_t * JoltC_MeshShapeSettings_mMaterials_Get(
  JoltC_MeshShapeSettings_t * self
);

void JoltC_MeshShapeSettings_mMaterials_Set(
  JoltC_MeshShapeSettings_t * self,
  JoltC_PhysicsMaterialList_t * mMaterials
);

unsigned long JoltC_MeshShapeSettings_mMaxTrianglesPerLeaf_Get(
  JoltC_MeshShapeSettings_t * self
);

void JoltC_MeshShapeSettings_mMaxTrianglesPerLeaf_Set(
  JoltC_MeshShapeSettings_t * self,
  unsigned long mMaxTrianglesPerLeaf
);

float JoltC_MeshShapeSettings_mActiveEdgeCosThresholdAngle_Get(
  JoltC_MeshShapeSettings_t * self
);

void JoltC_MeshShapeSettings_mActiveEdgeCosThresholdAngle_Set(
  JoltC_MeshShapeSettings_t * self,
  float mActiveEdgeCosThresholdAngle
);

unsigned long long int JoltC_MeshShapeSettings_mUserData_Get(
  JoltC_MeshShapeSettings_t * self
);

void JoltC_MeshShapeSettings_mUserData_Set(
  JoltC_MeshShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion


#ifdef __cplusplus
}
#endif

