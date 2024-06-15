#include "JoltC/JoltC_Triangle.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `Triangle` instance.
 */
JoltC_Triangle_t * JoltC_Triangle_new_0() {
  JoltC_Triangle_t * cInstance = new JoltC_Triangle_t();
  Triangle * cppInstance = new Triangle();
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `Triangle` instance.
 */
JoltC_Triangle_t * JoltC_Triangle_new_1(
  JoltC_Vec3_t * inV1,
  JoltC_Vec3_t * inV2,
  JoltC_Vec3_t * inV3
) {
  const Vec3 * inV1Cpp = static_cast<const Vec3 *>(inV1->obj);
  const Vec3 * inV2Cpp = static_cast<const Vec3 *>(inV2->obj);
  const Vec3 * inV3Cpp = static_cast<const Vec3 *>(inV3->obj);
  JoltC_Triangle_t * cInstance = new JoltC_Triangle_t();
  Triangle * cppInstance = new Triangle(
    *inV1Cpp,
    *inV2Cpp,
    *inV3Cpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_Triangle_destroy(
  JoltC_Triangle_t * self
){
  if (self == NULL) return;
  delete static_cast<Triangle *>(self->obj);
  free(self);
}

//endregion
//region properties

size_t JoltC_Triangle_mV_Get(
  JoltC_Triangle_t * self,
  JoltC_Float3_t * * outValue
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  size_t resultSize = std::size(selfCpp->mV);
  // TODO get result array...
}

void JoltC_Triangle_mV_Set(
  JoltC_Triangle_t * self,
  JoltC_Float3_t * * mV,
  size_t mVSize
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  for (size_t i = 0; i < mVSize; i++) {
    selfCpp->mV[i] = *(static_cast<Float3 *>(mV[i]->obj));
  };
}

unsigned long JoltC_Triangle_mMaterialIndex_Get(
  JoltC_Triangle_t * self
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  return selfCpp->mMaterialIndex;
}

void JoltC_Triangle_mMaterialIndex_Set(
  JoltC_Triangle_t * self,
  unsigned long mMaterialIndex
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  selfCpp->mMaterialIndex = mMaterialIndex;
}

//endregion


#ifdef __cplusplus
}
#endif
