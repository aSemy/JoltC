#include "JoltC/JoltC_ArrayFloat.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayFloat_empty(
  JoltC_ArrayFloat_t * self,
  char** outErrMsg
) {
  try {
    ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
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

long JoltC_ArrayFloat_size(
  JoltC_ArrayFloat_t * self,
  char** outErrMsg
) {
  try {
    ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
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

float JoltC_ArrayFloat_at(
  JoltC_ArrayFloat_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
    float result = selfCpp->at(
    inIndex
    );
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayFloat_push_back(
  JoltC_ArrayFloat_t * self,
  float inValue,
  char** outErrMsg
) {
  try {
    ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
    
    selfCpp->push_back(
    inValue
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayFloat_reserve(
  JoltC_ArrayFloat_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
    
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

void JoltC_ArrayFloat_resize(
  JoltC_ArrayFloat_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
    
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

void JoltC_ArrayFloat_clear(
  JoltC_ArrayFloat_t * self,
  char** outErrMsg
) {
  try {
    ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
    
    selfCpp->clear();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_FloatMemRef_t * JoltC_ArrayFloat_data(
  JoltC_ArrayFloat_t * self,
  char** outErrMsg
) {
  try {
    ArrayFloat * selfCpp = static_cast<ArrayFloat *>(self->obj);
    FloatMemRef * result = selfCpp->data();
    return reinterpret_cast<JoltC_FloatMemRef_t *>(result);
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

