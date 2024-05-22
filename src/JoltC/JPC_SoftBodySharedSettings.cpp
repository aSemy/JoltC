#include "JoltC/JPC_SoftBodySharedSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettings_t * JPC_SoftBodySharedSettings_new() {
  JPC_SoftBodySharedSettings_t * cInstance = new JPC_SoftBodySharedSettings_t();
  SoftBodySharedSettings * cppInstance = new SoftBodySharedSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

unsigned long JPC_SoftBodySharedSettings_GetRefCount(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_SoftBodySharedSettings_AddRef(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_SoftBodySharedSettings_Release(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  
  selfCpp->Release();
};

void JPC_SoftBodySharedSettings_CreateConstraints(
  JPC_SoftBodySharedSettings_t * self,
  JPC_SoftBodySharedSettingsVertexAttributes_t * inVertexAttributes,
  unsigned long inVertexAttributesLength,
  JPC_SoftBodySharedSettings_EBendType inBendType,
  float inAngleTolerance
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  
  selfCpp->CreateConstraints(
  reinterpret_cast<SoftBodySharedSettingsVertexAttributes *>(inVertexAttributes->obj),
  inVertexAttributesLength,
  static_cast<SoftBodySharedSettings_EBendType>(static_cast<int>(inBendType)),
  inAngleTolerance
  );
};

void JPC_SoftBodySharedSettings_AddFace(
  JPC_SoftBodySharedSettings_t * self,
  const JPC_SoftBodySharedSettingsFace_t * inFace
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  
  selfCpp->AddFace(
  *reinterpret_cast<SoftBodySharedSettingsFace *>(inFace->obj)
  );
};

void JPC_SoftBodySharedSettings_CalculateEdgeLengths(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  
  selfCpp->CalculateEdgeLengths();
};

void JPC_SoftBodySharedSettings_CalculateLRALengths(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  
  selfCpp->CalculateLRALengths();
};

void JPC_SoftBodySharedSettings_CalculateBendConstraintConstants(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  
  selfCpp->CalculateBendConstraintConstants();
};

void JPC_SoftBodySharedSettings_CalculateVolumeConstraintVolumes(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  
  selfCpp->CalculateVolumeConstraintVolumes();
};

void JPC_SoftBodySharedSettings_CalculateSkinnedConstraintNormals(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  
  selfCpp->CalculateSkinnedConstraintNormals();
};

void JPC_SoftBodySharedSettings_Optimize(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  
  selfCpp->Optimize();
};

JPC_SoftBodySharedSettings_t * JPC_SoftBodySharedSettings_Clone(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  SoftBodySharedSettings * result = selfCpp->Clone();
  return reinterpret_cast<JPC_SoftBodySharedSettings_t *>(result);
};

//endregion functions

//region properties

JPC_ArraySoftBodySharedSettingsVertex_t * JPC_SoftBodySharedSettings_mVertices_Get(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsVertex resultValue = selfCpp->mVertices;
  ArraySoftBodySharedSettingsVertex* result = new ArraySoftBodySharedSettingsVertex(resultValue);
  return reinterpret_cast<JPC_ArraySoftBodySharedSettingsVertex_t *>(result);
};

void JPC_SoftBodySharedSettings_mVertices_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsVertex_t * mVertices
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mVertices = *reinterpret_cast<ArraySoftBodySharedSettingsVertex *>(mVertices->obj);
};

JPC_ArraySoftBodySharedSettingsFace_t * JPC_SoftBodySharedSettings_mFaces_Get(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsFace resultValue = selfCpp->mFaces;
  ArraySoftBodySharedSettingsFace* result = new ArraySoftBodySharedSettingsFace(resultValue);
  return reinterpret_cast<JPC_ArraySoftBodySharedSettingsFace_t *>(result);
};

void JPC_SoftBodySharedSettings_mFaces_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsFace_t * mFaces
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mFaces = *reinterpret_cast<ArraySoftBodySharedSettingsFace *>(mFaces->obj);
};

JPC_ArraySoftBodySharedSettingsEdge_t * JPC_SoftBodySharedSettings_mEdgeConstraints_Get(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsEdge resultValue = selfCpp->mEdgeConstraints;
  ArraySoftBodySharedSettingsEdge* result = new ArraySoftBodySharedSettingsEdge(resultValue);
  return reinterpret_cast<JPC_ArraySoftBodySharedSettingsEdge_t *>(result);
};

void JPC_SoftBodySharedSettings_mEdgeConstraints_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsEdge_t * mEdgeConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mEdgeConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsEdge *>(mEdgeConstraints->obj);
};

JPC_ArraySoftBodySharedSettingsDihedralBend_t * JPC_SoftBodySharedSettings_mDihedralBendConstraints_Get(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsDihedralBend resultValue = selfCpp->mDihedralBendConstraints;
  ArraySoftBodySharedSettingsDihedralBend* result = new ArraySoftBodySharedSettingsDihedralBend(resultValue);
  return reinterpret_cast<JPC_ArraySoftBodySharedSettingsDihedralBend_t *>(result);
};

void JPC_SoftBodySharedSettings_mDihedralBendConstraints_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * mDihedralBendConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mDihedralBendConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsDihedralBend *>(mDihedralBendConstraints->obj);
};

JPC_ArraySoftBodySharedSettingsVolume_t * JPC_SoftBodySharedSettings_mVolumeConstraints_Get(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsVolume resultValue = selfCpp->mVolumeConstraints;
  ArraySoftBodySharedSettingsVolume* result = new ArraySoftBodySharedSettingsVolume(resultValue);
  return reinterpret_cast<JPC_ArraySoftBodySharedSettingsVolume_t *>(result);
};

void JPC_SoftBodySharedSettings_mVolumeConstraints_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsVolume_t * mVolumeConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mVolumeConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsVolume *>(mVolumeConstraints->obj);
};

JPC_ArraySoftBodySharedSettingsSkinned_t * JPC_SoftBodySharedSettings_mSkinnedConstraints_Get(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsSkinned resultValue = selfCpp->mSkinnedConstraints;
  ArraySoftBodySharedSettingsSkinned* result = new ArraySoftBodySharedSettingsSkinned(resultValue);
  return reinterpret_cast<JPC_ArraySoftBodySharedSettingsSkinned_t *>(result);
};

void JPC_SoftBodySharedSettings_mSkinnedConstraints_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsSkinned_t * mSkinnedConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mSkinnedConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsSkinned *>(mSkinnedConstraints->obj);
};

JPC_ArraySoftBodySharedSettingsInvBind_t * JPC_SoftBodySharedSettings_mInvBindMatrices_Get(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsInvBind resultValue = selfCpp->mInvBindMatrices;
  ArraySoftBodySharedSettingsInvBind* result = new ArraySoftBodySharedSettingsInvBind(resultValue);
  return reinterpret_cast<JPC_ArraySoftBodySharedSettingsInvBind_t *>(result);
};

void JPC_SoftBodySharedSettings_mInvBindMatrices_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsInvBind_t * mInvBindMatrices
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mInvBindMatrices = *reinterpret_cast<ArraySoftBodySharedSettingsInvBind *>(mInvBindMatrices->obj);
};

JPC_ArraySoftBodySharedSettingsLRA_t * JPC_SoftBodySharedSettings_mLRAConstraints_Get(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsLRA resultValue = selfCpp->mLRAConstraints;
  ArraySoftBodySharedSettingsLRA* result = new ArraySoftBodySharedSettingsLRA(resultValue);
  return reinterpret_cast<JPC_ArraySoftBodySharedSettingsLRA_t *>(result);
};

void JPC_SoftBodySharedSettings_mLRAConstraints_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsLRA_t * mLRAConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mLRAConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsLRA *>(mLRAConstraints->obj);
};

JPC_PhysicsMaterialList_t * JPC_SoftBodySharedSettings_mMaterials_Get(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  PhysicsMaterialList resultValue = selfCpp->mMaterials;
  PhysicsMaterialList* result = new PhysicsMaterialList(resultValue);
  return reinterpret_cast<JPC_PhysicsMaterialList_t *>(result);
};

void JPC_SoftBodySharedSettings_mMaterials_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_PhysicsMaterialList_t * mMaterials
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mMaterials = *reinterpret_cast<PhysicsMaterialList *>(mMaterials->obj);
};

float JPC_SoftBodySharedSettings_mVertexRadius_Get(
  JPC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  float result = selfCpp->mVertexRadius;
  return result;
};

void JPC_SoftBodySharedSettings_mVertexRadius_Set(
  JPC_SoftBodySharedSettings_t * self,
  float mVertexRadius
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mVertexRadius = mVertexRadius;
};

//endregion properties

#ifdef __cplusplus
}
#endif

