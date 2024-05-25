#include "JoltC/JoltC_ArrayUint8.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayUint8_empty(
  JoltC_ArrayUint8_t * self,
  char** outErrMsg
) {
  try {
    ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
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

long JoltC_ArrayUint8_size(
  JoltC_ArrayUint8_t * self,
  char** outErrMsg
) {
  try {
    ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
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

unsigned char JoltC_ArrayUint8_at(
  JoltC_ArrayUint8_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
    unsigned char result = selfCpp->at(
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

void JoltC_ArrayUint8_push_back(
  JoltC_ArrayUint8_t * self,
  unsigned char inValue,
  char** outErrMsg
) {
  try {
    ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
    
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

void JoltC_ArrayUint8_reserve(
  JoltC_ArrayUint8_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
    
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

void JoltC_ArrayUint8_resize(
  JoltC_ArrayUint8_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
    
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

void JoltC_ArrayUint8_clear(
  JoltC_ArrayUint8_t * self,
  char** outErrMsg
) {
  try {
    ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
    
    selfCpp->clear();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Uint8MemRef_t * JoltC_ArrayUint8_data(
  JoltC_ArrayUint8_t * self,
  char** outErrMsg
) {
  try {
    ArrayUint8 * selfCpp = static_cast<ArrayUint8 *>(self->obj);
    Uint8MemRef * result = selfCpp->data();
    return reinterpret_cast<JoltC_Uint8MemRef_t *>(result);
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

