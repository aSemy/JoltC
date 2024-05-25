#include "JoltC/JoltC_Triangle.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Triangle_t * JoltC_Triangle_new_0(
  char** outErrMsg
) {
  try {
    JoltC_Triangle_t * cInstance = new JoltC_Triangle_t();
    Triangle * cppInstance = new Triangle();
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

JoltC_Triangle_t * JoltC_Triangle_new_1(
  const JoltC_Vec3_t * inV1,
  const JoltC_Vec3_t * inV2,
  const JoltC_Vec3_t * inV3,
  char** outErrMsg
) {
  try {
    JoltC_Triangle_t * cInstance = new JoltC_Triangle_t();
    Triangle * cppInstance = new Triangle(
      *reinterpret_cast<Vec3 *>(inV1->obj),
      *reinterpret_cast<Vec3 *>(inV2->obj),
      *reinterpret_cast<Vec3 *>(inV3->obj)
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

//region properties

size_t JoltC_Triangle_mV_Get(
  JoltC_Triangle_t * self,
  JoltC_Float3_t * * outValue,
  char** outErrMsg
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  size_t resultSize = std::size(selfCpp->mV);
  // TODO get result array...
  return resultSize;
};

void JoltC_Triangle_mV_Set(
  JoltC_Triangle_t * self,
  JoltC_Float3_t * * mV,
  size_t mVSize,
  char** outErrMsg
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  for (size_t i = 0; i < mVSize; i++) {
    selfCpp->mV[i] = *(reinterpret_cast<Float3 *>(mV[i]->obj));
  };
};

unsigned long JoltC_Triangle_mMaterialIndex_Get(
  JoltC_Triangle_t * self,
  char** outErrMsg
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  unsigned long result = selfCpp->mMaterialIndex;
  return result;
};

void JoltC_Triangle_mMaterialIndex_Set(
  JoltC_Triangle_t * self,
  unsigned long mMaterialIndex,
  char** outErrMsg
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  selfCpp->mMaterialIndex = mMaterialIndex;
};

//endregion properties

#ifdef __cplusplus
}
#endif

