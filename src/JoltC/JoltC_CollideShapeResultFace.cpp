#include "JoltC/JoltC_CollideShapeResultFace.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_CollideShapeResultFace_empty(
  JoltC_CollideShapeResultFace_t * self
) {
  CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
  bool result = selfCpp->empty();
  return result;
};

long JoltC_CollideShapeResultFace_size(
  JoltC_CollideShapeResultFace_t * self
) {
  CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
  long result = selfCpp->size();
  return result;
};

JoltC_Vec3_t * JoltC_CollideShapeResultFace_at(
  JoltC_CollideShapeResultFace_t * self,
  long inIndex
) {
  CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
  Vec3* resultRef = &selfCpp->at(
    inIndex
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

void JoltC_CollideShapeResultFace_push_back(
  JoltC_CollideShapeResultFace_t * self,
  JoltC_Vec3_t * inValue
) {
  CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
  selfCpp->push_back(
    *reinterpret_cast<Vec3 *>(inValue->obj)
  );
};

void JoltC_CollideShapeResultFace_resize(
  JoltC_CollideShapeResultFace_t * self,
  unsigned long inSize
) {
  CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
  selfCpp->resize(
    inSize
  );
};

void JoltC_CollideShapeResultFace_clear(
  JoltC_CollideShapeResultFace_t * self
) {
  CollideShapeResultFace * selfCpp = static_cast<CollideShapeResultFace *>(self->obj);
  selfCpp->clear();
};

//endregion

#ifdef __cplusplus
}
#endif

