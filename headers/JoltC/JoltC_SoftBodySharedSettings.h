#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettings_t * JoltC_SoftBodySharedSettings_new();

//endregion

//region functions

unsigned long JoltC_SoftBodySharedSettings_GetRefCount(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_AddRef(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_Release(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_CreateConstraints(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_SoftBodySharedSettingsVertexAttributes_t * inVertexAttributes,
  unsigned long inVertexAttributesLength,
  JoltC_SoftBodySharedSettings_EBendType inBendType,
  float inAngleTolerance
);

void JoltC_SoftBodySharedSettings_AddFace(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_SoftBodySharedSettingsFace_t * inFace
);

void JoltC_SoftBodySharedSettings_CalculateEdgeLengths(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_CalculateLRALengths(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_CalculateBendConstraintConstants(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_CalculateVolumeConstraintVolumes(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_CalculateSkinnedConstraintNormals(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_Optimize(
  JoltC_SoftBodySharedSettings_t * self
);

JoltC_SoftBodySharedSettings_t * JoltC_SoftBodySharedSettings_Clone(
  JoltC_SoftBodySharedSettings_t * self
);

//endregion

//region properties

JoltC_ArraySoftBodySharedSettingsVertex_t * JoltC_SoftBodySharedSettings_mVertices_Get(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_mVertices_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsVertex_t * mVertices
);

JoltC_ArraySoftBodySharedSettingsFace_t * JoltC_SoftBodySharedSettings_mFaces_Get(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_mFaces_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsFace_t * mFaces
);

JoltC_ArraySoftBodySharedSettingsEdge_t * JoltC_SoftBodySharedSettings_mEdgeConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_mEdgeConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsEdge_t * mEdgeConstraints
);

JoltC_ArraySoftBodySharedSettingsDihedralBend_t * JoltC_SoftBodySharedSettings_mDihedralBendConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_mDihedralBendConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * mDihedralBendConstraints
);

JoltC_ArraySoftBodySharedSettingsVolume_t * JoltC_SoftBodySharedSettings_mVolumeConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_mVolumeConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsVolume_t * mVolumeConstraints
);

JoltC_ArraySoftBodySharedSettingsSkinned_t * JoltC_SoftBodySharedSettings_mSkinnedConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_mSkinnedConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsSkinned_t * mSkinnedConstraints
);

JoltC_ArraySoftBodySharedSettingsInvBind_t * JoltC_SoftBodySharedSettings_mInvBindMatrices_Get(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_mInvBindMatrices_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsInvBind_t * mInvBindMatrices
);

JoltC_ArraySoftBodySharedSettingsLRA_t * JoltC_SoftBodySharedSettings_mLRAConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_mLRAConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsLRA_t * mLRAConstraints
);

JoltC_PhysicsMaterialList_t * JoltC_SoftBodySharedSettings_mMaterials_Get(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_mMaterials_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_PhysicsMaterialList_t * mMaterials
);

float JoltC_SoftBodySharedSettings_mVertexRadius_Get(
  JoltC_SoftBodySharedSettings_t * self
);

void JoltC_SoftBodySharedSettings_mVertexRadius_Set(
  JoltC_SoftBodySharedSettings_t * self,
  float mVertexRadius
);

//endregion


#ifdef __cplusplus
}
#endif

