#include "JoltC/JoltC_SoftBodySharedSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettings_t * JoltC_SoftBodySharedSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_SoftBodySharedSettings_t * cInstance = new JoltC_SoftBodySharedSettings_t();
    SoftBodySharedSettings * cppInstance = new SoftBodySharedSettings();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

unsigned long JoltC_SoftBodySharedSettings_GetRefCount(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  try {
    SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
    unsigned long result = selfCpp->GetRefCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodySharedSettings_AddRef(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  try {
    SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodySharedSettings_Release(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  try {
    SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodySharedSettings_CreateConstraints(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_SoftBodySharedSettingsVertexAttributes_t * inVertexAttributes,
  unsigned long inVertexAttributesLength,
  JoltC_SoftBodySharedSettings_EBendType inBendType,
  float inAngleTolerance,
  char** outErrMsg
) {
  try {
    SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
    
    selfCpp->CreateConstraints(
    reinterpret_cast<SoftBodySharedSettingsVertexAttributes *>(inVertexAttributes->obj),
    inVertexAttributesLength,
    static_cast<SoftBodySharedSettings_EBendType>(static_cast<int>(inBendType)),
    inAngleTolerance
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodySharedSettings_AddFace(
  JoltC_SoftBodySharedSettings_t * self,
  const JoltC_SoftBodySharedSettingsFace_t * inFace,
  char** outErrMsg
) {
  try {
    SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
    
    selfCpp->AddFace(
    *reinterpret_cast<SoftBodySharedSettingsFace *>(inFace->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodySharedSettings_CalculateEdgeLengths(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  try {
    SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
    
    selfCpp->CalculateEdgeLengths();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodySharedSettings_CalculateLRALengths(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  try {
    SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
    
    selfCpp->CalculateLRALengths();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodySharedSettings_CalculateBendConstraintConstants(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  try {
    SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
    
    selfCpp->CalculateBendConstraintConstants();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodySharedSettings_CalculateVolumeConstraintVolumes(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  try {
    SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
    
    selfCpp->CalculateVolumeConstraintVolumes();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodySharedSettings_CalculateSkinnedConstraintNormals(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  try {
    SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
    
    selfCpp->CalculateSkinnedConstraintNormals();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SoftBodySharedSettings_Optimize(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  try {
    SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
    
    selfCpp->Optimize();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_SoftBodySharedSettings_t * JoltC_SoftBodySharedSettings_Clone(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  try {
    SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
    SoftBodySharedSettings * result = selfCpp->Clone();
    return reinterpret_cast<JoltC_SoftBodySharedSettings_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

//region properties

JoltC_ArraySoftBodySharedSettingsVertex_t * JoltC_SoftBodySharedSettings_mVertices_Get(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsVertex resultValue = selfCpp->mVertices;
  ArraySoftBodySharedSettingsVertex* result = new ArraySoftBodySharedSettingsVertex(resultValue);
  return reinterpret_cast<JoltC_ArraySoftBodySharedSettingsVertex_t *>(result);
};

void JoltC_SoftBodySharedSettings_mVertices_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsVertex_t * mVertices,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mVertices = *reinterpret_cast<ArraySoftBodySharedSettingsVertex *>(mVertices->obj);
};

JoltC_ArraySoftBodySharedSettingsFace_t * JoltC_SoftBodySharedSettings_mFaces_Get(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsFace resultValue = selfCpp->mFaces;
  ArraySoftBodySharedSettingsFace* result = new ArraySoftBodySharedSettingsFace(resultValue);
  return reinterpret_cast<JoltC_ArraySoftBodySharedSettingsFace_t *>(result);
};

void JoltC_SoftBodySharedSettings_mFaces_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsFace_t * mFaces,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mFaces = *reinterpret_cast<ArraySoftBodySharedSettingsFace *>(mFaces->obj);
};

JoltC_ArraySoftBodySharedSettingsEdge_t * JoltC_SoftBodySharedSettings_mEdgeConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsEdge resultValue = selfCpp->mEdgeConstraints;
  ArraySoftBodySharedSettingsEdge* result = new ArraySoftBodySharedSettingsEdge(resultValue);
  return reinterpret_cast<JoltC_ArraySoftBodySharedSettingsEdge_t *>(result);
};

void JoltC_SoftBodySharedSettings_mEdgeConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsEdge_t * mEdgeConstraints,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mEdgeConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsEdge *>(mEdgeConstraints->obj);
};

JoltC_ArraySoftBodySharedSettingsDihedralBend_t * JoltC_SoftBodySharedSettings_mDihedralBendConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsDihedralBend resultValue = selfCpp->mDihedralBendConstraints;
  ArraySoftBodySharedSettingsDihedralBend* result = new ArraySoftBodySharedSettingsDihedralBend(resultValue);
  return reinterpret_cast<JoltC_ArraySoftBodySharedSettingsDihedralBend_t *>(result);
};

void JoltC_SoftBodySharedSettings_mDihedralBendConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsDihedralBend_t * mDihedralBendConstraints,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mDihedralBendConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsDihedralBend *>(mDihedralBendConstraints->obj);
};

JoltC_ArraySoftBodySharedSettingsVolume_t * JoltC_SoftBodySharedSettings_mVolumeConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsVolume resultValue = selfCpp->mVolumeConstraints;
  ArraySoftBodySharedSettingsVolume* result = new ArraySoftBodySharedSettingsVolume(resultValue);
  return reinterpret_cast<JoltC_ArraySoftBodySharedSettingsVolume_t *>(result);
};

void JoltC_SoftBodySharedSettings_mVolumeConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsVolume_t * mVolumeConstraints,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mVolumeConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsVolume *>(mVolumeConstraints->obj);
};

JoltC_ArraySoftBodySharedSettingsSkinned_t * JoltC_SoftBodySharedSettings_mSkinnedConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsSkinned resultValue = selfCpp->mSkinnedConstraints;
  ArraySoftBodySharedSettingsSkinned* result = new ArraySoftBodySharedSettingsSkinned(resultValue);
  return reinterpret_cast<JoltC_ArraySoftBodySharedSettingsSkinned_t *>(result);
};

void JoltC_SoftBodySharedSettings_mSkinnedConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsSkinned_t * mSkinnedConstraints,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mSkinnedConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsSkinned *>(mSkinnedConstraints->obj);
};

JoltC_ArraySoftBodySharedSettingsInvBind_t * JoltC_SoftBodySharedSettings_mInvBindMatrices_Get(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsInvBind resultValue = selfCpp->mInvBindMatrices;
  ArraySoftBodySharedSettingsInvBind* result = new ArraySoftBodySharedSettingsInvBind(resultValue);
  return reinterpret_cast<JoltC_ArraySoftBodySharedSettingsInvBind_t *>(result);
};

void JoltC_SoftBodySharedSettings_mInvBindMatrices_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsInvBind_t * mInvBindMatrices,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mInvBindMatrices = *reinterpret_cast<ArraySoftBodySharedSettingsInvBind *>(mInvBindMatrices->obj);
};

JoltC_ArraySoftBodySharedSettingsLRA_t * JoltC_SoftBodySharedSettings_mLRAConstraints_Get(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  ArraySoftBodySharedSettingsLRA resultValue = selfCpp->mLRAConstraints;
  ArraySoftBodySharedSettingsLRA* result = new ArraySoftBodySharedSettingsLRA(resultValue);
  return reinterpret_cast<JoltC_ArraySoftBodySharedSettingsLRA_t *>(result);
};

void JoltC_SoftBodySharedSettings_mLRAConstraints_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_ArraySoftBodySharedSettingsLRA_t * mLRAConstraints,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mLRAConstraints = *reinterpret_cast<ArraySoftBodySharedSettingsLRA *>(mLRAConstraints->obj);
};

JoltC_PhysicsMaterialList_t * JoltC_SoftBodySharedSettings_mMaterials_Get(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  PhysicsMaterialList resultValue = selfCpp->mMaterials;
  PhysicsMaterialList* result = new PhysicsMaterialList(resultValue);
  return reinterpret_cast<JoltC_PhysicsMaterialList_t *>(result);
};

void JoltC_SoftBodySharedSettings_mMaterials_Set(
  JoltC_SoftBodySharedSettings_t * self,
  JoltC_PhysicsMaterialList_t * mMaterials,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mMaterials = *reinterpret_cast<PhysicsMaterialList *>(mMaterials->obj);
};

float JoltC_SoftBodySharedSettings_mVertexRadius_Get(
  JoltC_SoftBodySharedSettings_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  float result = selfCpp->mVertexRadius;
  return result;
};

void JoltC_SoftBodySharedSettings_mVertexRadius_Set(
  JoltC_SoftBodySharedSettings_t * self,
  float mVertexRadius,
  char** outErrMsg
) {
  SoftBodySharedSettings * selfCpp = static_cast<SoftBodySharedSettings *>(self->obj);
  selfCpp->mVertexRadius = mVertexRadius;
};

//endregion properties

#ifdef __cplusplus
}
#endif

