#include "JoltC/JoltC_ArrayRagdollPart.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ArrayRagdollPart_t * JoltC_ArrayRagdollPart_new(
  char** outErrMsg
) {
  try {
    JoltC_ArrayRagdollPart_t * cInstance = new JoltC_ArrayRagdollPart_t();
    ArrayRagdollPart * cppInstance = new ArrayRagdollPart();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

bool JoltC_ArrayRagdollPart_empty(
  JoltC_ArrayRagdollPart_t * self,
  char** outErrMsg
) {
  try {
    ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
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

long JoltC_ArrayRagdollPart_size(
  JoltC_ArrayRagdollPart_t * self,
  char** outErrMsg
) {
  try {
    ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
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

JoltC_RagdollPart_t * JoltC_ArrayRagdollPart_at(
  JoltC_ArrayRagdollPart_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
    RagdollPart& resultRef = selfCpp->at(
    inIndex
    );
    RagdollPart * result = &resultRef;
    return reinterpret_cast<JoltC_RagdollPart_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayRagdollPart_push_back(
  JoltC_ArrayRagdollPart_t * self,
  JoltC_RagdollPart_t * inValue,
  char** outErrMsg
) {
  try {
    ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<RagdollPart *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayRagdollPart_reserve(
  JoltC_ArrayRagdollPart_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
    
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

void JoltC_ArrayRagdollPart_resize(
  JoltC_ArrayRagdollPart_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
    
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

void JoltC_ArrayRagdollPart_clear(
  JoltC_ArrayRagdollPart_t * self,
  char** outErrMsg
) {
  try {
    ArrayRagdollPart * selfCpp = static_cast<ArrayRagdollPart *>(self->obj);
    
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

