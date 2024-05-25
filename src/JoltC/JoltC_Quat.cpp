#include "JoltC/JPC_Quat.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Quat_t * JPC_Quat_new_0() {
  JPC_Quat_t * cInstance = new JPC_Quat_t();
  Quat * cppInstance = new Quat();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_Quat_t * JPC_Quat_new_1(
  float inX,
  float inY,
  float inZ,
  float inW
) {
  JPC_Quat_t * cInstance = new JPC_Quat_t();
  Quat * cppInstance = new Quat(
    inX,
    inY,
    inZ,
    inW
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Quat_t * JPC_Quat_sZero() {
  Quat resultValue = Quat::sZero();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

JPC_Quat_t * JPC_Quat_sIdentity() {
  Quat resultValue = Quat::sIdentity();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

JPC_Quat_t * JPC_Quat_sRotation(
  const JPC_Vec3_t * inRotation,
  float inAngle
) {
  Quat resultValue = Quat::sRotation(
  *reinterpret_cast<Vec3 *>(inRotation->obj),
  inAngle
  );
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

JPC_Quat_t * JPC_Quat_sFromTo(
  const JPC_Vec3_t * inFrom,
  const JPC_Vec3_t * inTo
) {
  Quat resultValue = Quat::sFromTo(
  *reinterpret_cast<Vec3 *>(inFrom->obj),
  *reinterpret_cast<Vec3 *>(inTo->obj)
  );
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

bool JPC_Quat_Equals(
  JPC_Quat_t * self,
  const JPC_Quat_t * inQ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  bool result = selfCpp->operator==(
  *reinterpret_cast<Quat *>(inQ->obj)
  );
  return result;
};

bool JPC_Quat_NotEquals(
  JPC_Quat_t * self,
  const JPC_Quat_t * inQ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  bool result = selfCpp->operator!=(
  *reinterpret_cast<Quat *>(inQ->obj)
  );
  return result;
};

bool JPC_Quat_IsClose(
  JPC_Quat_t * self,
  const JPC_Quat_t * inQ,
  float inMaxDistSq
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  bool result = selfCpp->IsClose(
  *reinterpret_cast<Quat *>(inQ->obj),
  inMaxDistSq
  );
  return result;
};

bool JPC_Quat_IsNormalized(
  JPC_Quat_t * self,
  float inTolerance
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  bool result = selfCpp->IsNormalized(
  inTolerance
  );
  return result;
};

float JPC_Quat_Length(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->Length();
  return result;
};

float JPC_Quat_LengthSq(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->LengthSq();
  return result;
};

JPC_Quat_t * JPC_Quat_Normalized(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  Quat resultValue = selfCpp->Normalized();
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

JPC_Quat_t * JPC_Quat_sEulerAngles(
  const JPC_Vec3_t * inInput
) {
  Quat resultValue = Quat::sEulerAngles(
  *reinterpret_cast<Vec3 *>(inInput->obj)
  );
  Quat* result = new Quat(resultValue);
  return reinterpret_cast<JPC_Quat_t *>(result);
};

const JPC_Vec3_t * JPC_Quat_GetEulerAngles(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 resultValue = selfCpp->GetEulerAngles();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

float JPC_Quat_GetX(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->GetX();
  return result;
};

float JPC_Quat_GetY(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->GetY();
  return result;
};

float JPC_Quat_GetZ(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->GetZ();
  return result;
};

float JPC_Quat_GetW(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->GetW();
  return result;
};

const JPC_Vec3_t * JPC_Quat_GetXYZ(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 resultValue = selfCpp->GetXYZ();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

void JPC_Quat_SetX(
  JPC_Quat_t * self,
  float inX
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  
  selfCpp->SetX(
  inX
  );
};

void JPC_Quat_SetY(
  JPC_Quat_t * self,
  float inY
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  
  selfCpp->SetY(
  inY
  );
};

void JPC_Quat_SetZ(
  JPC_Quat_t * self,
  float inZ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  
  selfCpp->SetZ(
  inZ
  );
};

void JPC_Quat_SetW(
  JPC_Quat_t * self,
  float inW
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  
  selfCpp->SetW(
  inW
  );
};

void JPC_Quat_Set(
  JPC_Quat_t * self,
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

const JPC_Vec3_t * JPC_Quat_InverseRotate(
  JPC_Quat_t * self,
  const JPC_Vec3_t * inV
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 resultValue = selfCpp->InverseRotate(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_Vec3_t * JPC_Quat_RotateAxisX(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 resultValue = selfCpp->RotateAxisX();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_Vec3_t * JPC_Quat_RotateAxisY(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 resultValue = selfCpp->RotateAxisY();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_Vec3_t * JPC_Quat_RotateAxisZ(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 resultValue = selfCpp->RotateAxisZ();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

float JPC_Quat_Dot(
  JPC_Quat_t * self,
  const JPC_Quat_t * inQ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->Dot(
  *reinterpret_cast<Quat *>(inQ->obj)
  );
  return result;
};

const JPC_Quat_t * JPC_Quat_Conjugated(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->Conjugated();
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JPC_Quat_t *>(result);
};

const JPC_Quat_t * JPC_Quat_Inversed(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->Inversed();
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JPC_Quat_t *>(result);
};

const JPC_Quat_t * JPC_Quat_EnsureWPositive(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->EnsureWPositive();
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JPC_Quat_t *>(result);
};

const JPC_Quat_t * JPC_Quat_GetPerpendicular(
  JPC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->GetPerpendicular();
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JPC_Quat_t *>(result);
};

float JPC_Quat_GetRotationAngle(
  JPC_Quat_t * self,
  const JPC_Vec3_t * inAxis
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->GetRotationAngle(
  *reinterpret_cast<Vec3 *>(inAxis->obj)
  );
  return result;
};

const JPC_Quat_t * JPC_Quat_GetTwist(
  JPC_Quat_t * self,
  const JPC_Vec3_t * inAxis
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->GetTwist(
  *reinterpret_cast<Vec3 *>(inAxis->obj)
  );
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JPC_Quat_t *>(result);
};

void JPC_Quat_GetSwingTwist(
  JPC_Quat_t * self,
  JPC_Quat_t * outSwing,
  JPC_Quat_t * outTwist
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  
  selfCpp->GetSwingTwist(
  *reinterpret_cast<Quat *>(outSwing->obj),
  *reinterpret_cast<Quat *>(outTwist->obj)
  );
};

const JPC_Quat_t * JPC_Quat_LERP(
  JPC_Quat_t * self,
  const JPC_Quat_t * inDestination,
  float inFraction
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->LERP(
  *reinterpret_cast<Quat *>(inDestination->obj),
  inFraction
  );
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JPC_Quat_t *>(result);
};

const JPC_Quat_t * JPC_Quat_SLERP(
  JPC_Quat_t * self,
  const JPC_Quat_t * inDestination,
  float inFraction
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat resultValue = selfCpp->SLERP(
  *reinterpret_cast<Quat *>(inDestination->obj),
  inFraction
  );
  const Quat* result = new Quat(resultValue);
  return reinterpret_cast<const JPC_Quat_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

