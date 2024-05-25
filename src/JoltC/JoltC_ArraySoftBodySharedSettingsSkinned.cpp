#include "JoltC/JoltC_ArraySoftBodySharedSettingsSkinned.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsSkinned_empty(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
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

long JoltC_ArraySoftBodySharedSettingsSkinned_size(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
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

JoltC_SoftBodySharedSettingsSkinned_t * JoltC_ArraySoftBodySharedSettingsSkinned_at(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
    SoftBodySharedSettingsSkinned& resultRef = selfCpp->at(
    inIndex
    );
    SoftBodySharedSettingsSkinned * result = &resultRef;
    return reinterpret_cast<JoltC_SoftBodySharedSettingsSkinned_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsSkinned_push_back(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  const JoltC_SoftBodySharedSettingsSkinned_t * inValue,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<SoftBodySharedSettingsSkinned *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsSkinned_reserve(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsSkinned_resize(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsSkinned_clear(
  JoltC_ArraySoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsSkinned * selfCpp = static_cast<ArraySoftBodySharedSettingsSkinned *>(self->obj);
    
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

