#include "JoltC/JoltC_Quat.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Quat_t * JoltC_Quat_new_0() {
  JoltC_Quat_t * cInstance = new JoltC_Quat_t();
  Quat * cppInstance = new Quat();
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_Quat_t * JoltC_Quat_new_1(
  float inX,
  float inY,
  float inZ,
  float inW
) {
  JoltC_Quat_t * cInstance = new JoltC_Quat_t();
  Quat * cppInstance = new Quat(
    inX,
    inY,
    inZ,
    inW
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_Quat_t * JoltC_Quat_sZero() {
  Quat resultValue = Quat::sZero();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

JoltC_Quat_t * JoltC_Quat_sIdentity() {
  Quat resultValue = Quat::sIdentity();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

JoltC_Quat_t * JoltC_Quat_sRotation(
  const JoltC_Vec3_t * inRotation,
  float inAngle
) {
  Quat resultValue = Quat::sRotation(
  *reinterpret_cast<Vec3 *>(inRotation->obj),
  inAngle
  );
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

JoltC_Quat_t * JoltC_Quat_sFromTo(
  const JoltC_Vec3_t * inFrom,
  const JoltC_Vec3_t * inTo
) {
  Quat resultValue = Quat::sFromTo(
  *reinterpret_cast<Vec3 *>(inFrom->obj),
  *reinterpret_cast<Vec3 *>(inTo->obj)
  );
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

bool JoltC_Quat_Equals(
  JoltC_Quat_t * self,
  const JoltC_Quat_t * inQ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  bool result = selfCpp->operator==(
  *reinterpret_cast<Quat *>(inQ->obj)
  );
  return result;
};

bool JoltC_Quat_NotEquals(
  JoltC_Quat_t * self,
  const JoltC_Quat_t * inQ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  bool result = selfCpp->operator!=(
  *reinterpret_cast<Quat *>(inQ->obj)
  );
  return result;
};

bool JoltC_Quat_IsClose(
  JoltC_Quat_t * self,
  const JoltC_Quat_t * inQ,
  float inMaxDistSq
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  bool result = selfCpp->IsClose(
  *reinterpret_cast<Quat *>(inQ->obj),
  inMaxDistSq
  );
  return result;
};

bool JoltC_Quat_IsNormalized(
  JoltC_Quat_t * self,
  float inTolerance
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  bool result = selfCpp->IsNormalized(
  inTolerance
  );
  return result;
};

float JoltC_Quat_Length(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->Length();
  return result;
};

float JoltC_Quat_LengthSq(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->LengthSq();
  return result;
};

JoltC_Quat_t * JoltC_Quat_Normalized(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  Quat resultValue = selfCpp->Normalized();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

JoltC_Quat_t * JoltC_Quat_sEulerAngles(
  const JoltC_Vec3_t * inInput
) {
  Quat resultValue = Quat::sEulerAngles(
  *reinterpret_cast<Vec3 *>(inInput->obj)
  );
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JoltC_Quat_t *>(result);
};

const JoltC_Vec3_t * JoltC_Quat_GetEulerAngles(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 resultValue = selfCpp->GetEulerAngles();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

float JoltC_Quat_GetX(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->GetX();
  return result;
};

float JoltC_Quat_GetY(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->GetY();
  return result;
};

float JoltC_Quat_GetZ(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->GetZ();
  return result;
};

float JoltC_Quat_GetW(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->GetW();
  return result;
};

const JoltC_Vec3_t * JoltC_Quat_GetXYZ(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 resultValue = selfCpp->GetXYZ();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

void JoltC_Quat_SetX(
  JoltC_Quat_t * self,
  float inX
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  
  selfCpp->SetX(
  inX
  );
};

void JoltC_Quat_SetY(
  JoltC_Quat_t * self,
  float inY
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  
  selfCpp->SetY(
  inY
  );
};

void JoltC_Quat_SetZ(
  JoltC_Quat_t * self,
  float inZ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  
  selfCpp->SetZ(
  inZ
  );
};

void JoltC_Quat_SetW(
  JoltC_Quat_t * self,
  float inW
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  
  selfCpp->SetW(
  inW
  );
};

void JoltC_Quat_Set(
  JoltC_Quat_t * self,
  float inX,
  float inY,
  float inZ,
  float inW
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  
  selfCpp->Set(
  inX,
  inY,
  inZ,
  inW
  );
};

const JoltC_Vec3_t * JoltC_Quat_InverseRotate(
  JoltC_Quat_t * self,
  const JoltC_Vec3_t * inV
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 resultValue = selfCpp->InverseRotate(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

const JoltC_Vec3_t * JoltC_Quat_RotateAxisX(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 resultValue = selfCpp->RotateAxisX();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

const JoltC_Vec3_t * JoltC_Quat_RotateAxisY(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 resultValue = selfCpp->RotateAxisY();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

const JoltC_Vec3_t * JoltC_Quat_RotateAxisZ(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 resultValue = selfCpp->RotateAxisZ();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

float JoltC_Quat_Dot(
  JoltC_Quat_t * self,
  const JoltC_Quat_t * inQ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->Dot(
  *reinterpret_cast<Quat *>(inQ->obj)
  );
  return result;
};

const JoltC_Quat_t * JoltC_Quat_Conjugated(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->Conjugated();
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JoltC_Quat_t *>(result);
};

const JoltC_Quat_t * JoltC_Quat_Inversed(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->Inversed();
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JoltC_Quat_t *>(result);
};

const JoltC_Quat_t * JoltC_Quat_EnsureWPositive(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->EnsureWPositive();
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JoltC_Quat_t *>(result);
};

const JoltC_Quat_t * JoltC_Quat_GetPerpendicular(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->GetPerpendicular();
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JoltC_Quat_t *>(result);
};

float JoltC_Quat_GetRotationAngle(
  JoltC_Quat_t * self,
  const JoltC_Vec3_t * inAxis
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->GetRotationAngle(
  *reinterpret_cast<Vec3 *>(inAxis->obj)
  );
  return result;
};

const JoltC_Quat_t * JoltC_Quat_GetTwist(
  JoltC_Quat_t * self,
  const JoltC_Vec3_t * inAxis
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->GetTwist(
  *reinterpret_cast<Vec3 *>(inAxis->obj)
  );
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JoltC_Quat_t *>(result);
};

void JoltC_Quat_GetSwingTwist(
  JoltC_Quat_t * self,
  JoltC_Quat_t * outSwing,
  JoltC_Quat_t * outTwist
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  
  selfCpp->GetSwingTwist(
  *reinterpret_cast<Quat *>(outSwing->obj),
  *reinterpret_cast<Quat *>(outTwist->obj)
  );
};

const JoltC_Quat_t * JoltC_Quat_LERP(
  JoltC_Quat_t * self,
  const JoltC_Quat_t * inDestination,
  float inFraction
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->LERP(
  *reinterpret_cast<Quat *>(inDestination->obj),
  inFraction
  );
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JoltC_Quat_t *>(result);
};

const JoltC_Quat_t * JoltC_Quat_SLERP(
  JoltC_Quat_t * self,
  const JoltC_Quat_t * inDestination,
  float inFraction
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->SLERP(
  *reinterpret_cast<Quat *>(inDestination->obj),
  inFraction
  );
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JoltC_Quat_t *>(result);
};

//endregion

#ifdef __cplusplus
}
#endif

