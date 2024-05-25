#include "JoltC/JPC_ArrayVec3.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_ArrayVec3_empty(
  JPC_ArrayVec3_t * self
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_ArrayVec3_size(
  JPC_ArrayVec3_t * self
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_Vec3_t * JPC_ArrayVec3_at(
  JPC_ArrayVec3_t * self,
  long inIndex
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  Vec3& resultRef = selfCpp->at(
  inIndex
  );
  Vec3 * result = &resultRef;
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_ArrayVec3_push_back(
  JPC_ArrayVec3_t * self,
  const JPC_Vec3_t * inValue
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<Vec3 *>(inValue->obj)
  );
};

void JPC_ArrayVec3_reserve(
  JPC_ArrayVec3_t * self,
  unsigned long inSize
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  
  selfCpp->reserve(
  inSize
  );
};

void JPC_ArrayVec3_resize(
  JPC_ArrayVec3_t * self,
  unsigned long inSize
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_ArrayVec3_clear(
  JPC_ArrayVec3_t * self
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  
  selfCpp->clear();
};

JPC_Vec3MemRef_t * JPC_ArrayVec3_data(
  JPC_ArrayVec3_t * self
) {
  ArrayVec3 * selfCpp = static_cast<ArrayVec3 *>(self->obj);
  Vec3MemRef * result = selfCpp->data();
  return reinterpret_cast<JPC_Vec3MemRef_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

