#include "JoltC/JoltC_Float3.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Float3_t * JoltC_Float3_new(
  float inX,
  float inY,
  float inZ,
  char** outErrMsg
) {
  try {
    JoltC_Float3_t * cInstance = new JoltC_Float3_t();
    Float3 * cppInstance = new Float3(
      inX,
      inY,
      inZ
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

bool JoltC_Float3_Equals(
  JoltC_Float3_t * self,
  const JoltC_Float3_t * inV,
  char** outErrMsg
) {
  try {
    Float3 * selfCpp = static_cast<Float3 *>(self->obj);
    bool result = selfCpp->operator==(
    *reinterpret_cast<Float3 *>(inV->obj)
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

bool JoltC_Float3_NotEquals(
  JoltC_Float3_t * self,
  const JoltC_Float3_t * inV,
  char** outErrMsg
) {
  try {
    Float3 * selfCpp = static_cast<Float3 *>(self->obj);
    bool result = selfCpp->operator!=(
    *reinterpret_cast<Float3 *>(inV->obj)
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

//region properties

float JoltC_Float3_x_Get(
  JoltC_Float3_t * self,
  char** outErrMsg
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  float result = selfCpp->x;
  return result;
};

void JoltC_Float3_x_Set(
  JoltC_Float3_t * self,
  float x,
  char** outErrMsg
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  selfCpp->x = x;
};

float JoltC_Float3_y_Get(
  JoltC_Float3_t * self,
  char** outErrMsg
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  float result = selfCpp->y;
  return result;
};

void JoltC_Float3_y_Set(
  JoltC_Float3_t * self,
  float y,
  char** outErrMsg
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  selfCpp->y = y;
};

float JoltC_Float3_z_Get(
  JoltC_Float3_t * self,
  char** outErrMsg
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  float result = selfCpp->z;
  return result;
};

void JoltC_Float3_z_Set(
  JoltC_Float3_t * self,
  float z,
  char** outErrMsg
) {
  Float3 * selfCpp = static_cast<Float3 *>(self->obj);
  selfCpp->z = z;
};

//endregion properties

#ifdef __cplusplus
}
#endif

