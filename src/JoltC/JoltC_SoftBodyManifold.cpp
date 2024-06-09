#include "JoltC/JoltC_SoftBodyManifold.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_ArraySoftBodyVertex_t * JoltC_SoftBodyManifold_GetVertices(
  JoltC_SoftBodyManifold_t * self
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  const ArraySoftBodyVertex* resultRef = &selfCpp->GetVertices();
  JoltC_ArraySoftBodyVertex_t* result = new JoltC_ArraySoftBodyVertex_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

bool JoltC_SoftBodyManifold_HasContact(
  JoltC_SoftBodyManifold_t * self,
  JoltC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  const SoftBodyVertex * inVertexCpp = static_cast<const SoftBodyVertex *>(inVertex->obj);
  return selfCpp->HasContact(
    *inVertexCpp
  );
}

JoltC_Vec3_t * JoltC_SoftBodyManifold_GetLocalContactPoint(
  JoltC_SoftBodyManifold_t * self,
  JoltC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  const SoftBodyVertex * inVertexCpp = static_cast<const SoftBodyVertex *>(inVertex->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetLocalContactPoint(
    *inVertexCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_SoftBodyManifold_GetContactNormal(
  JoltC_SoftBodyManifold_t * self,
  JoltC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  const SoftBodyVertex * inVertexCpp = static_cast<const SoftBodyVertex *>(inVertex->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetContactNormal(
    *inVertexCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_BodyID_t * JoltC_SoftBodyManifold_GetContactBodyID(
  JoltC_SoftBodyManifold_t * self,
  JoltC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  const SoftBodyVertex * inVertexCpp = static_cast<const SoftBodyVertex *>(inVertex->obj);
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->GetContactBodyID(
    *inVertexCpp
  );
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

#ifdef __cplusplus
}
#endif

