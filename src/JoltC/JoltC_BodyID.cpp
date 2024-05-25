#include "JoltC/JoltC_BodyID.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BodyID_t * JoltC_BodyID_new_0(
  char** outErrMsg
) {
  try {
    JoltC_BodyID_t * cInstance = new JoltC_BodyID_t();
    BodyID * cppInstance = new BodyID();
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

JoltC_BodyID_t * JoltC_BodyID_new_1(
  unsigned long inIndexAndSequenceNumber,
  char** outErrMsg
) {
  try {
    JoltC_BodyID_t * cInstance = new JoltC_BodyID_t();
    BodyID * cppInstance = new BodyID(
      inIndexAndSequenceNumber
    );
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

unsigned long JoltC_BodyID_GetIndex(
  JoltC_BodyID_t * self,
  char** outErrMsg
) {
  try {
    BodyID * selfCpp = static_cast<BodyID *>(self->obj);
    unsigned long result = selfCpp->GetIndex();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_BodyID_GetIndexAndSequenceNumber(
  JoltC_BodyID_t * self,
  char** outErrMsg
) {
  try {
    BodyID * selfCpp = static_cast<BodyID *>(self->obj);
    unsigned long result = selfCpp->GetIndexAndSequenceNumber();
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

