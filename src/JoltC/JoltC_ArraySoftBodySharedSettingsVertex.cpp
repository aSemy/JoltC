#include "JoltC/JoltC_ArraySoftBodySharedSettingsVertex.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsVertex_empty(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
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

long JoltC_ArraySoftBodySharedSettingsVertex_size(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
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

JoltC_SoftBodySharedSettingsVertex_t * JoltC_ArraySoftBodySharedSettingsVertex_at(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
    SoftBodySharedSettingsVertex& resultRef = selfCpp->at(
    inIndex
    );
    SoftBodySharedSettingsVertex * result = &resultRef;
    return reinterpret_cast<JoltC_SoftBodySharedSettingsVertex_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsVertex_push_back(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  const JoltC_SoftBodySharedSettingsVertex_t * inValue,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<SoftBodySharedSettingsVertex *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsVertex_reserve(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsVertex_resize(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsVertex_clear(
  JoltC_ArraySoftBodySharedSettingsVertex_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertex * selfCpp = static_cast<ArraySoftBodySharedSettingsVertex *>(self->obj);
    
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

