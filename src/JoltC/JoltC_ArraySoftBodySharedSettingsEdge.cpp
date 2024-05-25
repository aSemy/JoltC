#include "JoltC/JoltC_ArraySoftBodySharedSettingsEdge.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsEdge_empty(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
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

long JoltC_ArraySoftBodySharedSettingsEdge_size(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
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

JoltC_SoftBodySharedSettingsEdge_t * JoltC_ArraySoftBodySharedSettingsEdge_at(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
    SoftBodySharedSettingsEdge& resultRef = selfCpp->at(
    inIndex
    );
    SoftBodySharedSettingsEdge * result = &resultRef;
    return reinterpret_cast<JoltC_SoftBodySharedSettingsEdge_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsEdge_push_back(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  const JoltC_SoftBodySharedSettingsEdge_t * inValue,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<SoftBodySharedSettingsEdge *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsEdge_reserve(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsEdge_resize(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsEdge_clear(
  JoltC_ArraySoftBodySharedSettingsEdge_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsEdge * selfCpp = static_cast<ArraySoftBodySharedSettingsEdge *>(self->obj);
    
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

