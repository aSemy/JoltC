#include "JoltC/JoltC_Mat44.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Mat44_t * JoltC_Mat44_new() {
  JoltC_Mat44_t * cInstance = new JoltC_Mat44_t();
  Mat44 * cppInstance = new Mat44();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_Mat44_t * JoltC_Mat44_sZero() {
  const Mat44& resultValue = Mat44::sZero();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_sIdentity() {
  const Mat44& resultValue = Mat44::sIdentity();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_sRotationX(
  float inX
) {
  const Mat44& resultValue = Mat44::sRotationX(
    inX
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_sRotationY(
  float inY
) {
  const Mat44& resultValue = Mat44::sRotationY(
    inY
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_sRotationZ(
  float inZ
) {
  const Mat44& resultValue = Mat44::sRotationZ(
    inZ
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_sRotation(
  JoltC_Quat_t * inQ
) {
  const Mat44& resultValue = Mat44::sRotation(
    *reinterpret_cast<Quat *>(inQ->obj)
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_sTranslation(
  JoltC_Vec3_t * inTranslation
) {
  const Mat44& resultValue = Mat44::sTranslation(
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_sRotationTranslation(
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inTranslation
) {
  const Mat44& resultValue = Mat44::sRotationTranslation(
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_sInverseRotationTranslation(
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inTranslation
) {
  const Mat44& resultValue = Mat44::sInverseRotationTranslation(
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_sScale(
  float inScale
) {
  const Mat44& resultValue = Mat44::sScale(
    inScale
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_sPerspective(
  float inFovY,
  float inAspect,
  float inNear,
  float inFar
) {
  const Mat44& resultValue = Mat44::sPerspective(
    inFovY,
    inAspect,
    inNear,
    inFar
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Mat44_GetAxisX(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3& resultValue = selfCpp->GetAxisX();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Mat44_GetAxisY(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3& resultValue = selfCpp->GetAxisY();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Mat44_GetAxisZ(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3& resultValue = selfCpp->GetAxisZ();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_GetRotation(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Mat44& resultValue = selfCpp->GetRotation();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Quat_t * JoltC_Mat44_GetQuaternion(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Quat& resultValue = selfCpp->GetQuaternion();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Mat44_GetTranslation(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3& resultValue = selfCpp->GetTranslation();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

bool JoltC_Mat44_IsClose(
  JoltC_Mat44_t * self,
  JoltC_Mat44_t * inM,
  float inMaxDistSq
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  bool result = selfCpp->IsClose(
    *reinterpret_cast<Mat44 *>(inM->obj),
    inMaxDistSq
  );
  return result;
};

JoltC_Vec3_t * JoltC_Mat44_Multiply3x3(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3& resultValue = selfCpp->Multiply3x3(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Mat44_Multiply3x3Transposed(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3& resultValue = selfCpp->Multiply3x3Transposed(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_Transposed(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Mat44& resultValue = selfCpp->Transposed();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_Transposed3x3(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Mat44& resultValue = selfCpp->Transposed3x3();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_Inversed(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Mat44& resultValue = selfCpp->Inversed();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_InversedRotationTranslation(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Mat44& resultValue = selfCpp->InversedRotationTranslation();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

float JoltC_Mat44_GetDeterminant3x3(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  float result = selfCpp->GetDeterminant3x3();
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_Inversed3x3(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Mat44& resultValue = selfCpp->Inversed3x3();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_GetDirectionPreservingMatrix(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Mat44& resultValue = selfCpp->GetDirectionPreservingMatrix();
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_PreTranslated(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inTranslation
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Mat44& resultValue = selfCpp->PreTranslated(
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_PostTranslated(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inTranslation
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Mat44& resultValue = selfCpp->PostTranslated(
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_PreScaled(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inScale
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Mat44& resultValue = selfCpp->PreScaled(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Mat44_t * JoltC_Mat44_PostScaled(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inScale
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Mat44& resultValue = selfCpp->PostScaled(
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  JoltC_Mat44_t* result = new JoltC_Mat44_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_Mat44_SetColumn3(
  JoltC_Mat44_t * self,
  long inCol,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  selfCpp->SetColumn3(
    inCol,
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JoltC_Mat44_SetAxisX(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  selfCpp->SetAxisX(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JoltC_Mat44_SetAxisY(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  selfCpp->SetAxisY(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JoltC_Mat44_SetAxisZ(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  selfCpp->SetAxisZ(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JoltC_Mat44_SetTranslation(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  selfCpp->SetTranslation(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JoltC_Mat44_SetColumn4(
  JoltC_Mat44_t * self,
  long inCol,
  JoltC_Vec4_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  selfCpp->SetColumn4(
    inCol,
    *reinterpret_cast<Vec4 *>(inV->obj)
  );
};

//endregion

#ifdef __cplusplus
}
#endif

