#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettings_t * JPC_SoftBodySharedSettings_new();

//endregion constructors

//region functions

unsigned long JPC_SoftBodySharedSettings_GetRefCount(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_AddRef(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_Release(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_CreateConstraints(
  JPC_SoftBodySharedSettings_t * self,
  JPC_SoftBodySharedSettingsVertexAttributes_t * inVertexAttributes,
  unsigned long inVertexAttributesLength,
  JPC_SoftBodySharedSettings_EBendType inBendType,
  float inAngleTolerance
);

void JPC_SoftBodySharedSettings_AddFace(
  JPC_SoftBodySharedSettings_t * self,
  const JPC_SoftBodySharedSettingsFace_t * inFace
);

void JPC_SoftBodySharedSettings_CalculateEdgeLengths(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_CalculateLRALengths(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_CalculateBendConstraintConstants(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_CalculateVolumeConstraintVolumes(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_CalculateSkinnedConstraintNormals(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_Optimize(
  JPC_SoftBodySharedSettings_t * self
);

JPC_SoftBodySharedSettings_t * JPC_SoftBodySharedSettings_Clone(
  JPC_SoftBodySharedSettings_t * self
);

//endregion functions

//region properties

JPC_ArraySoftBodySharedSettingsVertex_t * JPC_SoftBodySharedSettings_mVertices_Get(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_mVertices_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsVertex_t * mVertices
);

JPC_ArraySoftBodySharedSettingsFace_t * JPC_SoftBodySharedSettings_mFaces_Get(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_mFaces_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsFace_t * mFaces
);

JPC_ArraySoftBodySharedSettingsEdge_t * JPC_SoftBodySharedSettings_mEdgeConstraints_Get(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_mEdgeConstraints_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsEdge_t * mEdgeConstraints
);

JPC_ArraySoftBodySharedSettingsDihedralBend_t * JPC_SoftBodySharedSettings_mDihedralBendConstraints_Get(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_mDihedralBendConstraints_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsDihedralBend_t * mDihedralBendConstraints
);

JPC_ArraySoftBodySharedSettingsVolume_t * JPC_SoftBodySharedSettings_mVolumeConstraints_Get(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_mVolumeConstraints_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsVolume_t * mVolumeConstraints
);

JPC_ArraySoftBodySharedSettingsSkinned_t * JPC_SoftBodySharedSettings_mSkinnedConstraints_Get(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_mSkinnedConstraints_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsSkinned_t * mSkinnedConstraints
);

JPC_ArraySoftBodySharedSettingsInvBind_t * JPC_SoftBodySharedSettings_mInvBindMatrices_Get(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_mInvBindMatrices_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsInvBind_t * mInvBindMatrices
);

JPC_ArraySoftBodySharedSettingsLRA_t * JPC_SoftBodySharedSettings_mLRAConstraints_Get(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_mLRAConstraints_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_ArraySoftBodySharedSettingsLRA_t * mLRAConstraints
);

JPC_PhysicsMaterialList_t * JPC_SoftBodySharedSettings_mMaterials_Get(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_mMaterials_Set(
  JPC_SoftBodySharedSettings_t * self,
  JPC_PhysicsMaterialList_t * mMaterials
);

float JPC_SoftBodySharedSettings_mVertexRadius_Get(
  JPC_SoftBodySharedSettings_t * self
);

void JPC_SoftBodySharedSettings_mVertexRadius_Set(
  JPC_SoftBodySharedSettings_t * self,
  float mVertexRadius
);

//endregion properties


#ifdef __cplusplus
}
#endif

