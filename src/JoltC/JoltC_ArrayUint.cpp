#include "JoltC/JoltC_ArrayUint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayUint_empty(
  JoltC_ArrayUint_t * self,
  char** outErrMsg
) {
  try {
    ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
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

long JoltC_ArrayUint_size(
  JoltC_ArrayUint_t * self,
  char** outErrMsg
) {
  try {
    ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
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

unsigned long JoltC_ArrayUint_at(
  JoltC_ArrayUint_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
    unsigned long result = selfCpp->at(
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

void JoltC_ArrayUint_push_back(
  JoltC_ArrayUint_t * self,
  unsigned long inValue,
  char** outErrMsg
) {
  try {
    ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
    
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

void JoltC_ArrayUint_reserve(
  JoltC_ArrayUint_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
    
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

void JoltC_ArrayUint_resize(
  JoltC_ArrayUint_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
    
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

void JoltC_ArrayUint_clear(
  JoltC_ArrayUint_t * self,
  char** outErrMsg
) {
  try {
    ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
    
    selfCpp->clear();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_UintMemRef_t * JoltC_ArrayUint_data(
  JoltC_ArrayUint_t * self,
  char** outErrMsg
) {
  try {
    ArrayUint * selfCpp = static_cast<ArrayUint *>(self->obj);
    UintMemRef * result = selfCpp->data();
    return reinterpret_cast<JoltC_UintMemRef_t *>(result);
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

