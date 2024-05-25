#include "JoltC/JoltC_ContactPoints.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_ContactPoints_empty(
  JoltC_ContactPoints_t * self,
  char** outErrMsg
) {
  try {
    ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
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

long JoltC_ContactPoints_size(
  JoltC_ContactPoints_t * self,
  char** outErrMsg
) {
  try {
    ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
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

JoltC_Vec3_t * JoltC_ContactPoints_at(
  JoltC_ContactPoints_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
    Vec3& resultRef = selfCpp->at(
    inIndex
    );
    Vec3 * result = &resultRef;
    return reinterpret_cast<JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ContactPoints_push_back(
  JoltC_ContactPoints_t * self,
  const JoltC_Vec3_t * inValue,
  char** outErrMsg
) {
  try {
    ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
    
    selfCpp->push_back(
    *reinterpret_cast<Vec3 *>(inValue->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ContactPoints_resize(
  JoltC_ContactPoints_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
    
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

void JoltC_ContactPoints_clear(
  JoltC_ContactPoints_t * self,
  char** outErrMsg
) {
  try {
    ContactPoints * selfCpp = static_cast<ContactPoints *>(self->obj);
    
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

