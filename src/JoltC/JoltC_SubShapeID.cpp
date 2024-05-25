#include "JoltC/JoltC_SubShapeID.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SubShapeID_t * JoltC_SubShapeID_new(
  char** outErrMsg
) {
  try {
    JoltC_SubShapeID_t * cInstance = new JoltC_SubShapeID_t();
    SubShapeID * cppInstance = new SubShapeID();
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

const long JoltC_SubShapeID_GetValue(
  JoltC_SubShapeID_t * self,
  char** outErrMsg
) {
  try {
    SubShapeID * selfCpp = static_cast<SubShapeID *>(self->obj);
    const long result = selfCpp->GetValue();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_SubShapeID_SetValue(
  JoltC_SubShapeID_t * self,
  long inValue,
  char** outErrMsg
) {
  try {
    SubShapeID * selfCpp = static_cast<SubShapeID *>(self->obj);
    
    selfCpp->SetValue(
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

//endregion functions

#ifdef __cplusplus
}
#endif

