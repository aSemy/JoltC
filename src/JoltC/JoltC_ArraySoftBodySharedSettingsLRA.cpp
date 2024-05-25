#include "JoltC/JoltC_ArraySoftBodySharedSettingsLRA.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsLRA_empty(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
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

long JoltC_ArraySoftBodySharedSettingsLRA_size(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
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

JoltC_SoftBodySharedSettingsLRA_t * JoltC_ArraySoftBodySharedSettingsLRA_at(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
    SoftBodySharedSettingsLRA& resultRef = selfCpp->at(
    inIndex
    );
    SoftBodySharedSettingsLRA * result = &resultRef;
    return reinterpret_cast<JoltC_SoftBodySharedSettingsLRA_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsLRA_push_back(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  const JoltC_SoftBodySharedSettingsLRA_t * inValue,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<SoftBodySharedSettingsLRA *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsLRA_reserve(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsLRA_resize(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsLRA_clear(
  JoltC_ArraySoftBodySharedSettingsLRA_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsLRA * selfCpp = static_cast<ArraySoftBodySharedSettingsLRA *>(self->obj);
    
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

