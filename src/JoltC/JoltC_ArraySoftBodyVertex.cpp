#include "JoltC/JoltC_ArraySoftBodyVertex.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodyVertex_empty(
  JoltC_ArraySoftBodyVertex_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
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

long JoltC_ArraySoftBodyVertex_size(
  JoltC_ArraySoftBodyVertex_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
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

JoltC_SoftBodyVertex_t * JoltC_ArraySoftBodyVertex_at(
  JoltC_ArraySoftBodyVertex_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
    SoftBodyVertex& resultRef = selfCpp->at(
    inIndex
    );
    SoftBodyVertex * result = &resultRef;
    return reinterpret_cast<JoltC_SoftBodyVertex_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodyVertex_push_back(
  JoltC_ArraySoftBodyVertex_t * self,
  const JoltC_SoftBodyVertex_t * inValue,
  char** outErrMsg
) {
  try {
    ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<SoftBodyVertex *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodyVertex_reserve(
  JoltC_ArraySoftBodyVertex_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
    
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

void JoltC_ArraySoftBodyVertex_resize(
  JoltC_ArraySoftBodyVertex_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
    
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

void JoltC_ArraySoftBodyVertex_clear(
  JoltC_ArraySoftBodyVertex_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodyVertex * selfCpp = static_cast<ArraySoftBodyVertex *>(self->obj);
    
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

