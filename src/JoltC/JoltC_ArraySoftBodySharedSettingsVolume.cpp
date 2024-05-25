#include "JoltC/JoltC_ArraySoftBodySharedSettingsVolume.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsVolume_empty(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
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

long JoltC_ArraySoftBodySharedSettingsVolume_size(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
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

JoltC_SoftBodySharedSettingsVolume_t * JoltC_ArraySoftBodySharedSettingsVolume_at(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
    SoftBodySharedSettingsVolume& resultRef = selfCpp->at(
    inIndex
    );
    SoftBodySharedSettingsVolume * result = &resultRef;
    return reinterpret_cast<JoltC_SoftBodySharedSettingsVolume_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsVolume_push_back(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  const JoltC_SoftBodySharedSettingsVolume_t * inValue,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<SoftBodySharedSettingsVolume *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsVolume_reserve(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsVolume_resize(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsVolume_clear(
  JoltC_ArraySoftBodySharedSettingsVolume_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsVolume * selfCpp = static_cast<ArraySoftBodySharedSettingsVolume *>(self->obj);
    
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

