#include "JoltC/JoltC_SkeletonPose.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletonPose_t * JoltC_SkeletonPose_new(
  char** outErrMsg
) {
  try {
    JoltC_SkeletonPose_t * cInstance = new JoltC_SkeletonPose_t();
    SkeletonPose * cppInstance = new SkeletonPose();
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

void JoltC_SkeletonPose_SetSkeleton(
  JoltC_SkeletonPose_t * self,
  const JoltC_Skeleton_t * inSkeleton,
  char** outErrMsg
) {
  try {
    SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
    
    selfCpp->SetSkeleton(
    reinterpret_cast<Skeleton *>(inSkeleton->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Skeleton_t * JoltC_SkeletonPose_GetSkeleton(
  JoltC_SkeletonPose_t * self,
  char** outErrMsg
) {
  try {
    SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
    const Skeleton * result = selfCpp->GetSkeleton();
    return reinterpret_cast<const JoltC_Skeleton_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SkeletonPose_SetRootOffset(
  JoltC_SkeletonPose_t * self,
  JoltC_RVec3_t * inOffset,
  char** outErrMsg
) {
  try {
    SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
    
    selfCpp->SetRootOffset(
    *reinterpret_cast<RVec3 *>(inOffset->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_SkeletonPose_GetRootOffset(
  JoltC_SkeletonPose_t * self,
  char** outErrMsg
) {
  try {
    SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
    RVec3 resultValue = selfCpp->GetRootOffset();
    RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

long JoltC_SkeletonPose_GetJointCount(
  JoltC_SkeletonPose_t * self,
  char** outErrMsg
) {
  try {
    SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
    long result = selfCpp->GetJointCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_SkeletalAnimationJointState_t * JoltC_SkeletonPose_GetJoint(
  JoltC_SkeletonPose_t * self,
  long inJoint,
  char** outErrMsg
) {
  try {
    SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
    SkeletalAnimationJointState& resultRef = selfCpp->GetJoint(
    inJoint
    );
    SkeletalAnimationJointState * result = &resultRef;
    return reinterpret_cast<JoltC_SkeletalAnimationJointState_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_ArrayMat44_t * JoltC_SkeletonPose_GetJointMatrices(
  JoltC_SkeletonPose_t * self,
  char** outErrMsg
) {
  try {
    SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
    ArrayMat44& resultRef = selfCpp->GetJointMatrices();
    ArrayMat44 * result = &resultRef;
    return reinterpret_cast<JoltC_ArrayMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_SkeletonPose_GetJointMatrix(
  JoltC_SkeletonPose_t * self,
  long inJoint,
  char** outErrMsg
) {
  try {
    SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
    Mat44& resultRef = selfCpp->GetJointMatrix(
    inJoint
    );
    Mat44 * result = &resultRef;
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SkeletonPose_CalculateJointMatrices(
  JoltC_SkeletonPose_t * self,
  char** outErrMsg
) {
  try {
    SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
    
    selfCpp->CalculateJointMatrices();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SkeletonPose_CalculateJointStates(
  JoltC_SkeletonPose_t * self,
  char** outErrMsg
) {
  try {
    SkeletonPose * selfCpp = static_cast<SkeletonPose *>(self->obj);
    
    selfCpp->CalculateJointStates();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

#ifdef __cplusplus
}
#endif

