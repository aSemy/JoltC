#include "JoltC/JoltC_ArrayRagdollAdditionalConstraint.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ArrayRagdollAdditionalConstraint_t * JoltC_ArrayRagdollAdditionalConstraint_new(
  char** outErrMsg
) {
  try {
    JoltC_ArrayRagdollAdditionalConstraint_t * cInstance = new JoltC_ArrayRagdollAdditionalConstraint_t();
    ArrayRagdollAdditionalConstraint * cppInstance = new ArrayRagdollAdditionalConstraint();
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

bool JoltC_ArrayRagdollAdditionalConstraint_empty(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  char** outErrMsg
) {
  try {
    ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
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

long JoltC_ArrayRagdollAdditionalConstraint_size(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  char** outErrMsg
) {
  try {
    ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
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

JoltC_RagdollAdditionalConstraint_t * JoltC_ArrayRagdollAdditionalConstraint_at(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
    RagdollAdditionalConstraint& resultRef = selfCpp->at(
    inIndex
    );
    RagdollAdditionalConstraint * result = &resultRef;
    return reinterpret_cast<JoltC_RagdollAdditionalConstraint_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayRagdollAdditionalConstraint_push_back(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  JoltC_RagdollAdditionalConstraint_t * inValue,
  char** outErrMsg
) {
  try {
    ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<RagdollAdditionalConstraint *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayRagdollAdditionalConstraint_reserve(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
    
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

void JoltC_ArrayRagdollAdditionalConstraint_resize(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
    
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

void JoltC_ArrayRagdollAdditionalConstraint_clear(
  JoltC_ArrayRagdollAdditionalConstraint_t * self,
  char** outErrMsg
) {
  try {
    ArrayRagdollAdditionalConstraint * selfCpp = static_cast<ArrayRagdollAdditionalConstraint *>(self->obj);
    
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

