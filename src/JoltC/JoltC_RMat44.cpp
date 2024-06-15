#include "JoltC/JoltC_RMat44.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `RMat44` instance.
 */
JoltC_RMat44_t * JoltC_RMat44_new() {
  JoltC_RMat44_t * cInstance = new JoltC_RMat44_t();
  RMat44 * cppInstance = new RMat44();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_RMat44_destroy(
  JoltC_RMat44_t * self
){
  if (self == NULL) return;
  delete static_cast<RMat44 *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_RMat44_t * JoltC_RMat44_sZero() {
  RMat44 * resultPtr = new RMat44();
  *resultPtr = RMat44::sZero();
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_RMat44_sIdentity() {
  RMat44 * resultPtr = new RMat44();
  *resultPtr = RMat44::sIdentity();
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_RMat44_sRotation(
  JoltC_Quat_t * inQ
) {
  const Quat * inQCpp = static_cast<const Quat *>(inQ->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = RMat44::sRotation(
    *inQCpp
  );
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_RMat44_sTranslation(
  JoltC_RVec3_t * inTranslation
) {
  const RVec3 * inTranslationCpp = static_cast<const RVec3 *>(inTranslation->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = RMat44::sTranslation(
    *inTranslationCpp
  );
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_RMat44_sRotationTranslation(
  JoltC_Quat_t * inRotation,
  JoltC_RVec3_t * inTranslation
) {
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const RVec3 * inTranslationCpp = static_cast<const RVec3 *>(inTranslation->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = RMat44::sRotationTranslation(
    *inRotationCpp,
    *inTranslationCpp
  );
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_RMat44_sInverseRotationTranslation(
  JoltC_Quat_t * inRotation,
  JoltC_RVec3_t * inTranslation
) {
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const RVec3 * inTranslationCpp = static_cast<const RVec3 *>(inTranslation->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = RMat44::sInverseRotationTranslation(
    *inRotationCpp,
    *inTranslationCpp
  );
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_RMat44_GetAxisX(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAxisX();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_RMat44_GetAxisY(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAxisY();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_RMat44_GetAxisZ(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetAxisZ();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_RMat44_GetRotation(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->GetRotation();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_RMat44_GetQuaternion(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetQuaternion();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_RMat44_GetTranslation(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetTranslation();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

bool JoltC_RMat44_IsClose(
  JoltC_RMat44_t * self,
  JoltC_RMat44_t * inM,
  double inMaxDistSq
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const RMat44 * inMCpp = static_cast<const RMat44 *>(inM->obj);
  return selfCpp->IsClose(
    *inMCpp,
    inMaxDistSq
  );
}

JoltC_Vec3_t * JoltC_RMat44_Multiply3x3(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->Multiply3x3(
    *inVCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_RMat44_Multiply3x3Transposed(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->Multiply3x3Transposed(
    *inVCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Mat44_t * JoltC_RMat44_Transposed3x3(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Mat44 * resultPtr = new Mat44();
  *resultPtr = selfCpp->Transposed3x3();
  JoltC_Mat44_t * result = new JoltC_Mat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_RMat44_Inversed(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->Inversed();
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_RMat44_InversedRotationTranslation(
  JoltC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->InversedRotationTranslation();
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_RMat44_PreTranslated(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inTranslation
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3 * inTranslationCpp = static_cast<const Vec3 *>(inTranslation->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->PreTranslated(
    *inTranslationCpp
  );
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_RMat44_PostTranslated(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inTranslation
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3 * inTranslationCpp = static_cast<const Vec3 *>(inTranslation->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->PostTranslated(
    *inTranslationCpp
  );
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_RMat44_PreScaled(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inScale
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->PreScaled(
    *inScaleCpp
  );
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RMat44_t * JoltC_RMat44_PostScaled(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inScale
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  RMat44 * resultPtr = new RMat44();
  *resultPtr = selfCpp->PostScaled(
    *inScaleCpp
  );
  JoltC_RMat44_t * result = new JoltC_RMat44_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_RMat44_SetColumn3(
  JoltC_RMat44_t * self,
  long inCol,
  JoltC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  selfCpp->SetColumn3(
    inCol,
    *inVCpp
  );
}

void JoltC_RMat44_SetAxisX(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  selfCpp->SetAxisX(
    *inVCpp
  );
}

void JoltC_RMat44_SetAxisY(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  selfCpp->SetAxisY(
    *inVCpp
  );
}

void JoltC_RMat44_SetAxisZ(
  JoltC_RMat44_t * self,
  JoltC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  selfCpp->SetAxisZ(
    *inVCpp
  );
}

void JoltC_RMat44_SetTranslation(
  JoltC_RMat44_t * self,
  JoltC_RVec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  const RVec3 * inVCpp = static_cast<const RVec3 *>(inV->obj);
  selfCpp->SetTranslation(
    *inVCpp
  );
}

void JoltC_RMat44_SetColumn4(
  JoltC_RMat44_t * self,
  long inCol,
  JoltC_Vec4_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
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
