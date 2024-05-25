#include "JoltC/JoltC_ArraySkeletonAnimatedJoint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ArraySkeletonAnimatedJoint_t * JoltC_ArraySkeletonAnimatedJoint_new(
  char** outErrMsg
) {
  try {
    JoltC_ArraySkeletonAnimatedJoint_t * cInstance = new JoltC_ArraySkeletonAnimatedJoint_t();
    ArraySkeletonAnimatedJoint * cppInstance = new ArraySkeletonAnimatedJoint();
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

bool JoltC_ArraySkeletonAnimatedJoint_empty(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  char** outErrMsg
) {
  try {
    ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
    bool result = selfCpp->empty();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

long JoltC_ArraySkeletonAnimatedJoint_size(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  char** outErrMsg
) {
  try {
    ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
    long result = selfCpp->size();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_SkeletalAnimationAnimatedJoint_t * JoltC_ArraySkeletonAnimatedJoint_at(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
    SkeletalAnimationAnimatedJoint& resultRef = selfCpp->at(
    inIndex
    );
    SkeletalAnimationAnimatedJoint * result = &resultRef;
    return reinterpret_cast<JoltC_SkeletalAnimationAnimatedJoint_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySkeletonAnimatedJoint_push_back(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  JoltC_SkeletalAnimationAnimatedJoint_t * inValue,
  char** outErrMsg
) {
  try {
    ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<SkeletalAnimationAnimatedJoint *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySkeletonAnimatedJoint_reserve(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
    
    selfCpp->reserve(
    inSize
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySkeletonAnimatedJoint_resize(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
    
    selfCpp->resize(
    inSize
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySkeletonAnimatedJoint_clear(
  JoltC_ArraySkeletonAnimatedJoint_t * self,
  char** outErrMsg
) {
  try {
    ArraySkeletonAnimatedJoint * selfCpp = static_cast<ArraySkeletonAnimatedJoint *>(self->obj);
    
    selfCpp->clear();
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

