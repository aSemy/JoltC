#include "JoltC/JoltC_RMat44.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RMat44_t * JoltC_RMat44_new() {
  JoltC_RMat44_t * cInstance = new JoltC_RMat44_t();
  RMat44 * cppInstance = new RMat44();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_RMat44_t * JoltC_RMat44_sZero() {
  const RMat44& resultValue = RMat44::sZero();
  JoltC_RMat44_t* result = new JoltC_RMat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RMat44_t * JoltC_RMat44_sIdentity() {
  const RMat44& resultValue = RMat44::sIdentity();
  JoltC_RMat44_t* result = new JoltC_RMat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RMat44_t * JoltC_RMat44_sRotation(
  JoltC_Quat_t * inQ
) {
  const RMat44& resultValue = RMat44::sRotation(
    *reinterpret_cast<Quat *>(inQ->obj)
  );
  JoltC_RMat44_t* result = new JoltC_RMat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RMat44_t * JoltC_RMat44_sTranslation(
  JoltC_RVec3_t * inTranslation
) {
  const RMat44& resultValue = RMat44::sTranslation(
    *reinterpret_cast<RVec3 *>(inTranslation->obj)
  );
  JoltC_RMat44_t* result = new JoltC_RMat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RMat44_t * JoltC_RMat44_sRotationTranslation(
  JoltC_Quat_t * inRotation,
  JoltC_RVec3_t * inTranslation
) {
  const RMat44& resultValue = RMat44::sRotationTranslation(
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<RVec3 *>(inTranslation->obj)
  );
  JoltC_RMat44_t* result = new JoltC_RMat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RMat44_t * JoltC_RMat44_sInverseRotationTranslation(
  JoltC_Quat_t * inRotation,
  JoltC_RVec3_t * inTranslation
) {
  const RMat44& resultValue = RMat44::sInverseRotationTranslation(
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<RVec3 *>(inTranslation->obj)
  );
  JoltC_RMat44_t* result = new JoltC_RMat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_RMat44_GetAxisX(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3& resultValue = selfCpp->GetAxisX();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_RMat44_GetAxisY(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3& resultValue = selfCpp->GetAxisY();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_RMat44_GetAxisZ(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3& resultValue = selfCpp->GetAxisZ();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_RMat44_GetRotation(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Mat44& resultValue = selfCpp->GetRotation();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Quat_t * JoltC_RMat44_GetQuaternion(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Quat& resultValue = selfCpp->GetQuaternion();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RVec3_t * JoltC_RMat44_GetTranslation(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const RVec3& resultValue = selfCpp->GetTranslation();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

bool JoltC_RMat44_IsClose(
  JoltC_RMat44_t * self,
  JoltC_RMat44_t * inM,
  double inMaxDistSq
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  bool result = selfCpp->IsClose(
    *reinterpret_cast<RMat44 *>(inM->obj),
    inMaxDistSq
  );
  return result;
};

JoltC_Vec3_t * JoltC_RMat44_Multiply3x3(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3& resultValue = selfCpp->Multiply3x3(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_RMat44_Multiply3x3Transposed(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3& resultValue = selfCpp->Multiply3x3Transposed(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_RMat44_Transposed3x3(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Mat44& resultValue = selfCpp->Transposed3x3();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RMat44_t * JoltC_RMat44_Inversed(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const RMat44& resultValue = selfCpp->Inversed();
  JoltC_RMat44_t* result = new JoltC_RMat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RMat44_t * JoltC_RMat44_InversedRotationTranslation(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const RMat44& resultValue = selfCpp->InversedRotationTranslation();
  JoltC_RMat44_t* result = new JoltC_RMat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RMat44_t * JoltC_RMat44_PreTranslated(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inTranslation
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const RMat44& resultValue = selfCpp->PreTranslated(
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  JoltC_RMat44_t* result = new JoltC_RMat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RMat44_t * JoltC_RMat44_PostTranslated(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inTranslation
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const RMat44& resultValue = selfCpp->PostTranslated(
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  JoltC_RMat44_t* result = new JoltC_RMat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RMat44_t * JoltC_RMat44_PreScaled(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inScale
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const RMat44& resultValue = selfCpp->PreScaled(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_RMat44_t* result = new JoltC_RMat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_RMat44_t * JoltC_RMat44_PostScaled(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inScale
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const RMat44& resultValue = selfCpp->PostScaled(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_RMat44_t* result = new JoltC_RMat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_RMat44_SetColumn3(
  JoltC_RMat44_t * self,
  long inCol,
  JoltC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  selfCpp->SetColumn3(
    inCol,
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JoltC_RMat44_SetAxisX(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  selfCpp->SetAxisX(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JoltC_RMat44_SetAxisY(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  selfCpp->SetAxisY(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JoltC_RMat44_SetAxisZ(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  selfCpp->SetAxisZ(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JoltC_RMat44_SetTranslation(
  JoltC_RMat44_t * self,
  JoltC_RVec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  selfCpp->SetTranslation(
    *reinterpret_cast<RVec3 *>(inV->obj)
  );
};

void JoltC_RMat44_SetColumn4(
  JoltC_RMat44_t * self,
  long inCol,
  JoltC_Vec4_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  selfCpp->SetColumn4(
    inCol,
    *reinterpret_cast<Vec4 *>(inV->obj)
  );
};

//endregion

#ifdef __cplusplus
}
#endif

