#include "JoltC/JoltC_SoftBodySharedSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettings_t * JoltC_SoftBodySharedSettings_new() {
  JoltC_SoftBodySharedSettings_t * cInstance = new JoltC_SoftBodySharedSettings_t();
  SoftBodySharedSettings * cppInstance = new SoftBodySharedSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

unsigned long JoltC_SoftBodySharedSettings_GetRefCount(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_SoftBodySharedSettings_AddRef(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->AddRef();
};

void JoltC_SoftBodySharedSettings_Release(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->Release();
};

void JoltC_SoftBodySharedSettings_CreateConstraints(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_SoftBodySharedSettingsVertexAttributes_t * inVertexAttributes,
  unsigned long inVertexAttributesLength,
  JoltC_SoftBodySharedSettings_EBendType inBendType,
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

void JoltC_SoftBodySharedSettings_AddFace(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_SoftBodySharedSettingsFace_t * inFace
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->AddFace(
    *reinterpret_cast<SoftBodySharedSettingsFace *>(inFace->obj)
  );
};

void JoltC_SoftBodySharedSettings_CalculateEdgeLengths(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->CalculateEdgeLengths();
};

void JoltC_SoftBodySharedSettings_CalculateLRALengths(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->CalculateLRALengths();
};

void JoltC_SoftBodySharedSettings_CalculateBendConstraintConstants(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->CalculateBendConstraintConstants();
};

void JoltC_SoftBodySharedSettings_CalculateVolumeConstraintVolumes(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->CalculateVolumeConstraintVolumes();
};

void JoltC_SoftBodySharedSettings_CalculateSkinnedConstraintNormals(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->CalculateSkinnedConstraintNormals();
};

void JoltC_SoftBodySharedSettings_Optimize(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->Optimize();
};

JoltC_SoftBodySharedSettings_t * JoltC_SoftBodySharedSettings_Clone(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  const SoftBodySharedSettings * resultValue = selfCpp->Clone();
  JoltC_SoftBodySharedSettings_t* result = new JoltC_SoftBodySharedSettings_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

//endregion

//region properties

JoltC_ArraySoftBodySharedSettingsVertex_t * JoltC_SoftBodySharedSettings_mVertices_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  const ArraySoftBodySharedSettingsVertex& resultValue = selfCpp->mVertices;
  JoltC_ArraySoftBodySharedSettingsVertex_t* result = new JoltC_ArraySoftBodySharedSettingsVertex_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodySharedSettings_mVertices_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsVertex_t * mVertices
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mVertices = *reinterpret_cast<ArraySoftBodySharedSettingsVertex *>(mVertices->obj);
};

JoltC_ArraySoftBodySharedSettingsFace_t * JoltC_SoftBodySharedSettings_mFaces_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  const ArraySoftBodySharedSettingsFace& resultValue = selfCpp->mFaces;
  JoltC_ArraySoftBodySharedSettingsFace_t* result = new JoltC_ArraySoftBodySharedSettingsFace_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodySharedSettings_mFaces_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsFace_t * mFaces
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mFaces = *reinterpret_cast<ArraySoftBodySharedSettingsFace *>(mFaces->obj);
};

JoltC_ArraySoftBodySharedSettingsEdge_t * JoltC_SoftBodySharedSettings_mEdgeConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  const ArraySoftBodySharedSettingsEdge& resultValue = selfCpp->mEdgeConstraints;
  JoltC_ArraySoftBodySharedSettingsEdge_t* result = new JoltC_ArraySoftBodySharedSettingsEdge_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodySharedSettings_mEdgeConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsEdge_t * mEdgeConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mEdgeConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsEdge *>(mEdgeConstraints->obj);
};

JoltC_ArraySoftBodySharedSettingsDihedralBend_t * JoltC_SoftBodySharedSettings_mDihedralBendConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  const ArraySoftBodySharedSettingsDihedralBend& resultValue = selfCpp->mDihedralBendConstraints;
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t* result = new JoltC_ArraySoftBodySharedSettingsDihedralBend_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodySharedSettings_mDihedralBendConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * mDihedralBendConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mDihedralBendConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsDihedralBend *>(mDihedralBendConstraints->obj);
};

JoltC_ArraySoftBodySharedSettingsVolume_t * JoltC_SoftBodySharedSettings_mVolumeConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  const ArraySoftBodySharedSettingsVolume& resultValue = selfCpp->mVolumeConstraints;
  JoltC_ArraySoftBodySharedSettingsVolume_t* result = new JoltC_ArraySoftBodySharedSettingsVolume_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodySharedSettings_mVolumeConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsVolume_t * mVolumeConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mVolumeConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsVolume *>(mVolumeConstraints->obj);
};

JoltC_ArraySoftBodySharedSettingsSkinned_t * JoltC_SoftBodySharedSettings_mSkinnedConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  const ArraySoftBodySharedSettingsSkinned& resultValue = selfCpp->mSkinnedConstraints;
  JoltC_ArraySoftBodySharedSettingsSkinned_t* result = new JoltC_ArraySoftBodySharedSettingsSkinned_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodySharedSettings_mSkinnedConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsSkinned_t * mSkinnedConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mSkinnedConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsSkinned *>(mSkinnedConstraints->obj);
};

JoltC_ArraySoftBodySharedSettingsInvBind_t * JoltC_SoftBodySharedSettings_mInvBindMatrices_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  const ArraySoftBodySharedSettingsInvBind& resultValue = selfCpp->mInvBindMatrices;
  JoltC_ArraySoftBodySharedSettingsInvBind_t* result = new JoltC_ArraySoftBodySharedSettingsInvBind_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodySharedSettings_mInvBindMatrices_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsInvBind_t * mInvBindMatrices
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mInvBindMatrices = *reinterpret_cast<ArraySoftBodySharedSettingsInvBind *>(mInvBindMatrices->obj);
};

JoltC_ArraySoftBodySharedSettingsLRA_t * JoltC_SoftBodySharedSettings_mLRAConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  const ArraySoftBodySharedSettingsLRA& resultValue = selfCpp->mLRAConstraints;
  JoltC_ArraySoftBodySharedSettingsLRA_t* result = new JoltC_ArraySoftBodySharedSettingsLRA_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodySharedSettings_mLRAConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsLRA_t * mLRAConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mLRAConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsLRA *>(mLRAConstraints->obj);
};

JoltC_PhysicsMaterialList_t * JoltC_SoftBodySharedSettings_mMaterials_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  const PhysicsMaterialList& resultValue = selfCpp->mMaterials;
  JoltC_PhysicsMaterialList_t* result = new JoltC_PhysicsMaterialList_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_SoftBodySharedSettings_mMaterials_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_PhysicsMaterialList_t * mMaterials
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mMaterials = *reinterpret_cast<PhysicsMaterialList *>(mMaterials->obj);
};

float JoltC_SoftBodySharedSettings_mVertexRadius_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  float result = selfCpp->mVertexRadius;
  return result;
};

void JoltC_SoftBodySharedSettings_mVertexRadius_Set(
  JoltC_SoftBodySharedSettings_t * self,
  float mVertexRadius
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mVertexRadius = mVertexRadius;
};

//endregion

#ifdef __cplusplus
}
#endif

