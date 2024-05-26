#include "JoltC/JoltC_SoftBodyManifold.h"
#include "JoltC/JoltJS.h"
#include <exception>

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
};

bool JoltC_SoftBodyManifold_HasContact(
  JoltC_SoftBodyManifold_t * self,
  JoltC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  bool result = selfCpp->HasContact(
    *reinterpret_cast<SoftBodyVertex *>(inVertex->obj)
  );
  return result;
};

JoltC_Vec3_t * JoltC_SoftBodyManifold_GetLocalContactPoint(
  JoltC_SoftBodyManifold_t * self,
  JoltC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  static Vec3 resultValue = selfCpp->GetLocalContactPoint(
    *reinterpret_cast<SoftBodyVertex *>(inVertex->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_SoftBodyManifold_GetContactNormal(
  JoltC_SoftBodyManifold_t * self,
  JoltC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  static Vec3 resultValue = selfCpp->GetContactNormal(
    *reinterpret_cast<SoftBodyVertex *>(inVertex->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_BodyID_t * JoltC_SoftBodyManifold_GetContactBodyID(
  JoltC_SoftBodyManifold_t * self,
  JoltC_SoftBodyVertex_t * inVertex
) {
  SoftBodyManifold * selfCpp = static_cast<SoftBodyManifold *>(self->obj);
  static BodyID resultValue = selfCpp->GetContactBodyID(
    *reinterpret_cast<SoftBodyVertex *>(inVertex->obj)
  );
  JoltC_BodyID_t* result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

