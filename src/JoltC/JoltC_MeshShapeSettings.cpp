#include "JoltC/JoltC_MeshShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `MeshShapeSettings` instance.
 */
JoltC_MeshShapeSettings_t * JoltC_MeshShapeSettings_new_0() {
  JoltC_MeshShapeSettings_t * cInstance = new JoltC_MeshShapeSettings_t();
  MeshShapeSettings * cppInstance = new MeshShapeSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `MeshShapeSettings` instance.
 */
JoltC_MeshShapeSettings_t * JoltC_MeshShapeSettings_new_1(
  JoltC_TriangleList_t * inTriangleList,
  JoltC_PhysicsMaterialList_t * inMaterialList
) {
  const TriangleList * inTriangleListCpp = static_cast<const TriangleList *>(inTriangleList->obj);
  const PhysicsMaterialList * inMaterialListCpp = static_cast<const PhysicsMaterialList *>(inMaterialList->obj);
  JoltC_MeshShapeSettings_t * cInstance = new JoltC_MeshShapeSettings_t();
  MeshShapeSettings * cppInstance = new MeshShapeSettings(
    *inTriangleListCpp,
    *inMaterialListCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `MeshShapeSettings` instance.
 */
JoltC_MeshShapeSettings_t * JoltC_MeshShapeSettings_new_2(
  JoltC_VertexList_t * inVertices,
  JoltC_IndexedTriangleList_t * inTriangles,
  JoltC_PhysicsMaterialList_t * inMaterialList
) {
  const VertexList * inVerticesCpp = static_cast<const VertexList *>(inVertices->obj);
  const IndexedTriangleList * inTrianglesCpp = static_cast<const IndexedTriangleList *>(inTriangles->obj);
  const PhysicsMaterialList * inMaterialListCpp = static_cast<const PhysicsMaterialList *>(inMaterialList->obj);
  JoltC_MeshShapeSettings_t * cInstance = new JoltC_MeshShapeSettings_t();
  MeshShapeSettings * cppInstance = new MeshShapeSettings(
    *inVerticesCpp,
    *inTrianglesCpp,
    *inMaterialListCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_MeshShapeSettings_destroy(
  JoltC_MeshShapeSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<MeshShapeSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_MeshShapeSettings_Sanitize(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->Sanitize();
}

unsigned long JoltC_MeshShapeSettings_GetRefCount(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_MeshShapeSettings_AddRef(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_MeshShapeSettings_Release(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->Release();
}

JoltC_Shape_ShapeResult_t * JoltC_MeshShapeSettings_Create(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->Create();
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MeshShapeSettings_ClearCachedResult(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->ClearCachedResult();
}

//endregion

//region properties

JoltC_VertexList_t * JoltC_MeshShapeSettings_mTriangleVertices_Get(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  VertexList * resultPtr = new VertexList();
  *resultPtr = selfCpp->mTriangleVertices;
  JoltC_VertexList_t * result = new JoltC_VertexList_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MeshShapeSettings_mTriangleVertices_Set(
  JoltC_MeshShapeSettings_t * self,
  JoltC_VertexList_t * mTriangleVertices
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mTriangleVertices = *static_cast<VertexList *>(mTriangleVertices->obj);
}

JoltC_IndexedTriangleList_t * JoltC_MeshShapeSettings_mIndexedTriangles_Get(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  IndexedTriangleList * resultPtr = new IndexedTriangleList();
  *resultPtr = selfCpp->mIndexedTriangles;
  JoltC_IndexedTriangleList_t * result = new JoltC_IndexedTriangleList_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MeshShapeSettings_mIndexedTriangles_Set(
  JoltC_MeshShapeSettings_t * self,
  JoltC_IndexedTriangleList_t * mIndexedTriangles
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mIndexedTriangles = *static_cast<IndexedTriangleList *>(mIndexedTriangles->obj);
}

JoltC_PhysicsMaterialList_t * JoltC_MeshShapeSettings_mMaterials_Get(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  PhysicsMaterialList * resultPtr = new PhysicsMaterialList();
  *resultPtr = selfCpp->mMaterials;
  JoltC_PhysicsMaterialList_t * result = new JoltC_PhysicsMaterialList_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_MeshShapeSettings_mMaterials_Set(
  JoltC_MeshShapeSettings_t * self,
  JoltC_PhysicsMaterialList_t * mMaterials
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mMaterials = *static_cast<PhysicsMaterialList *>(mMaterials->obj);
}

unsigned long JoltC_MeshShapeSettings_mMaxTrianglesPerLeaf_Get(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  return selfCpp->mMaxTrianglesPerLeaf;
}

void JoltC_MeshShapeSettings_mMaxTrianglesPerLeaf_Set(
  JoltC_MeshShapeSettings_t * self,
  unsigned long mMaxTrianglesPerLeaf
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mMaxTrianglesPerLeaf = mMaxTrianglesPerLeaf;
}

float JoltC_MeshShapeSettings_mActiveEdgeCosThresholdAngle_Get(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  return selfCpp->mActiveEdgeCosThresholdAngle;
}

void JoltC_MeshShapeSettings_mActiveEdgeCosThresholdAngle_Set(
  JoltC_MeshShapeSettings_t * self,
  float mActiveEdgeCosThresholdAngle
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mActiveEdgeCosThresholdAngle = mActiveEdgeCosThresholdAngle;
}

unsigned long long int JoltC_MeshShapeSettings_mUserData_Get(
  JoltC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  return selfCpp->mUserData;
}

void JoltC_MeshShapeSettings_mUserData_Set(
  JoltC_MeshShapeSettings_t * self,
  unsigned long long int mUserData
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
}

//endregion


#ifdef __cplusplus
}
#endif
