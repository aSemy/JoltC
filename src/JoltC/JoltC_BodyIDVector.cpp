#include "JoltC/JoltC_BodyIDVector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BodyIDVector_t * JoltC_BodyIDVector_new(
  char** outErrMsg
) {
  try {
    JoltC_BodyIDVector_t * cInstance = new JoltC_BodyIDVector_t();
    BodyIDVector * cppInstance = new BodyIDVector();
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

bool JoltC_BodyIDVector_empty(
  JoltC_BodyIDVector_t * self,
  char** outErrMsg
) {
  try {
    BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
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

long JoltC_BodyIDVector_size(
  JoltC_BodyIDVector_t * self,
  char** outErrMsg
) {
  try {
    BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
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

JoltC_BodyID_t * JoltC_BodyIDVector_at(
  JoltC_BodyIDVector_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
    BodyID& resultRef = selfCpp->at(
    inIndex
    );
    BodyID * result = &resultRef;
    return reinterpret_cast<JoltC_BodyID_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_BodyIDVector_push_back(
  JoltC_BodyIDVector_t * self,
  const JoltC_BodyID_t * inBodyID,
  char** outErrMsg
) {
  try {
    BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<BodyID *>(inBodyID->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_BodyIDVector_reserve(
  JoltC_BodyIDVector_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
    
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

void JoltC_BodyIDVector_resize(
  JoltC_BodyIDVector_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
    
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

void JoltC_BodyIDVector_clear(
  JoltC_BodyIDVector_t * self,
  char** outErrMsg
) {
  try {
    BodyIDVector * selfCpp = static_cast<BodyIDVector *>(self->obj);
    
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

