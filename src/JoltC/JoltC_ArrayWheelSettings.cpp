#include "JoltC/JoltC_ArrayWheelSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ArrayWheelSettings_empty(
  JoltC_ArrayWheelSettings_t * self,
  char** outErrMsg
) {
  try {
    ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
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

long JoltC_ArrayWheelSettings_size(
  JoltC_ArrayWheelSettings_t * self,
  char** outErrMsg
) {
  try {
    ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
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

JoltC_WheelSettings_t * JoltC_ArrayWheelSettings_at(
  JoltC_ArrayWheelSettings_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
    WheelSettings * result = selfCpp->at(
    inIndex
    );
    return reinterpret_cast<JoltC_WheelSettings_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayWheelSettings_push_back(
  JoltC_ArrayWheelSettings_t * self,
  JoltC_WheelSettings_t * inValue,
  char** outErrMsg
) {
  try {
    ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
    
    selfCpp->push_back(
    Ref<WheelSettings>(reinterpret_cast<WheelSettings *>(inValue->obj))
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ArrayWheelSettings_resize(
  JoltC_ArrayWheelSettings_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
    
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

void JoltC_ArrayWheelSettings_clear(
  JoltC_ArrayWheelSettings_t * self,
  char** outErrMsg
) {
  try {
    ArrayWheelSettings * selfCpp = static_cast<ArrayWheelSettings *>(self->obj);
    
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

