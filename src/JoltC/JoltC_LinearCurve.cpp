#include "JoltC/JoltC_LinearCurve.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_LinearCurve_t * JoltC_LinearCurve_new(
  char** outErrMsg
) {
  try {
    JoltC_LinearCurve_t * cInstance = new JoltC_LinearCurve_t();
    LinearCurve * cppInstance = new LinearCurve();
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

void JoltC_LinearCurve_Clear(
  JoltC_LinearCurve_t * self,
  char** outErrMsg
) {
  try {
    LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
    
    selfCpp->Clear();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_LinearCurve_Reserve(
  JoltC_LinearCurve_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
    
    selfCpp->Reserve(
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

void JoltC_LinearCurve_AddPoint(
  JoltC_LinearCurve_t * self,
  float inX,
  float inY,
  char** outErrMsg
) {
  try {
    LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
    
    selfCpp->AddPoint(
    inX,
    inY
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_LinearCurve_Sort(
  JoltC_LinearCurve_t * self,
  char** outErrMsg
) {
  try {
    LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
    
    selfCpp->Sort();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_LinearCurve_GetMinX(
  JoltC_LinearCurve_t * self,
  char** outErrMsg
) {
  try {
    LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
    float result = selfCpp->GetMinX();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_LinearCurve_GetMaxX(
  JoltC_LinearCurve_t * self,
  char** outErrMsg
) {
  try {
    LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
    float result = selfCpp->GetMaxX();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_LinearCurve_GetValue(
  JoltC_LinearCurve_t * self,
  float inX,
  char** outErrMsg
) {
  try {
    LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
    float result = selfCpp->GetValue(
    inX
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

//endregion functions

#ifdef __cplusplus
}
#endif

