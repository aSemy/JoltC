#include "JoltC/JoltC_RagdollSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RagdollSettings_t * JoltC_RagdollSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_RagdollSettings_t * cInstance = new JoltC_RagdollSettings_t();
    RagdollSettings * cppInstance = new RagdollSettings();
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

bool JoltC_RagdollSettings_Stabilize(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
) {
  try {
    RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
    bool result = selfCpp->Stabilize();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Ragdoll_t * JoltC_RagdollSettings_CreateRagdoll(
  JoltC_RagdollSettings_t * self,
  long inCollisionGroup,
  long inUserData,
  JoltC_PhysicsSystem_t * inSystem,
  char** outErrMsg
) {
  try {
    RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
    Ragdoll * result = selfCpp->CreateRagdoll(
    inCollisionGroup,
    inUserData,
    reinterpret_cast<PhysicsSystem *>(inSystem->obj)
    );
    return reinterpret_cast<JoltC_Ragdoll_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Skeleton_t * JoltC_RagdollSettings_GetSkeleton(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
) {
  try {
    RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
    Skeleton * result = selfCpp->GetSkeleton();
    return reinterpret_cast<JoltC_Skeleton_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_RagdollSettings_DisableParentChildCollisions(
  JoltC_RagdollSettings_t * self,
  const JoltC_Mat44MemRef_t * inJointMatrices,
  float inMinSeparationDistance,
  char** outErrMsg
) {
  try {
    RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
    
    selfCpp->DisableParentChildCollisions(
    reinterpret_cast<Mat44MemRef *>(inJointMatrices->obj),
    inMinSeparationDistance
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_RagdollSettings_CalculateBodyIndexToConstraintIndex(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
) {
  try {
    RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
    
    selfCpp->CalculateBodyIndexToConstraintIndex();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_RagdollSettings_CalculateConstraintIndexToBodyIdxPair(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
) {
  try {
    RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
    
    selfCpp->CalculateConstraintIndexToBodyIdxPair();
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

JoltC_Skeleton_t * JoltC_RagdollSettings_mSkeleton_Get(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  Skeleton * result = selfCpp->mSkeleton;
  return reinterpret_cast<JoltC_Skeleton_t *>(result);
};

void JoltC_RagdollSettings_mSkeleton_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_Skeleton_t * mSkeleton,
  char** outErrMsg
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->mSkeleton = reinterpret_cast<Skeleton *>(mSkeleton->obj);
};

JoltC_ArrayRagdollPart_t * JoltC_RagdollSettings_mParts_Get(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  ArrayRagdollPart resultValue = selfCpp->mParts;
  ArrayRagdollPart* result = new ArrayRagdollPart(resultValue);
  return reinterpret_cast<JoltC_ArrayRagdollPart_t *>(result);
};

void JoltC_RagdollSettings_mParts_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_ArrayRagdollPart_t * mParts,
  char** outErrMsg
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->mParts = *reinterpret_cast<ArrayRagdollPart *>(mParts->obj);
};

JoltC_ArrayRagdollAdditionalConstraint_t * JoltC_RagdollSettings_mAdditionalConstraints_Get(
  JoltC_RagdollSettings_t * self,
  char** outErrMsg
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  ArrayRagdollAdditionalConstraint resultValue = selfCpp->mAdditionalConstraints;
  ArrayRagdollAdditionalConstraint* result = new ArrayRagdollAdditionalConstraint(resultValue);
  return reinterpret_cast<JoltC_ArrayRagdollAdditionalConstraint_t *>(result);
};

void JoltC_RagdollSettings_mAdditionalConstraints_Set(
  JoltC_RagdollSettings_t * self,
  JoltC_ArrayRagdollAdditionalConstraint_t * mAdditionalConstraints,
  char** outErrMsg
) {
  RagdollSettings * selfCpp = static_cast<RagdollSettings *>(self->obj);
  selfCpp->mAdditionalConstraints = *reinterpret_cast<ArrayRagdollAdditionalConstraint *>(mAdditionalConstraints->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

