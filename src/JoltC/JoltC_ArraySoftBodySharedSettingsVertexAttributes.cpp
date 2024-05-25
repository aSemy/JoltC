#include "JoltC/JoltC_ArraySoftBodySharedSettingsVertexAttributes.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsVertexAttributes_empty(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
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

long JoltC_ArraySoftBodySharedSettingsVertexAttributes_size(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
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

JoltC_SoftBodySharedSettingsVertexAttributes_t * JoltC_ArraySoftBodySharedSettingsVertexAttributes_at(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
    SoftBodySharedSettingsVertexAttributes& resultRef = selfCpp->at(
    inIndex
    );
    SoftBodySharedSettingsVertexAttributes * result = &resultRef;
    return reinterpret_cast<JoltC_SoftBodySharedSettingsVertexAttributes_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_push_back(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  const JoltC_SoftBodySharedSettingsVertexAttributes_t * inValue,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<SoftBodySharedSettingsVertexAttributes *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_reserve(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_resize(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsVertexAttributes_clear(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
    
    selfCpp->clear();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_SoftBodySharedSettingsVertexAttributes_t * JoltC_ArraySoftBodySharedSettingsVertexAttributes_data(
  JoltC_ArraySoftBodySharedSettingsVertexAttributes_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVertexAttributes * selfCpp = static_cast<ArraySoftBodySharedSettingsVertexAttributes *>(self->obj);
    SoftBodySharedSettingsVertexAttributes * result = selfCpp->data();
    return reinterpret_cast<JoltC_SoftBodySharedSettingsVertexAttributes_t *>(result);
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

