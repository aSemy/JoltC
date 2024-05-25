#include "JoltC/JoltC_SkeletalAnimation.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SkeletalAnimation_t * JoltC_SkeletalAnimation_new(
  char** outErrMsg
) {
  try {
    JoltC_SkeletalAnimation_t * cInstance = new JoltC_SkeletalAnimation_t();
    SkeletalAnimation * cppInstance = new SkeletalAnimation();
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

float JoltC_SkeletalAnimation_GetDuration(
  JoltC_SkeletalAnimation_t * self,
  char** outErrMsg
) {
  try {
    SkeletalAnimation * selfCpp = static_cast<SkeletalAnimation *>(self->obj);
    float result = selfCpp->GetDuration();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SkeletalAnimation_ScaleJoints(
  JoltC_SkeletalAnimation_t * self,
  float inScale,
  char** outErrMsg
) {
  try {
    SkeletalAnimation * selfCpp = static_cast<SkeletalAnimation *>(self->obj);
    
    selfCpp->ScaleJoints(
    inScale
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SkeletalAnimation_Sample(
  JoltC_SkeletalAnimation_t * self,
  float inTime,
  JoltC_SkeletonPose_t * ioPose,
  char** outErrMsg
) {
  try {
    SkeletalAnimation * selfCpp = static_cast<SkeletalAnimation *>(self->obj);
    
    selfCpp->Sample(
    inTime,
    *reinterpret_cast<SkeletonPose *>(ioPose->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_ArraySkeletonAnimatedJoint_t * JoltC_SkeletalAnimation_GetAnimatedJoints(
  JoltC_SkeletalAnimation_t * self,
  char** outErrMsg
) {
  try {
    SkeletalAnimation * selfCpp = static_cast<SkeletalAnimation *>(self->obj);
    ArraySkeletonAnimatedJoint& resultRef = selfCpp->GetAnimatedJoints();
    ArraySkeletonAnimatedJoint * result = &resultRef;
    return reinterpret_cast<JoltC_ArraySkeletonAnimatedJoint_t *>(result);
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

