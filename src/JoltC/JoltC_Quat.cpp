#include "JoltC/JoltC_Quat.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `Quat` instance.
 */
JoltC_Quat_t * JoltC_Quat_new_0() {
  JoltC_Quat_t * cInstance = new JoltC_Quat_t();
  Quat * cppInstance = new Quat();
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `Quat` instance.
 */
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
  Quat * resultPtr = new Quat();
  *resultPtr = Quat::sZero();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_Quat_sIdentity() {
  Quat * resultPtr = new Quat();
  *resultPtr = Quat::sIdentity();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_Quat_sRotation(
  JoltC_Vec3_t * inRotation,
  float inAngle
) {
  const Vec3 * inRotationCpp = static_cast<const Vec3 *>(inRotation->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = Quat::sRotation(
    *inRotationCpp,
    inAngle
  );
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_Quat_sFromTo(
  JoltC_Vec3_t * inFrom,
  JoltC_Vec3_t * inTo
) {
  const Vec3 * inFromCpp = static_cast<const Vec3 *>(inFrom->obj);
  const Vec3 * inToCpp = static_cast<const Vec3 *>(inTo->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = Quat::sFromTo(
    *inFromCpp,
    *inToCpp
  );
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

bool JoltC_Quat_Equals(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inQ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat * inQCpp = static_cast<const Quat *>(inQ->obj);
  return selfCpp->operator==(
    *inQCpp
  );
}

bool JoltC_Quat_NotEquals(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inQ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat * inQCpp = static_cast<const Quat *>(inQ->obj);
  return selfCpp->operator!=(
    *inQCpp
  );
}

bool JoltC_Quat_IsClose(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inQ,
  float inMaxDistSq
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat * inQCpp = static_cast<const Quat *>(inQ->obj);
  return selfCpp->IsClose(
    *inQCpp,
    inMaxDistSq
  );
}

bool JoltC_Quat_IsNormalized(
  JoltC_Quat_t * self,
  float inTolerance
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  return selfCpp->IsNormalized(
    inTolerance
  );
}

float JoltC_Quat_Length(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  return selfCpp->Length();
}

float JoltC_Quat_LengthSq(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  return selfCpp->LengthSq();
}

JoltC_Quat_t * JoltC_Quat_Normalized(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->Normalized();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_Quat_sEulerAngles(
  JoltC_Vec3_t * inInput
) {
  const Vec3 * inInputCpp = static_cast<const Vec3 *>(inInput->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = Quat::sEulerAngles(
    *inInputCpp
  );
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Quat_GetEulerAngles(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetEulerAngles();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_Quat_GetX(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  return selfCpp->GetX();
}

float JoltC_Quat_GetY(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  return selfCpp->GetY();
}

float JoltC_Quat_GetZ(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  return selfCpp->GetZ();
}

float JoltC_Quat_GetW(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  return selfCpp->GetW();
}

JoltC_Vec3_t * JoltC_Quat_GetXYZ(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetXYZ();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_Quat_SetX(
  JoltC_Quat_t * self,
  float inX
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  selfCpp->SetX(
    inX
  );
}

void JoltC_Quat_SetY(
  JoltC_Quat_t * self,
  float inY
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  selfCpp->SetY(
    inY
  );
}

void JoltC_Quat_SetZ(
  JoltC_Quat_t * self,
  float inZ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  selfCpp->SetZ(
    inZ
  );
}

void JoltC_Quat_SetW(
  JoltC_Quat_t * self,
  float inW
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  selfCpp->SetW(
    inW
  );
}

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
}

JoltC_Vec3_t * JoltC_Quat_InverseRotate(
  JoltC_Quat_t * self,
  JoltC_Vec3_t * inV
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->InverseRotate(
    *inVCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Quat_RotateAxisX(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->RotateAxisX();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Quat_RotateAxisY(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->RotateAxisY();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Quat_RotateAxisZ(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->RotateAxisZ();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_Quat_Dot(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inQ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat * inQCpp = static_cast<const Quat *>(inQ->obj);
  return selfCpp->Dot(
    *inQCpp
  );
}

JoltC_Quat_t * JoltC_Quat_Conjugated(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->Conjugated();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_Quat_Inversed(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->Inversed();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_Quat_EnsureWPositive(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->EnsureWPositive();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_Quat_GetPerpendicular(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetPerpendicular();
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_Quat_GetRotationAngle(
  JoltC_Quat_t * self,
  JoltC_Vec3_t * inAxis
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 * inAxisCpp = static_cast<const Vec3 *>(inAxis->obj);
  return selfCpp->GetRotationAngle(
    *inAxisCpp
  );
}

JoltC_Quat_t * JoltC_Quat_GetTwist(
  JoltC_Quat_t * self,
  JoltC_Vec3_t * inAxis
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Vec3 * inAxisCpp = static_cast<const Vec3 *>(inAxis->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->GetTwist(
    *inAxisCpp
  );
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_Quat_GetSwingTwist(
  JoltC_Quat_t * self,
  JoltC_Quat_t * outSwing,
  JoltC_Quat_t * outTwist
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  Quat * outSwingCpp = static_cast<Quat *>(outSwing->obj);
  Quat * outTwistCpp = static_cast<Quat *>(outTwist->obj);
  selfCpp->GetSwingTwist(
    *outSwingCpp,
    *outTwistCpp
  );
}

JoltC_Quat_t * JoltC_Quat_LERP(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inDestination,
  float inFraction
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat * inDestinationCpp = static_cast<const Quat *>(inDestination->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->LERP(
    *inDestinationCpp,
    inFraction
  );
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Quat_t * JoltC_Quat_SLERP(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inDestination,
  float inFraction
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  const Quat * inDestinationCpp = static_cast<const Quat *>(inDestination->obj);
  Quat * resultPtr = new Quat();
  *resultPtr = selfCpp->SLERP(
    *inDestinationCpp,
    inFraction
  );
  JoltC_Quat_t * result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

#ifdef __cplusplus
}
#endif

