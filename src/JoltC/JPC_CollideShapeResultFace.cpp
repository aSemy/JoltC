#include "JoltC/JPC_CollideShapeResultFace.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JPC_CollideShapeResultFace_empty(
  JPC_CollideShapeResultFace_t * self
) {
  CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JPC_CollideShapeResultFace_size(
  JPC_CollideShapeResultFace_t * self
) {
  CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JPC_Vec3_t * JPC_CollideShapeResultFace_at(
  JPC_CollideShapeResultFace_t * self,
  long inIndex
) {
  CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
  Vec3& resultRef = selfCpp->at(
  inIndex
  );
  Vec3 * result = &resultRef;
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CollideShapeResultFace_push_back(
  JPC_CollideShapeResultFace_t * self,
  const JPC_Vec3_t * inValue
) {
  CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
  
  selfCpp->push_back(
  *reinterpret_cast<Vec3 *>(inValue->obj)
  );
};

void JPC_CollideShapeResultFace_resize(
  JPC_CollideShapeResultFace_t * self,
  unsigned long inSize
) {
  CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
  
  selfCpp->resize(
  inSize
  );
};

void JPC_CollideShapeResultFace_clear(
  JPC_CollideShapeResultFace_t * self
) {
  CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
  
  selfCpp->clear();
};

//endregion functions

#ifdef __cplusplus
}
#endif

