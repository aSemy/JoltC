#include "JoltC/JPC_Mat44.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Mat44_t * JPC_Mat44_new() {
  JPC_Mat44_t * cInstance = new JPC_Mat44_t();
  Mat44 * cppInstance = new Mat44();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Mat44_t * JPC_Mat44_sZero() {
  Mat44 resultValue = Mat44::sZero();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_sIdentity() {
  Mat44 resultValue = Mat44::sIdentity();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_sRotationX(
  float inX
) {
  Mat44 resultValue = Mat44::sRotationX(
  inX
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_sRotationY(
  float inY
) {
  Mat44 resultValue = Mat44::sRotationY(
  inY
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_sRotationZ(
  float inZ
) {
  Mat44 resultValue = Mat44::sRotationZ(
  inZ
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_sRotation(
  const JPC_Quat_t * inQ
) {
  Mat44 resultValue = Mat44::sRotation(
  *reinterpret_cast<Quat *>(inQ->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_sTranslation(
  const JPC_Vec3_t * inTranslation
) {
  Mat44 resultValue = Mat44::sTranslation(
  *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_sRotationTranslation(
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inTranslation
) {
  Mat44 resultValue = Mat44::sRotationTranslation(
  *reinterpret_cast<Quat *>(inRotation->obj),
  *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_sInverseRotationTranslation(
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inTranslation
) {
  Mat44 resultValue = Mat44::sInverseRotationTranslation(
  *reinterpret_cast<Quat *>(inRotation->obj),
  *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_sScale(
  float inScale
) {
  Mat44 resultValue = Mat44::sScale(
  inScale
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_sPerspective(
  float inFovY,
  float inAspect,
  float inNear,
  float inFar
) {
  Mat44 resultValue = Mat44::sPerspective(
  inFovY,
  inAspect,
  inNear,
  inFar
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Vec3_t * JPC_Mat44_GetAxisX(
  JPC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Vec3 resultValue = selfCpp->GetAxisX();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Mat44_GetAxisY(
  JPC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Vec3 resultValue = selfCpp->GetAxisY();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Mat44_GetAxisZ(
  JPC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Vec3 resultValue = selfCpp->GetAxisZ();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_GetRotation(
  JPC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 resultValue = selfCpp->GetRotation();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Quat_t * JPC_Mat44_GetQuaternion(
  JPC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Quat resultValue = selfCpp->GetQuaternion();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

JPC_Vec3_t * JPC_Mat44_GetTranslation(
  JPC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Vec3 resultValue = selfCpp->GetTranslation();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

bool JPC_Mat44_IsClose(
  JPC_Mat44_t * self,
  const JPC_Mat44_t * inM,
  float inMaxDistSq
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  bool result = selfCpp->IsClose(
  *reinterpret_cast<Mat44 *>(inM->obj),
  inMaxDistSq
  );
  return result;
};

JPC_Vec3_t * JPC_Mat44_Multiply3x3(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Vec3 resultValue = selfCpp->Multiply3x3(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Mat44_Multiply3x3Transposed(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Vec3 resultValue = selfCpp->Multiply3x3Transposed(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_Transposed(
  JPC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 resultValue = selfCpp->Transposed();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_Transposed3x3(
  JPC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 resultValue = selfCpp->Transposed3x3();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_Inversed(
  JPC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 resultValue = selfCpp->Inversed();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_InversedRotationTranslation(
  JPC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 resultValue = selfCpp->InversedRotationTranslation();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

float JPC_Mat44_GetDeterminant3x3(
  JPC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  float result = selfCpp->GetDeterminant3x3();
  return result;
};

JPC_Mat44_t * JPC_Mat44_Inversed3x3(
  JPC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 resultValue = selfCpp->Inversed3x3();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_GetDirectionPreservingMatrix(
  JPC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 resultValue = selfCpp->GetDirectionPreservingMatrix();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_PreTranslated(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inTranslation
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 resultValue = selfCpp->PreTranslated(
  *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_PostTranslated(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inTranslation
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 resultValue = selfCpp->PostTranslated(
  *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_PreScaled(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inScale
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 resultValue = selfCpp->PreScaled(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Mat44_t * JPC_Mat44_PostScaled(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inScale
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 resultValue = selfCpp->PostScaled(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

void JPC_Mat44_SetColumn3(
  JPC_Mat44_t * self,
  long inCol,
  const JPC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  
  selfCpp->SetColumn3(
  inCol,
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JPC_Mat44_SetAxisX(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  
  selfCpp->SetAxisX(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JPC_Mat44_SetAxisY(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  
  selfCpp->SetAxisY(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JPC_Mat44_SetAxisZ(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  
  selfCpp->SetAxisZ(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JPC_Mat44_SetTranslation(
  JPC_Mat44_t * self,
  const JPC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  
  selfCpp->SetTranslation(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JPC_Mat44_SetColumn4(
  JPC_Mat44_t * self,
  long inCol,
  const JPC_Vec4_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  
  selfCpp->SetColumn4(
  inCol,
  *reinterpret_cast<Vec4 *>(inV->obj)
  );
};

//endregion functions

#ifdef __cplusplus
}
#endif

