#include "JoltC/JoltC_ArrayCollideShapeResult.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayCollideShapeResult_empty(
  JoltC_ArrayCollideShapeResult_t * self,
  char** outErrMsg
) {
  try {
    ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
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

long JoltC_ArrayCollideShapeResult_size(
  JoltC_ArrayCollideShapeResult_t * self,
  char** outErrMsg
) {
  try {
    ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
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

JoltC_CollideShapeResult_t * JoltC_ArrayCollideShapeResult_at(
  JoltC_ArrayCollideShapeResult_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
    CollideShapeResult& resultRef = selfCpp->at(
    inIndex
    );
    CollideShapeResult * result = &resultRef;
    return reinterpret_cast<JoltC_CollideShapeResult_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayCollideShapeResult_push_back(
  JoltC_ArrayCollideShapeResult_t * self,
  const JoltC_CollideShapeResult_t * inValue,
  char** outErrMsg
) {
  try {
    ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<CollideShapeResult *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayCollideShapeResult_reserve(
  JoltC_ArrayCollideShapeResult_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
    
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

void JoltC_ArrayCollideShapeResult_resize(
  JoltC_ArrayCollideShapeResult_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
    
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

void JoltC_ArrayCollideShapeResult_clear(
  JoltC_ArrayCollideShapeResult_t * self,
  char** outErrMsg
) {
  try {
    ArrayCollideShapeResult * selfCpp = static_cast<ArrayCollideShapeResult *>(self->obj);
    
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

