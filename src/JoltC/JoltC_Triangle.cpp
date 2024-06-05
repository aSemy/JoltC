#include "JoltC/JoltC_Triangle.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Triangle_t * JoltC_Triangle_new_0() {
  JoltC_Triangle_t * cInstance = new JoltC_Triangle_t();
  Triangle * cppInstance = new Triangle();
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_Triangle_t * JoltC_Triangle_new_1(
  JoltC_Vec3_t * inV1,
  JoltC_Vec3_t * inV2,
  JoltC_Vec3_t * inV3
) {
  JoltC_Triangle_t * cInstance = new JoltC_Triangle_t();
  Triangle * cppInstance = new Triangle(
    *reinterpret_cast<Vec3 *>(inV1->obj),
    *reinterpret_cast<Vec3 *>(inV2->obj),
    *reinterpret_cast<Vec3 *>(inV3->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

size_t JoltC_Triangle_mV_Get(
  JoltC_Triangle_t * self,
  JoltC_Float3_t * * outValue
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  size_t resultSize = std::size(selfCpp->mV);
  // TODO get result array...
  return resultSize;
};

void JoltC_Triangle_mV_Set(
  JoltC_Triangle_t * self,
  JoltC_Float3_t * * mV,
  size_t mVSize
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  for (size_t i = 0; i < mVSize; i++) {
    selfCpp->mV[i] = *(reinterpret_cast<Float3 *>(mV[i]->obj));
  };
};

unsigned long JoltC_Triangle_mMaterialIndex_Get(
  JoltC_Triangle_t * self
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  unsigned long result = selfCpp->mMaterialIndex;
  return result;
};

void JoltC_Triangle_mMaterialIndex_Set(
  JoltC_Triangle_t * self,
  unsigned long mMaterialIndex
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  selfCpp->mMaterialIndex = mMaterialIndex;
};

//endregion

#ifdef __cplusplus
}
#endif

