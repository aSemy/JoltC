#include "JoltC/JoltC_StateRecorderImpl.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_StateRecorderImpl_t * JoltC_StateRecorderImpl_new(
  char** outErrMsg
) {
  try {
    JoltC_StateRecorderImpl_t * cInstance = new JoltC_StateRecorderImpl_t();
    StateRecorderImpl * cppInstance = new StateRecorderImpl();
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

void JoltC_StateRecorderImpl_Clear(
  JoltC_StateRecorderImpl_t * self,
  char** outErrMsg
) {
  try {
    StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
    
    selfCpp->Clear();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_StateRecorderImpl_Rewind(
  JoltC_StateRecorderImpl_t * self,
  char** outErrMsg
) {
  try {
    StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
    
    selfCpp->Rewind();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_StateRecorderImpl_IsEqual(
  JoltC_StateRecorderImpl_t * self,
  JoltC_StateRecorderImpl_t * inReference,
  char** outErrMsg
) {
  try {
    StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
    bool result = selfCpp->IsEqual(
    *reinterpret_cast<StateRecorderImpl *>(inReference->obj)
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

void JoltC_StateRecorderImpl_SetValidating(
  JoltC_StateRecorderImpl_t * self,
  bool inValidating,
  char** outErrMsg
) {
  try {
    StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
    
    selfCpp->SetValidating(
    inValidating
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_StateRecorderImpl_IsValidating(
  JoltC_StateRecorderImpl_t * self,
  char** outErrMsg
) {
  try {
    StateRecorderImpl * selfCpp = static_cast<StateRecorderImpl *>(self->obj);
    bool result = selfCpp->IsValidating();
    return result;
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

