#include "JoltC/JoltC_Plane.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `Plane` instance.
 */
JoltC_Plane_t * JoltC_Plane_new(
  JoltC_Vec3_t * inNormal,
  float inConstant
) {
  const Vec3 * inNormalCpp = static_cast<const Vec3 *>(inNormal->obj);
  JoltC_Plane_t * cInstance = new JoltC_Plane_t();
  Plane * cppInstance = new Plane(
    *inNormalCpp,
    inConstant
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_Vec3_t * JoltC_Plane_GetNormal(
  JoltC_Plane_t * self
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetNormal();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_Plane_SetNormal(
  JoltC_Plane_t * self,
  JoltC_Vec3_t * inNormal
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  const Vec3 * inNormalCpp = static_cast<const Vec3 *>(inNormal->obj);
  selfCpp->SetNormal(
    *inNormalCpp
  );
}

float JoltC_Plane_GetConstant(
  JoltC_Plane_t * self
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  return selfCpp->GetConstant();
}

void JoltC_Plane_SetConstant(
  JoltC_Plane_t * self,
  float inConstant
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  selfCpp->SetConstant(
    inConstant
  );
}

JoltC_Plane_t * JoltC_Plane_sFromPointAndNormal(
  JoltC_Plane_t * self,
  JoltC_Vec3_t * inPoint,
  JoltC_Vec3_t * inNormal
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  const Vec3 * inPointCpp = static_cast<const Vec3 *>(inPoint->obj);
  const Vec3 * inNormalCpp = static_cast<const Vec3 *>(inNormal->obj);
  Plane * resultPtr = new Plane();
  *resultPtr = selfCpp->sFromPointAndNormal(
    *inPointCpp,
    *inNormalCpp
  );
  JoltC_Plane_t * result = new JoltC_Plane_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Plane_t * JoltC_Plane_sFromPointsCCW(
  JoltC_Plane_t * self,
  JoltC_Vec3_t * inPoint1,
  JoltC_Vec3_t * inPoint2,
  JoltC_Vec3_t * inPoint3
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  const Vec3 * inPoint1Cpp = static_cast<const Vec3 *>(inPoint1->obj);
  const Vec3 * inPoint2Cpp = static_cast<const Vec3 *>(inPoint2->obj);
  const Vec3 * inPoint3Cpp = static_cast<const Vec3 *>(inPoint3->obj);
  Plane * resultPtr = new Plane();
  *resultPtr = selfCpp->sFromPointsCCW(
    *inPoint1Cpp,
    *inPoint2Cpp,
    *inPoint3Cpp
  );
  JoltC_Plane_t * result = new JoltC_Plane_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Plane_t * JoltC_Plane_Offset(
  JoltC_Plane_t * self,
  float inDistance
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  Plane * resultPtr = new Plane();
  *resultPtr = selfCpp->Offset(
    inDistance
  );
  JoltC_Plane_t * result = new JoltC_Plane_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Plane_t * JoltC_Plane_GetTransformed(
  JoltC_Plane_t * self,
  JoltC_Mat44_t * inTransform
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  const Mat44 * inTransformCpp = static_cast<const Mat44 *>(inTransform->obj);
  Plane * resultPtr = new Plane();
  *resultPtr = selfCpp->GetTransformed(
    *inTransformCpp
  );
  JoltC_Plane_t * result = new JoltC_Plane_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_Plane_SignedDistance(
  JoltC_Plane_t * self,
  JoltC_Vec3_t * inPoint
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  const Vec3 * inPointCpp = static_cast<const Vec3 *>(inPoint->obj);
  return selfCpp->SignedDistance(
    *inPointCpp
  );
}

//endregion

#ifdef __cplusplus
}
#endif

