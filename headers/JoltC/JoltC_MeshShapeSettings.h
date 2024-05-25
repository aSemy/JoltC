#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_MeshShapeSettings_t * JoltC_MeshShapeSettings_new_0(
  char** outErrMsg
);

JoltC_MeshShapeSettings_t * JoltC_MeshShapeSettings_new_1(
  const JoltC_TriangleList_t * inTriangleList,
  const JoltC_PhysicsMaterialList_t * inMaterialList,
  char** outErrMsg
);

JoltC_MeshShapeSettings_t * JoltC_MeshShapeSettings_new_2(
  const JoltC_VertexList_t * inVertices,
  const JoltC_IndexedTriangleList_t * inTriangles,
  const JoltC_PhysicsMaterialList_t * inMaterialList,
  char** outErrMsg
);

//endregion constructors

//region functions

void JoltC_MeshShapeSettings_Sanitize(
  JoltC_MeshShapeSettings_t * self,
  char** outErrMsg
);

unsigned long JoltC_MeshShapeSettings_GetRefCount(
  JoltC_MeshShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_MeshShapeSettings_AddRef(
  JoltC_MeshShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_MeshShapeSettings_Release(
  JoltC_MeshShapeSettings_t * self,
  char** outErrMsg
);

JoltC_Shape_ShapeResult_t * JoltC_MeshShapeSettings_Create(
  JoltC_MeshShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_MeshShapeSettings_ClearCachedResult(
  JoltC_MeshShapeSettings_t * self,
  char** outErrMsg
);

//endregion functions

//region properties

JoltC_VertexList_t * JoltC_MeshShapeSettings_mTriangleVertices_Get(
  JoltC_MeshShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_MeshShapeSettings_mTriangleVertices_Set(
  JoltC_MeshShapeSettings_t * self,
  JoltC_VertexList_t * mTriangleVertices,
  char** outErrMsg
);

JoltC_IndexedTriangleList_t * JoltC_MeshShapeSettings_mIndexedTriangles_Get(
  JoltC_MeshShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_MeshShapeSettings_mIndexedTriangles_Set(
  JoltC_MeshShapeSettings_t * self,
  JoltC_IndexedTriangleList_t * mIndexedTriangles,
  char** outErrMsg
);

JoltC_PhysicsMaterialList_t * JoltC_MeshShapeSettings_mMaterials_Get(
  JoltC_MeshShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_MeshShapeSettings_mMaterials_Set(
  JoltC_MeshShapeSettings_t * self,
  JoltC_PhysicsMaterialList_t * mMaterials,
  char** outErrMsg
);

unsigned long JoltC_MeshShapeSettings_mMaxTrianglesPerLeaf_Get(
  JoltC_MeshShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_MeshShapeSettings_mMaxTrianglesPerLeaf_Set(
  JoltC_MeshShapeSettings_t * self,
  unsigned long mMaxTrianglesPerLeaf,
  char** outErrMsg
);

float JoltC_MeshShapeSettings_mActiveEdgeCosThresholdAngle_Get(
  JoltC_MeshShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_MeshShapeSettings_mActiveEdgeCosThresholdAngle_Set(
  JoltC_MeshShapeSettings_t * self,
  float mActiveEdgeCosThresholdAngle,
  char** outErrMsg
);

unsigned long long int JoltC_MeshShapeSettings_mUserData_Get(
  JoltC_MeshShapeSettings_t * self,
  char** outErrMsg
);

void JoltC_MeshShapeSettings_mUserData_Set(
  JoltC_MeshShapeSettings_t * self,
  unsigned long long int mUserData,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

