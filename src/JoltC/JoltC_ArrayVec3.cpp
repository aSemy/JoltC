#include "JoltC/JoltC_ArrayVec3.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayVec3_empty(
  JoltC_ArrayVec3_t * self,
  char** outErrMsg
) {
  try {
    ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
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

long JoltC_ArrayVec3_size(
  JoltC_ArrayVec3_t * self,
  char** outErrMsg
) {
  try {
    ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
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

JoltC_Vec3_t * JoltC_ArrayVec3_at(
  JoltC_ArrayVec3_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
    Vec3& resultRef = selfCpp->at(
    inIndex
    );
    Vec3 * result = &resultRef;
    return reinterpret_cast<JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayVec3_push_back(
  JoltC_ArrayVec3_t * self,
  const JoltC_Vec3_t * inValue,
  char** outErrMsg
) {
  try {
    ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<Vec3 *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayVec3_reserve(
  JoltC_ArrayVec3_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
    
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

void JoltC_ArrayVec3_resize(
  JoltC_ArrayVec3_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
    
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

void JoltC_ArrayVec3_clear(
  JoltC_ArrayVec3_t * self,
  char** outErrMsg
) {
  try {
    ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
    
    selfCpp->clear();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3MemRef_t * JoltC_ArrayVec3_data(
  JoltC_ArrayVec3_t * self,
  char** outErrMsg
) {
  try {
    ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
    Vec3MemRef * result = selfCpp->data();
    return reinterpret_cast<JoltC_Vec3MemRef_t *>(result);
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

