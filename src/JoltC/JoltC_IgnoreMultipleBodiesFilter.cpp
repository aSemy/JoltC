#include "JoltC/JoltC_IgnoreMultipleBodiesFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_IgnoreMultipleBodiesFilter_t * JoltC_IgnoreMultipleBodiesFilter_new(
  char** outErrMsg
) {
  try {
    JoltC_IgnoreMultipleBodiesFilter_t * cInstance = new JoltC_IgnoreMultipleBodiesFilter_t();
    IgnoreMultipleBodiesFilter * cppInstance = new IgnoreMultipleBodiesFilter();
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

void JoltC_IgnoreMultipleBodiesFilter_Clear(
  JoltC_IgnoreMultipleBodiesFilter_t * self,
  char** outErrMsg
) {
  try {
    IgnoreMultipleBodiesFilter * selfCpp = static_cast<IgnoreMultipleBodiesFilter *>(self->obj);
    
    selfCpp->Clear();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_IgnoreMultipleBodiesFilter_Reserve(
  JoltC_IgnoreMultipleBodiesFilter_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    IgnoreMultipleBodiesFilter * selfCpp = static_cast<IgnoreMultipleBodiesFilter *>(self->obj);
    
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

void JoltC_IgnoreMultipleBodiesFilter_IgnoreBody(
  JoltC_IgnoreMultipleBodiesFilter_t * self,
  const JoltC_BodyID_t * inBodyID,
  char** outErrMsg
) {
  try {
    IgnoreMultipleBodiesFilter * selfCpp = static_cast<IgnoreMultipleBodiesFilter *>(self->obj);
    
    selfCpp->IgnoreBody(
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

//endregion functions

#ifdef __cplusplus
}
#endif

