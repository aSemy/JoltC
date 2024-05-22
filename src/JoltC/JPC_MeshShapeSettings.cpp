#include "JoltC/JPC_MeshShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_MeshShapeSettings_t * JPC_MeshShapeSettings_new_0() {
  JPC_MeshShapeSettings_t * cInstance = new JPC_MeshShapeSettings_t();
  MeshShapeSettings * cppInstance = new MeshShapeSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_MeshShapeSettings_t * JPC_MeshShapeSettings_new_1(
  const JPC_TriangleList_t * inTriangleList,
  const JPC_PhysicsMaterialList_t * inMaterialList
) {
  JPC_MeshShapeSettings_t * cInstance = new JPC_MeshShapeSettings_t();
  MeshShapeSettings * cppInstance = new MeshShapeSettings(
    *reinterpret_cast<TriangleList *>(inTriangleList->obj),
    *reinterpret_cast<PhysicsMaterialList *>(inMaterialList->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_MeshShapeSettings_t * JPC_MeshShapeSettings_new_2(
  const JPC_VertexList_t * inVertices,
  const JPC_IndexedTriangleList_t * inTriangles,
  const JPC_PhysicsMaterialList_t * inMaterialList
) {
  JPC_MeshShapeSettings_t * cInstance = new JPC_MeshShapeSettings_t();
  MeshShapeSettings * cppInstance = new MeshShapeSettings(
    *reinterpret_cast<VertexList *>(inVertices->obj),
    *reinterpret_cast<IndexedTriangleList *>(inTriangles->obj),
    *reinterpret_cast<PhysicsMaterialList *>(inMaterialList->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_MeshShapeSettings_Sanitize(
  JPC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  
  selfCpp->Sanitize();
};

unsigned long JPC_MeshShapeSettings_GetRefCount(
  JPC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_MeshShapeSettings_AddRef(
  JPC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_MeshShapeSettings_Release(
  JPC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  
  selfCpp->Release();
};

JPC_Shape_ShapeResult_t * JPC_MeshShapeSettings_Create(
  JPC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->Create();
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

void JPC_MeshShapeSettings_ClearCachedResult(
  JPC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  
  selfCpp->ClearCachedResult();
};

//endregion functions

//region properties

JPC_VertexList_t * JPC_MeshShapeSettings_mTriangleVertices_Get(
  JPC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  VertexList resultValue = selfCpp->mTriangleVertices;
  VertexList* result = new VertexList(resultValue);
  return reinterpret_cast<JPC_VertexList_t *>(result);
};

void JPC_MeshShapeSettings_mTriangleVertices_Set(
  JPC_MeshShapeSettings_t * self,
  JPC_VertexList_t * mTriangleVertices
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mTriangleVertices = *reinterpret_cast<VertexList *>(mTriangleVertices->obj);
};

JPC_IndexedTriangleList_t * JPC_MeshShapeSettings_mIndexedTriangles_Get(
  JPC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  IndexedTriangleList resultValue = selfCpp->mIndexedTriangles;
  IndexedTriangleList* result = new IndexedTriangleList(resultValue);
  return reinterpret_cast<JPC_IndexedTriangleList_t *>(result);
};

void JPC_MeshShapeSettings_mIndexedTriangles_Set(
  JPC_MeshShapeSettings_t * self,
  JPC_IndexedTriangleList_t * mIndexedTriangles
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mIndexedTriangles = *reinterpret_cast<IndexedTriangleList *>(mIndexedTriangles->obj);
};

JPC_PhysicsMaterialList_t * JPC_MeshShapeSettings_mMaterials_Get(
  JPC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  PhysicsMaterialList resultValue = selfCpp->mMaterials;
  PhysicsMaterialList* result = new PhysicsMaterialList(resultValue);
  return reinterpret_cast<JPC_PhysicsMaterialList_t *>(result);
};

void JPC_MeshShapeSettings_mMaterials_Set(
  JPC_MeshShapeSettings_t * self,
  JPC_PhysicsMaterialList_t * mMaterials
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mMaterials = *reinterpret_cast<PhysicsMaterialList *>(mMaterials->obj);
};

unsigned long JPC_MeshShapeSettings_mMaxTrianglesPerLeaf_Get(
  JPC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  unsigned long result = selfCpp->mMaxTrianglesPerLeaf;
  return result;
};

void JPC_MeshShapeSettings_mMaxTrianglesPerLeaf_Set(
  JPC_MeshShapeSettings_t * self,
  unsigned long mMaxTrianglesPerLeaf
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mMaxTrianglesPerLeaf = mMaxTrianglesPerLeaf;
};

float JPC_MeshShapeSettings_mActiveEdgeCosThresholdAngle_Get(
  JPC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  float result = selfCpp->mActiveEdgeCosThresholdAngle;
  return result;
};

void JPC_MeshShapeSettings_mActiveEdgeCosThresholdAngle_Set(
  JPC_MeshShapeSettings_t * self,
  float mActiveEdgeCosThresholdAngle
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mActiveEdgeCosThresholdAngle = mActiveEdgeCosThresholdAngle;
};

unsigned long long int JPC_MeshShapeSettings_mUserData_Get(
  JPC_MeshShapeSettings_t * self
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  unsigned long long int result = selfCpp->mUserData;
  return result;
};

void JPC_MeshShapeSettings_mUserData_Set(
  JPC_MeshShapeSettings_t * self,
  unsigned long long int mUserData
) {
  MeshShapeSettings * selfCpp = static_cast<MeshShapeSettings *>(self->obj);
  selfCpp->mUserData = mUserData;
};

//endregion properties

#ifdef __cplusplus
}
#endif

