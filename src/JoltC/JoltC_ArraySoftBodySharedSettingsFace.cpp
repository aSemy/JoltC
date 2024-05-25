#include "JoltC/JoltC_ArraySoftBodySharedSettingsFace.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArraySoftBodySharedSettingsFace_empty(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
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

long JoltC_ArraySoftBodySharedSettingsFace_size(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
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

JoltC_SoftBodySharedSettingsFace_t * JoltC_ArraySoftBodySharedSettingsFace_at(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
    SoftBodySharedSettingsFace& resultRef = selfCpp->at(
    inIndex
    );
    SoftBodySharedSettingsFace * result = &resultRef;
    return reinterpret_cast<JoltC_SoftBodySharedSettingsFace_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsFace_push_back(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  const JoltC_SoftBodySharedSettingsFace_t * inValue,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<SoftBodySharedSettingsFace *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArraySoftBodySharedSettingsFace_reserve(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsFace_resize(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
    
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

void JoltC_ArraySoftBodySharedSettingsFace_clear(
  JoltC_ArraySoftBodySharedSettingsFace_t * self,
  char** outErrMsg
) {
  try {
    ArraySoftBodySharedSettingsFace * selfCpp = static_cast<ArraySoftBodySharedSettingsFace *>(self->obj);
    
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

