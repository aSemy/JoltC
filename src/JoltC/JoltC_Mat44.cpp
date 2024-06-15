#include "JoltC/JoltC_Mat44.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `Mat44` instance.
 */
JoltC_Mat44_t * JoltC_Mat44_new() {
  JoltC_Mat44_t * cInstance = new JoltC_Mat44_t();
  Mat44 * cppInstance = new Mat44();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_Mat44_destroy(
  JoltC_Mat44_t * self
){
  if (self == NULL) return;
  delete static_cast<Mat44 *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_Mat44_t * JoltC_Mat44_sZero() {
  Mat44 * resultPtr = new Mat44();
  *resultPtr = Mat44::sZero();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_sIdentity() {
  Mat44 * resultPtr = new Mat44();
  *resultPtr = Mat44::sIdentity();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_sRotationX(
  float inX
) {
  Mat44 * resultPtr = new Mat44();
  *resultPtr = Mat44::sRotationX(
    inX
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_sRotationY(
  float inY
) {
  Mat44 * resultPtr = new Mat44();
  *resultPtr = Mat44::sRotationY(
    inY
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_sRotationZ(
  float inZ
) {
  Mat44 * resultPtr = new Mat44();
  *resultPtr = Mat44::sRotationZ(
    inZ
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_sRotation(
  JoltC_Quat_t * inQ
) {
  const Quat * inQCpp = static_cast<const Quat *>(inQ->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = Mat44::sRotation(
    *inQCpp
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_sTranslation(
  JoltC_Vec3_t * inTranslation
) {
  const Vec3 * inTranslationCpp = static_cast<const Vec3 *>(inTranslation->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = Mat44::sTranslation(
    *inTranslationCpp
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_sRotationTranslation(
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inTranslation
) {
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const Vec3 * inTranslationCpp = static_cast<const Vec3 *>(inTranslation->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = Mat44::sRotationTranslation(
    *inRotationCpp,
    *inTranslationCpp
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_sInverseRotationTranslation(
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inTranslation
) {
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const Vec3 * inTranslationCpp = static_cast<const Vec3 *>(inTranslation->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = Mat44::sInverseRotationTranslation(
    *inRotationCpp,
    *inTranslationCpp
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_sScale(
  float inScale
) {
  Mat44 * resultPtr = new Mat44();
  *resultPtr = Mat44::sScale(
    inScale
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_sPerspective(
  float inFovY,
  float inAspect,
  float inNear,
  float inFar
) {
  Mat44 * resultPtr = new Mat44();
  *resultPtr = Mat44::sPerspective(
    inFovY,
    inAspect,
    inNear,
    inFar
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Mat44_GetAxisX(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAxisX();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Mat44_GetAxisY(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAxisY();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Mat44_GetAxisZ(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAxisZ();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_GetRotation(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetRotation();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_Mat44_GetQuaternion(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetQuaternion();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Mat44_GetTranslation(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetTranslation();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

bool JoltC_Mat44_IsClose(
  JoltC_Mat44_t * self,
  JoltC_Mat44_t * inM,
  float inMaxDistSq
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Mat44 * inMCpp = static_cast<const Mat44 *>(inM->obj);
  return selfCpp->IsClose(
    *inMCpp,
    inMaxDistSq
  );
}

JoltC_Vec3_t * JoltC_Mat44_Multiply3x3(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->Multiply3x3(
    *inVCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Mat44_Multiply3x3Transposed(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->Multiply3x3Transposed(
    *inVCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_Transposed(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->Transposed();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_Transposed3x3(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->Transposed3x3();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_Inversed(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->Inversed();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_InversedRotationTranslation(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->InversedRotationTranslation();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_Mat44_GetDeterminant3x3(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  return selfCpp->GetDeterminant3x3();
}

JoltC_Mat44_t * JoltC_Mat44_Inversed3x3(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->Inversed3x3();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_GetDirectionPreservingMatrix(
  JoltC_Mat44_t * self
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetDirectionPreservingMatrix();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_PreTranslated(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inTranslation
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3 * inTranslationCpp = static_cast<const Vec3 *>(inTranslation->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->PreTranslated(
    *inTranslationCpp
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_PostTranslated(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inTranslation
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3 * inTranslationCpp = static_cast<const Vec3 *>(inTranslation->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->PostTranslated(
    *inTranslationCpp
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_PreScaled(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inScale
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->PreScaled(
    *inScaleCpp
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_Mat44_PostScaled(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inScale
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->PostScaled(
    *inScaleCpp
  );
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_Mat44_SetColumn3(
  JoltC_Mat44_t * self,
  long inCol,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  selfCpp->SetColumn3(
    inCol,
    *inVCpp
  );
}

void JoltC_Mat44_SetAxisX(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  selfCpp->SetAxisX(
    *inVCpp
  );
}

void JoltC_Mat44_SetAxisY(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  selfCpp->SetAxisY(
    *inVCpp
  );
}

void JoltC_Mat44_SetAxisZ(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  selfCpp->SetAxisZ(
    *inVCpp
  );
}

void JoltC_Mat44_SetTranslation(
  JoltC_Mat44_t * self,
  JoltC_Vec3_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  selfCpp->SetTranslation(
    *inVCpp
  );
}

void JoltC_Mat44_SetColumn4(
  JoltC_Mat44_t * self,
  long inCol,
  JoltC_Vec4_t * inV
) {
  Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
  const Vec4 * inVCpp = static_cast<const Vec4 *>(inV->obj);
  selfCpp->SetColumn4(
    inCol,
    *inVCpp
  );
}

//endregion


#ifdef __cplusplus
}
#endif
