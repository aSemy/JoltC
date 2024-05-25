#include "JoltC/JoltC_ArraySkeletonKeyframe.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ArraySkeletonKeyframe_t * JoltC_ArraySkeletonKeyframe_new(
  char** outErrMsg
) {
  try {
    JoltC_ArraySkeletonKeyframe_t * cInstance = new JoltC_ArraySkeletonKeyframe_t();
    ArraySkeletonKeyframe * cppInstance = new ArraySkeletonKeyframe();
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

bool JoltC_ArraySkeletonKeyframe_empty(
  JoltC_ArraySkeletonKeyframe_t * self,
  char** outErrMsg
) {
  try {
    ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
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

long JoltC_ArraySkeletonKeyframe_size(
  JoltC_ArraySkeletonKeyframe_t * self,
  char** outErrMsg
) {
  try {
    ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
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

JoltC_SkeletalAnimationKeyframe_t * JoltC_ArraySkeletonKeyframe_at(
  JoltC_ArraySkeletonKeyframe_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
    SkeletalAnimationKeyframe& resultRef = selfCpp->at(
    inIndex
    );
    SkeletalAnimationKeyframe * result = &resultRef;
    return reinterpret_cast<JoltC_SkeletalAnimationKeyframe_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySkeletonKeyframe_push_back(
  JoltC_ArraySkeletonKeyframe_t * self,
  JoltC_SkeletalAnimationKeyframe_t * inValue,
  char** outErrMsg
) {
  try {
    ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<SkeletalAnimationKeyframe *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySkeletonKeyframe_reserve(
  JoltC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
    
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

void JoltC_ArraySkeletonKeyframe_resize(
  JoltC_ArraySkeletonKeyframe_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
    
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

void JoltC_ArraySkeletonKeyframe_clear(
  JoltC_ArraySkeletonKeyframe_t * self,
  char** outErrMsg
) {
  try {
    ArraySkeletonKeyframe * selfCpp = static_cast<ArraySkeletonKeyframe *>(self->obj);
    
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

