#include "JoltC/JoltC_ArrayRayCastResult.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayRayCastResult_empty(
  JoltC_ArrayRayCastResult_t * self,
  char** outErrMsg
) {
  try {
    ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
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

long JoltC_ArrayRayCastResult_size(
  JoltC_ArrayRayCastResult_t * self,
  char** outErrMsg
) {
  try {
    ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
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

JoltC_RayCastResult_t * JoltC_ArrayRayCastResult_at(
  JoltC_ArrayRayCastResult_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
    RayCastResult& resultRef = selfCpp->at(
    inIndex
    );
    RayCastResult * result = &resultRef;
    return reinterpret_cast<JoltC_RayCastResult_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayRayCastResult_push_back(
  JoltC_ArrayRayCastResult_t * self,
  const JoltC_RayCastResult_t * inValue,
  char** outErrMsg
) {
  try {
    ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<RayCastResult *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayRayCastResult_reserve(
  JoltC_ArrayRayCastResult_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
    
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

void JoltC_ArrayRayCastResult_resize(
  JoltC_ArrayRayCastResult_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
    
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

void JoltC_ArrayRayCastResult_clear(
  JoltC_ArrayRayCastResult_t * self,
  char** outErrMsg
) {
  try {
    ArrayRayCastResult * selfCpp = static_cast<ArrayRayCastResult *>(self->obj);
    
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

