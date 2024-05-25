#include "JoltC/JoltC_ArrayShapeCastResult.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayShapeCastResult_empty(
  JoltC_ArrayShapeCastResult_t * self,
  char** outErrMsg
) {
  try {
    ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
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

long JoltC_ArrayShapeCastResult_size(
  JoltC_ArrayShapeCastResult_t * self,
  char** outErrMsg
) {
  try {
    ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
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

JoltC_ShapeCastResult_t * JoltC_ArrayShapeCastResult_at(
  JoltC_ArrayShapeCastResult_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
    ShapeCastResult& resultRef = selfCpp->at(
    inIndex
    );
    ShapeCastResult * result = &resultRef;
    return reinterpret_cast<JoltC_ShapeCastResult_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayShapeCastResult_push_back(
  JoltC_ArrayShapeCastResult_t * self,
  const JoltC_ShapeCastResult_t * inValue,
  char** outErrMsg
) {
  try {
    ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<ShapeCastResult *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayShapeCastResult_reserve(
  JoltC_ArrayShapeCastResult_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
    
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

void JoltC_ArrayShapeCastResult_resize(
  JoltC_ArrayShapeCastResult_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
    
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

void JoltC_ArrayShapeCastResult_clear(
  JoltC_ArrayShapeCastResult_t * self,
  char** outErrMsg
) {
  try {
    ArrayShapeCastResult * selfCpp = static_cast<ArrayShapeCastResult *>(self->obj);
    
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

