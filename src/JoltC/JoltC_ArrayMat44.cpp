#include "JoltC/JPC_ArrayMat44.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayMat44_empty(
  JPC_ArrayMat44_t * self
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayMat44_size(
  JPC_ArrayMat44_t * self
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_Mat44_t * JPC_ArrayMat44_at(
  JPC_ArrayMat44_t * self,
  long inIndex
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  Mat44& resultRef = selfCpp->at(
  inIndex
  );
  Mat44 * result = &resultRef;
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

void JPC_ArrayMat44_push_back(
  JPC_ArrayMat44_t * self,
  const JPC_Mat44_t * inValue
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<Mat44 *>(inValue->obj)
  );
};

void JPC_ArrayMat44_reserve(
  JPC_ArrayMat44_t * self,
  unsigned long inSize
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArrayMat44_resize(
  JPC_ArrayMat44_t * self,
  unsigned long inSize
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayMat44_clear(
  JPC_ArrayMat44_t * self
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  
  selfCpp->clear();
};

JPC_Mat44MemRef_t * JPC_ArrayMat44_data(
  JPC_ArrayMat44_t * self
) {
  ArrayMat44 * selfCpp = static_cast<ArrayMat44 *>(self->obj);
  Mat44MemRef * result = selfCpp->data();
  return reinterpret_cast<JPC_Mat44MemRef_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

