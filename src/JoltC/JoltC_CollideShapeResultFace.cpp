#include "JoltC/JoltC_CollideShapeResultFace.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_CollideShapeResultFace_empty(
  JoltC_CollideShapeResultFace_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
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

long JoltC_CollideShapeResultFace_size(
  JoltC_CollideShapeResultFace_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
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

JoltC_Vec3_t * JoltC_CollideShapeResultFace_at(
  JoltC_CollideShapeResultFace_t * self,
  long inIndex,
  char** outErrMsg
) {
  try {
    CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
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

void JoltC_CollideShapeResultFace_push_back(
  JoltC_CollideShapeResultFace_t * self,
  const JoltC_Vec3_t * inValue,
  char** outErrMsg
) {
  try {
    CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
    
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

void JoltC_CollideShapeResultFace_resize(
  JoltC_CollideShapeResultFace_t * self,
  unsigned long inSize,
  char** outErrMsg
) {
  try {
    CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
    
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

void JoltC_CollideShapeResultFace_clear(
  JoltC_CollideShapeResultFace_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
    
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

