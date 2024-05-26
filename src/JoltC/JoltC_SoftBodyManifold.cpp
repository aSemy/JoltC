#include "JoltC/JoltC_SoftBodyManifold.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JoltC_ArraySoftBodyVertex_t * JoltC_SoftBodyManifold_GetVertices(
  JoltC_SoftBodyManifold_t * self
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  const ArraySoftBodyVertex& resultRef = selfCpp->GetVertices();
  const ArraySoftBodyVertex * result = &resultRef;
  return reinterpret_cast<const JoltC_ArraySoftBodyVertex_t *>(result);
};

bool JoltC_SoftBodyManifold_HasContact(
  JoltC_SoftBodyManifold_t * self,
  const JoltC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  bool result = selfCpp->HasContact(
  *reinterpret_cast<SoftBodyVertex *>(inVertex->obj)
  );
  return result;
};

JoltC_Vec3_t * JoltC_SoftBodyManifold_GetLocalContactPoint(
  JoltC_SoftBodyManifold_t * self,
  const JoltC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  Vec3 resultValue = selfCpp->GetLocalContactPoint(
  *reinterpret_cast<SoftBodyVertex *>(inVertex->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_SoftBodyManifold_GetContactNormal(
  JoltC_SoftBodyManifold_t * self,
  const JoltC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactNormal(
  *reinterpret_cast<SoftBodyVertex *>(inVertex->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_BodyID_t * JoltC_SoftBodyManifold_GetContactBodyID(
  JoltC_SoftBodyManifold_t * self,
  const JoltC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  BodyID resultValue = selfCpp->GetContactBodyID(
  *reinterpret_cast<SoftBodyVertex *>(inVertex->obj)
  );
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JoltC_BodyID_t *>(result);
};

//endregion

#ifdef __cplusplus
}
#endif

