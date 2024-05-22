#include "JoltC/JPC_SoftBodyManifold.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JPC_ArraySoftBodyVertex_t * JPC_SoftBodyManifold_GetVertices(
  JPC_SoftBodyManifold_t * self
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  const ArraySoftBodyVertex& resultRef = selfCpp->GetVertices();
  const ArraySoftBodyVertex * result = &resultRef;
  return reinterpret_cast<const JPC_ArraySoftBodyVertex_t *>(result);
};

bool JPC_SoftBodyManifold_HasContact(
  JPC_SoftBodyManifold_t * self,
  const JPC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  bool result = selfCpp->HasContact(
  *reinterpret_cast<SoftBodyVertex *>(inVertex->obj)
  );
  return result;
};

JPC_Vec3_t * JPC_SoftBodyManifold_GetLocalContactPoint(
  JPC_SoftBodyManifold_t * self,
  const JPC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  Vec3 resultValue = selfCpp->GetLocalContactPoint(
  *reinterpret_cast<SoftBodyVertex *>(inVertex->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_SoftBodyManifold_GetContactNormal(
  JPC_SoftBodyManifold_t * self,
  const JPC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  Vec3 resultValue = selfCpp->GetContactNormal(
  *reinterpret_cast<SoftBodyVertex *>(inVertex->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_BodyID_t * JPC_SoftBodyManifold_GetContactBodyID(
  JPC_SoftBodyManifold_t * self,
  const JPC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  BodyID resultValue = selfCpp->GetContactBodyID(
  *reinterpret_cast<SoftBodyVertex *>(inVertex->obj)
  );
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JPC_BodyID_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

