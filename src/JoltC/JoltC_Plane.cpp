#include "JoltC/JoltC_Plane.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Plane_t * JoltC_Plane_new(
  JoltC_Vec3_t * inNormal,
  float inConstant
) {
  JoltC_Plane_t * cInstance = new JoltC_Plane_t();
  Plane * cppInstance = new Plane(
    *reinterpret_cast<Vec3 *>(inNormal->obj),
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
  static Vec3 resultValue = selfCpp->GetNormal();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_Plane_SetNormal(
  JoltC_Plane_t * self,
  JoltC_Vec3_t * inNormal
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  
  selfCpp->SetNormal(
    *reinterpret_cast<Vec3 *>(inNormal->obj)
  );
};

float JoltC_Plane_GetConstant(
  JoltC_Plane_t * self
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  float result = selfCpp->GetConstant();
  return result;
};

void JoltC_Plane_SetConstant(
  JoltC_Plane_t * self,
  float inConstant
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  
  selfCpp->SetConstant(
    inConstant
  );
};

JoltC_Plane_t * JoltC_Plane_sFromPointAndNormal(
  JoltC_Plane_t * self,
  JoltC_Vec3_t * inPoint,
  JoltC_Vec3_t * inNormal
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  static Plane resultValue = selfCpp->sFromPointAndNormal(
    *reinterpret_cast<Vec3 *>(inPoint->obj),
    *reinterpret_cast<Vec3 *>(inNormal->obj)
  );
  JoltC_Plane_t* result = new JoltC_Plane_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Plane_t * JoltC_Plane_sFromPointsCCW(
  JoltC_Plane_t * self,
  JoltC_Vec3_t * inPoint1,
  JoltC_Vec3_t * inPoint2,
  JoltC_Vec3_t * inPoint3
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  static Plane resultValue = selfCpp->sFromPointsCCW(
    *reinterpret_cast<Vec3 *>(inPoint1->obj),
    *reinterpret_cast<Vec3 *>(inPoint2->obj),
    *reinterpret_cast<Vec3 *>(inPoint3->obj)
  );
  JoltC_Plane_t* result = new JoltC_Plane_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Plane_t * JoltC_Plane_Offset(
  JoltC_Plane_t * self,
  float inDistance
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  static Plane resultValue = selfCpp->Offset(
    inDistance
  );
  JoltC_Plane_t* result = new JoltC_Plane_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Plane_t * JoltC_Plane_GetTransformed(
  JoltC_Plane_t * self,
  JoltC_Mat44_t * inTransform
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  static Plane resultValue = selfCpp->GetTransformed(
    *reinterpret_cast<Mat44 *>(inTransform->obj)
  );
  JoltC_Plane_t* result = new JoltC_Plane_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

float JoltC_Plane_SignedDistance(
  JoltC_Plane_t * self,
  JoltC_Vec3_t * inPoint
) {
  Plane * selfCpp = static_cast<Plane *>(self->obj);
  float result = selfCpp->SignedDistance(
    *reinterpret_cast<Vec3 *>(inPoint->obj)
  );
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

