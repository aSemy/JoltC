#include "JoltC/JPC_RMat44.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RMat44_t * JPC_RMat44_new() {
  JPC_RMat44_t * cInstance = new JPC_RMat44_t();
  RMat44 * cppInstance = new RMat44();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_RMat44_t * JPC_RMat44_sZero() {
  RMat44 resultValue = RMat44::sZero();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_RMat44_sIdentity() {
  RMat44 resultValue = RMat44::sIdentity();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_RMat44_sRotation(
  const JPC_Quat_t * inQ
) {
  RMat44 resultValue = RMat44::sRotation(
  *reinterpret_cast<Quat *>(inQ->obj)
  );
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_RMat44_sTranslation(
  const JPC_RVec3_t * inTranslation
) {
  RMat44 resultValue = RMat44::sTranslation(
  *reinterpret_cast<RVec3 *>(inTranslation->obj)
  );
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_RMat44_sRotationTranslation(
  const JPC_Quat_t * inRotation,
  const JPC_RVec3_t * inTranslation
) {
  RMat44 resultValue = RMat44::sRotationTranslation(
  *reinterpret_cast<Quat *>(inRotation->obj),
  *reinterpret_cast<RVec3 *>(inTranslation->obj)
  );
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_RMat44_sInverseRotationTranslation(
  const JPC_Quat_t * inRotation,
  const JPC_RVec3_t * inTranslation
) {
  RMat44 resultValue = RMat44::sInverseRotationTranslation(
  *reinterpret_cast<Quat *>(inRotation->obj),
  *reinterpret_cast<RVec3 *>(inTranslation->obj)
  );
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_Vec3_t * JPC_RMat44_GetAxisX(
  JPC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Vec3 resultValue = selfCpp->GetAxisX();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_RMat44_GetAxisY(
  JPC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Vec3 resultValue = selfCpp->GetAxisY();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_RMat44_GetAxisZ(
  JPC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Vec3 resultValue = selfCpp->GetAxisZ();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Mat44_t * JPC_RMat44_GetRotation(
  JPC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Mat44 resultValue = selfCpp->GetRotation();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_Quat_t * JPC_RMat44_GetQuaternion(
  JPC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Quat resultValue = selfCpp->GetQuaternion();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

JPC_RVec3_t * JPC_RMat44_GetTranslation(
  JPC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  RVec3 resultValue = selfCpp->GetTranslation();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

bool JPC_RMat44_IsClose(
  JPC_RMat44_t * self,
  const JPC_RMat44_t * inM,
  double inMaxDistSq
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  bool result = selfCpp->IsClose(
  *reinterpret_cast<RMat44 *>(inM->obj),
  inMaxDistSq
  );
  return result;
};

JPC_Vec3_t * JPC_RMat44_Multiply3x3(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Vec3 resultValue = selfCpp->Multiply3x3(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_RMat44_Multiply3x3Transposed(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Vec3 resultValue = selfCpp->Multiply3x3Transposed(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Mat44_t * JPC_RMat44_Transposed3x3(
  JPC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  Mat44 resultValue = selfCpp->Transposed3x3();
  Mat44* result = new Mat44(resultValue);
  return reinterpret_cast<JPC_Mat44_t *>(result);
};

JPC_RMat44_t * JPC_RMat44_Inversed(
  JPC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  RMat44 resultValue = selfCpp->Inversed();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_RMat44_InversedRotationTranslation(
  JPC_RMat44_t * self
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  RMat44 resultValue = selfCpp->InversedRotationTranslation();
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_RMat44_PreTranslated(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inTranslation
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  RMat44 resultValue = selfCpp->PreTranslated(
  *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_RMat44_PostTranslated(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inTranslation
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  RMat44 resultValue = selfCpp->PostTranslated(
  *reinterpret_cast<Vec3 *>(inTranslation->obj)
  );
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_RMat44_PreScaled(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inScale
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  RMat44 resultValue = selfCpp->PreScaled(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

JPC_RMat44_t * JPC_RMat44_PostScaled(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inScale
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  RMat44 resultValue = selfCpp->PostScaled(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  RMat44* result = new RMat44(resultValue);
  return reinterpret_cast<JPC_RMat44_t *>(result);
};

void JPC_RMat44_SetColumn3(
  JPC_RMat44_t * self,
  long inCol,
  const JPC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  
  selfCpp->SetColumn3(
  inCol,
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JPC_RMat44_SetAxisX(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  
  selfCpp->SetAxisX(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JPC_RMat44_SetAxisY(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  
  selfCpp->SetAxisY(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JPC_RMat44_SetAxisZ(
  JPC_RMat44_t * self,
  const JPC_Vec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  
  selfCpp->SetAxisZ(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
};

void JPC_RMat44_SetTranslation(
  JPC_RMat44_t * self,
  const JPC_RVec3_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  
  selfCpp->SetTranslation(
  *reinterpret_cast<RVec3 *>(inV->obj)
  );
};

void JPC_RMat44_SetColumn4(
  JPC_RMat44_t * self,
  long inCol,
  const JPC_Vec4_t * inV
) {
  RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
  
  selfCpp->SetColumn4(
  inCol,
  *reinterpret_cast<Vec4 *>(inV->obj)
  );
};

//endregion functions

#ifdef __cplusplus
}
#endif

