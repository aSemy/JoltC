#include "JoltC/JPC_Plane.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Plane_t * JPC_Plane_new(
  const JPC_Vec3_t * inNormal,
  float inConstant
) {
  JPC_Plane_t * cInstance = new JPC_Plane_t();
  Plane * cppInstance = new Plane(
    *reinterpret_cast<Vec3 *>(inNormal->obj),
    inConstant
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Vec3_t * JPC_Plane_GetNormal(
  JPC_Plane_t * self
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  Vec3 resultValue = selfCpp->GetNormal();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_Plane_SetNormal(
  JPC_Plane_t * self,
  const JPC_Vec3_t * inNormal
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  
  selfCpp->SetNormal(
  *reinterpret_cast<Vec3 *>(inNormal->obj)
  );
};

float JPC_Plane_GetConstant(
  JPC_Plane_t * self
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  float result = selfCpp->GetConstant();
  return result;
};

void JPC_Plane_SetConstant(
  JPC_Plane_t * self,
  float inConstant
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  
  selfCpp->SetConstant(
  inConstant
  );
};

const JPC_Plane_t * JPC_Plane_sFromPointAndNormal(
  JPC_Plane_t * self,
  const JPC_Vec3_t * inPoint,
  const JPC_Vec3_t * inNormal
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  const Plane resultValue = selfCpp->sFromPointAndNormal(
  *reinterpret_cast<Vec3 *>(inPoint->obj),
  *reinterpret_cast<Vec3 *>(inNormal->obj)
  );
  const Plane* result = new Plane(resultValue);
  return reinterpret_cast<const JPC_Plane_t *>(result);
};

const JPC_Plane_t * JPC_Plane_sFromPointsCCW(
  JPC_Plane_t * self,
  const JPC_Vec3_t * inPoint1,
  const JPC_Vec3_t * inPoint2,
  const JPC_Vec3_t * inPoint3
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  const Plane resultValue = selfCpp->sFromPointsCCW(
  *reinterpret_cast<Vec3 *>(inPoint1->obj),
  *reinterpret_cast<Vec3 *>(inPoint2->obj),
  *reinterpret_cast<Vec3 *>(inPoint3->obj)
  );
  const Plane* result = new Plane(resultValue);
  return reinterpret_cast<const JPC_Plane_t *>(result);
};

const JPC_Plane_t * JPC_Plane_Offset(
  JPC_Plane_t * self,
  float inDistance
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  const Plane resultValue = selfCpp->Offset(
  inDistance
  );
  const Plane* result = new Plane(resultValue);
  return reinterpret_cast<const JPC_Plane_t *>(result);
};

const JPC_Plane_t * JPC_Plane_GetTransformed(
  JPC_Plane_t * self,
  const JPC_Mat44_t * inTransform
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  const Plane resultValue = selfCpp->GetTransformed(
  *reinterpret_cast<Mat44 *>(inTransform->obj)
  );
  const Plane* result = new Plane(resultValue);
  return reinterpret_cast<const JPC_Plane_t *>(result);
};

float JPC_Plane_SignedDistance(
  JPC_Plane_t * self,
  const JPC_Vec3_t * inPoint
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  float result = selfCpp->SignedDistance(
  *reinterpret_cast<Vec3 *>(inPoint->obj)
  );
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

