#include "JoltC/JoltC_SoftBodySharedSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `SoftBodySharedSettings` instance.
 */
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
  return selfCpp->GetRefCount();
}

void JoltC_SoftBodySharedSettings_AddRef(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_SoftBodySharedSettings_Release(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->Release();
}

void JoltC_SoftBodySharedSettings_CreateConstraints(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_SoftBodySharedSettingsVertexAttributes_t * inVertexAttributes,
  unsigned long inVertexAttributesLength,
  JoltC_SoftBodySharedSettings_EBendType inBendType,
  float inAngleTolerance
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  SoftBodySharedSettingsVertexAttributes * inVertexAttributesCpp = static_cast<SoftBodySharedSettingsVertexAttributes *>(inVertexAttributes->obj);
  SoftBodySharedSettings_EBendType inBendTypeCpp = static_cast<SoftBodySharedSettings_EBendType>(static_cast<int>(inBendType));
  selfCpp->CreateConstraints(
    inVertexAttributesCpp,
    inVertexAttributesLength,
    inBendTypeCpp,
    inAngleTolerance
  );
}

void JoltC_SoftBodySharedSettings_AddFace(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_SoftBodySharedSettingsFace_t * inFace
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  const SoftBodySharedSettingsFace * inFaceCpp = static_cast<const SoftBodySharedSettingsFace *>(inFace->obj);
  selfCpp->AddFace(
    *inFaceCpp
  );
}

void JoltC_SoftBodySharedSettings_CalculateEdgeLengths(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->CalculateEdgeLengths();
}

void JoltC_SoftBodySharedSettings_CalculateLRALengths(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->CalculateLRALengths();
}

void JoltC_SoftBodySharedSettings_CalculateBendConstraintConstants(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->CalculateBendConstraintConstants();
}

void JoltC_SoftBodySharedSettings_CalculateVolumeConstraintVolumes(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->CalculateVolumeConstraintVolumes();
}

void JoltC_SoftBodySharedSettings_CalculateSkinnedConstraintNormals(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->CalculateSkinnedConstraintNormals();
}

void JoltC_SoftBodySharedSettings_Optimize(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->Optimize();
}

JoltC_SoftBodySharedSettings_t * JoltC_SoftBodySharedSettings_Clone(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  const SoftBodySharedSettings * resultPtr = selfCpp->Clone();
  JoltC_SoftBodySharedSettings_t * result = new JoltC_SoftBodySharedSettings_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

//endregion

//region properties

JoltC_ArraySoftBodySharedSettingsVertex_t * JoltC_SoftBodySharedSettings_mVertices_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsVertex * resultPtr = new ArraySoftBodySharedSettingsVertex();
  *resultPtr = selfCpp->mVertices;
  JoltC_ArraySoftBodySharedSettingsVertex_t * result = new JoltC_ArraySoftBodySharedSettingsVertex_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodySharedSettings_mVertices_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsVertex_t * mVertices
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mVertices = *static_cast<ArraySoftBodySharedSettingsVertex *>(mVertices->obj);
};

JoltC_ArraySoftBodySharedSettingsFace_t * JoltC_SoftBodySharedSettings_mFaces_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsFace * resultPtr = new ArraySoftBodySharedSettingsFace();
  *resultPtr = selfCpp->mFaces;
  JoltC_ArraySoftBodySharedSettingsFace_t * result = new JoltC_ArraySoftBodySharedSettingsFace_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodySharedSettings_mFaces_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsFace_t * mFaces
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mFaces = *static_cast<ArraySoftBodySharedSettingsFace *>(mFaces->obj);
};

JoltC_ArraySoftBodySharedSettingsEdge_t * JoltC_SoftBodySharedSettings_mEdgeConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsEdge * resultPtr = new ArraySoftBodySharedSettingsEdge();
  *resultPtr = selfCpp->mEdgeConstraints;
  JoltC_ArraySoftBodySharedSettingsEdge_t * result = new JoltC_ArraySoftBodySharedSettingsEdge_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodySharedSettings_mEdgeConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsEdge_t * mEdgeConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mEdgeConstraints = *static_cast<ArraySoftBodySharedSettingsEdge *>(mEdgeConstraints->obj);
};

JoltC_ArraySoftBodySharedSettingsDihedralBend_t * JoltC_SoftBodySharedSettings_mDihedralBendConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsDihedralBend * resultPtr = new ArraySoftBodySharedSettingsDihedralBend();
  *resultPtr = selfCpp->mDihedralBendConstraints;
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * result = new JoltC_ArraySoftBodySharedSettingsDihedralBend_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodySharedSettings_mDihedralBendConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * mDihedralBendConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mDihedralBendConstraints = *static_cast<ArraySoftBodySharedSettingsDihedralBend *>(mDihedralBendConstraints->obj);
};

JoltC_ArraySoftBodySharedSettingsVolume_t * JoltC_SoftBodySharedSettings_mVolumeConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsVolume * resultPtr = new ArraySoftBodySharedSettingsVolume();
  *resultPtr = selfCpp->mVolumeConstraints;
  JoltC_ArraySoftBodySharedSettingsVolume_t * result = new JoltC_ArraySoftBodySharedSettingsVolume_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodySharedSettings_mVolumeConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsVolume_t * mVolumeConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mVolumeConstraints = *static_cast<ArraySoftBodySharedSettingsVolume *>(mVolumeConstraints->obj);
};

JoltC_ArraySoftBodySharedSettingsSkinned_t * JoltC_SoftBodySharedSettings_mSkinnedConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsSkinned * resultPtr = new ArraySoftBodySharedSettingsSkinned();
  *resultPtr = selfCpp->mSkinnedConstraints;
  JoltC_ArraySoftBodySharedSettingsSkinned_t * result = new JoltC_ArraySoftBodySharedSettingsSkinned_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodySharedSettings_mSkinnedConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsSkinned_t * mSkinnedConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mSkinnedConstraints = *static_cast<ArraySoftBodySharedSettingsSkinned *>(mSkinnedConstraints->obj);
};

JoltC_ArraySoftBodySharedSettingsInvBind_t * JoltC_SoftBodySharedSettings_mInvBindMatrices_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsInvBind * resultPtr = new ArraySoftBodySharedSettingsInvBind();
  *resultPtr = selfCpp->mInvBindMatrices;
  JoltC_ArraySoftBodySharedSettingsInvBind_t * result = new JoltC_ArraySoftBodySharedSettingsInvBind_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodySharedSettings_mInvBindMatrices_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsInvBind_t * mInvBindMatrices
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mInvBindMatrices = *static_cast<ArraySoftBodySharedSettingsInvBind *>(mInvBindMatrices->obj);
};

JoltC_ArraySoftBodySharedSettingsLRA_t * JoltC_SoftBodySharedSettings_mLRAConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsLRA * resultPtr = new ArraySoftBodySharedSettingsLRA();
  *resultPtr = selfCpp->mLRAConstraints;
  JoltC_ArraySoftBodySharedSettingsLRA_t * result = new JoltC_ArraySoftBodySharedSettingsLRA_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodySharedSettings_mLRAConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsLRA_t * mLRAConstraints
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mLRAConstraints = *static_cast<ArraySoftBodySharedSettingsLRA *>(mLRAConstraints->obj);
};

JoltC_PhysicsMaterialList_t * JoltC_SoftBodySharedSettings_mMaterials_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  PhysicsMaterialList * resultPtr = new PhysicsMaterialList();
  *resultPtr = selfCpp->mMaterials;
  JoltC_PhysicsMaterialList_t * result = new JoltC_PhysicsMaterialList_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_SoftBodySharedSettings_mMaterials_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_PhysicsMaterialList_t * mMaterials
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mMaterials = *static_cast<PhysicsMaterialList *>(mMaterials->obj);
};

float JoltC_SoftBodySharedSettings_mVertexRadius_Get(
  JoltC_SoftBodySharedSettings_t * self
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  return selfCpp->mVertexRadius;
}

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

