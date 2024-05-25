#include "JoltC/JoltC_ArrayMat44.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayMat44_empty(
  JoltC_ArrayMat44_t * self,
  char** outErrMsg
) {
  try {
    ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
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

long JoltC_ArrayMat44_size(
  JoltC_ArrayMat44_t * self,
  char** outErrMsg
) {
  try {
    ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
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

JoltC_Mat44_t * JoltC_ArrayMat44_at(
  JoltC_ArrayMat44_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
    Mat44& resultRef = selfCpp->at(
    inIndex
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

void JoltC_ArrayMat44_push_back(
  JoltC_ArrayMat44_t * self,
  const JoltC_Mat44_t * inValue,
  char** outErrMsg
) {
  try {
    ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<Mat44 *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayMat44_reserve(
  JoltC_ArrayMat44_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
    
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

void JoltC_ArrayMat44_resize(
  JoltC_ArrayMat44_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
    
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

void JoltC_ArrayMat44_clear(
  JoltC_ArrayMat44_t * self,
  char** outErrMsg
) {
  try {
    ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
    
    selfCpp->clear();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44MemRef_t * JoltC_ArrayMat44_data(
  JoltC_ArrayMat44_t * self,
  char** outErrMsg
) {
  try {
    ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
    Mat44MemRef * result = selfCpp->data();
    return reinterpret_cast<JoltC_Mat44MemRef_t *>(result);
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

