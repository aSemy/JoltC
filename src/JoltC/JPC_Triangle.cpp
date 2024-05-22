#include "JoltC/JPC_Triangle.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Triangle_t * JPC_Triangle_new_0() {
  JPC_Triangle_t * cInstance = new JPC_Triangle_t();
  Triangle * cppInstance = new Triangle();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_Triangle_t * JPC_Triangle_new_1(
  const JPC_Vec3_t * inV1,
  const JPC_Vec3_t * inV2,
  const JPC_Vec3_t * inV3
) {
  JPC_Triangle_t * cInstance = new JPC_Triangle_t();
  Triangle * cppInstance = new Triangle(
    *reinterpret_cast<Vec3 *>(inV1->obj),
    *reinterpret_cast<Vec3 *>(inV2->obj),
    *reinterpret_cast<Vec3 *>(inV3->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

size_t JPC_Triangle_mV_Get(
  JPC_Triangle_t * self,
  JPC_Float3_t * * outValue
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  size_t resultSize = std::size(selfCpp->mV);
  // TODO get result array...
  return resultSize;
};

void JPC_Triangle_mV_Set(
  JPC_Triangle_t * self,
  JPC_Float3_t * * mV,
  size_t mVSize
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  for (size_t i = 0; i < mVSize; i++) {
    selfCpp->mV[i] = *(reinterpret_cast<Float3 *>(mV[i]->obj));
  };
};

unsigned long JPC_Triangle_mMaterialIndex_Get(
  JPC_Triangle_t * self
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  unsigned long result = selfCpp->mMaterialIndex;
  return result;
};

void JPC_Triangle_mMaterialIndex_Set(
  JPC_Triangle_t * self,
  unsigned long mMaterialIndex
) {
  Triangle * selfCpp = static_cast<Triangle *>(self->obj);
  selfCpp->mMaterialIndex = mMaterialIndex;
};

//endregion properties

#ifdef __cplusplus
}
#endif

