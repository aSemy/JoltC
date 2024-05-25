#include "JoltC/JoltC_ArrayCollidePointResult.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayCollidePointResult_empty(
  JoltC_ArrayCollidePointResult_t * self,
  char** outErrMsg
) {
  try {
    ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
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

long JoltC_ArrayCollidePointResult_size(
  JoltC_ArrayCollidePointResult_t * self,
  char** outErrMsg
) {
  try {
    ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
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

JoltC_CollidePointResult_t * JoltC_ArrayCollidePointResult_at(
  JoltC_ArrayCollidePointResult_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
    CollidePointResult& resultRef = selfCpp->at(
    inIndex
    );
    CollidePointResult * result = &resultRef;
    return reinterpret_cast<JoltC_CollidePointResult_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayCollidePointResult_push_back(
  JoltC_ArrayCollidePointResult_t * self,
  const JoltC_CollidePointResult_t * inValue,
  char** outErrMsg
) {
  try {
    ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<CollidePointResult *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayCollidePointResult_reserve(
  JoltC_ArrayCollidePointResult_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
    
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

void JoltC_ArrayCollidePointResult_resize(
  JoltC_ArrayCollidePointResult_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
    
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

void JoltC_ArrayCollidePointResult_clear(
  JoltC_ArrayCollidePointResult_t * self,
  char** outErrMsg
) {
  try {
    ArrayCollidePointResult * selfCpp = static_cast<ArrayCollidePointResult *>(self->obj);
    
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

