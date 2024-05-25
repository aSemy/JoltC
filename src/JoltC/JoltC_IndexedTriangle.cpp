#include "JoltC/JPC_IndexedTriangle.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_IndexedTriangle_t * JPC_IndexedTriangle_new_0() {
  JPC_IndexedTriangle_t * cInstance = new JPC_IndexedTriangle_t();
  IndexedTriangle * cppInstance = new IndexedTriangle();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_IndexedTriangle_t * JPC_IndexedTriangle_new_1(
  unsigned long inI1,
  unsigned long inI2,
  unsigned long inI3,
  unsigned long inMaterialIndex
) {
  JPC_IndexedTriangle_t * cInstance = new JPC_IndexedTriangle_t();
  IndexedTriangle * cppInstance = new IndexedTriangle(
    inI1,
    inI2,
    inI3,
    inMaterialIndex
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

size_t JPC_IndexedTriangle_mIdx_Get(
  JPC_IndexedTriangle_t * self,
  unsigned long * outValue
) {
  IndexedTriangle * selfCpp = static_cast<IndexedTriangle *>(self->obj);
  size_t resultSize = std::size(selfCpp->mIdx);
  // TODO get result array...
  return resultSize;
};

void JPC_IndexedTriangle_mIdx_Set(
  JPC_IndexedTriangle_t * self,
  unsigned long * mIdx,
  size_t mIdxSize
) {
  IndexedTriangle * selfCpp = static_cast<IndexedTriangle *>(self->obj);
  for (size_t i = 0; i < mIdxSize; i++) {
    selfCpp->mIdx[i] = mIdx[i];
  };
};

unsigned long JPC_IndexedTriangle_mMaterialIndex_Get(
  JPC_IndexedTriangle_t * self
) {
  IndexedTriangle * selfCpp = static_cast<IndexedTriangle *>(self->obj);
  unsigned long result = selfCpp->mMaterialIndex;
  return result;
};

void JPC_IndexedTriangle_mMaterialIndex_Set(
  JPC_IndexedTriangle_t * self,
  unsigned long mMaterialIndex
) {
  IndexedTriangle * selfCpp = static_cast<IndexedTriangle *>(self->obj);
  selfCpp->mMaterialIndex = mMaterialIndex;
};

//endregion properties

#ifdef __cplusplus
}
#endif

