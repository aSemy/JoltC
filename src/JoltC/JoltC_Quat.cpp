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
  static Quat resultValue = Quat::sZero();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Quat_t * JoltC_Quat_sIdentity() {
  static Quat resultValue = Quat::sIdentity();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Quat_t * JoltC_Quat_sRotation(
  JoltC_Vec3_t * inRotation,
  float inAngle
) {
  static Quat resultValue = Quat::sRotation(
    *reinterpret_cast<Vec3 *>(inRotation->obj),
    inAngle
  );
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Quat_t * JoltC_Quat_sFromTo(
  JoltC_Vec3_t * inFrom,
  JoltC_Vec3_t * inTo
) {
  static Quat resultValue = Quat::sFromTo(
    *reinterpret_cast<Vec3 *>(inFrom->obj),
    *reinterpret_cast<Vec3 *>(inTo->obj)
  );
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

bool JoltC_Quat_Equals(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inQ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  bool result = selfCpp->operator==(
    *reinterpret_cast<Quat *>(inQ->obj)
  );
  return result;
};

bool JoltC_Quat_NotEquals(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inQ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  bool result = selfCpp->operator!=(
    *reinterpret_cast<Quat *>(inQ->obj)
  );
  return result;
};

bool JoltC_Quat_IsClose(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inQ,
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
  static Quat resultValue = selfCpp->Normalized();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Quat_t * JoltC_Quat_sEulerAngles(
  JoltC_Vec3_t * inInput
) {
  static Quat resultValue = Quat::sEulerAngles(
    *reinterpret_cast<Vec3 *>(inInput->obj)
  );
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_Quat_GetEulerAngles(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  static Vec3 resultValue = selfCpp->GetEulerAngles();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
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

JoltC_Vec3_t * JoltC_Quat_GetXYZ(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  static Vec3 resultValue = selfCpp->GetXYZ();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
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

JoltC_Vec3_t * JoltC_Quat_InverseRotate(
  JoltC_Quat_t * self,
  JoltC_Vec3_t * inV
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  static Vec3 resultValue = selfCpp->InverseRotate(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_Quat_RotateAxisX(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  static Vec3 resultValue = selfCpp->RotateAxisX();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_Quat_RotateAxisY(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  static Vec3 resultValue = selfCpp->RotateAxisY();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Vec3_t * JoltC_Quat_RotateAxisZ(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  static Vec3 resultValue = selfCpp->RotateAxisZ();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

float JoltC_Quat_Dot(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inQ
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->Dot(
    *reinterpret_cast<Quat *>(inQ->obj)
  );
  return result;
};

JoltC_Quat_t * JoltC_Quat_Conjugated(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  static Quat resultValue = selfCpp->Conjugated();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Quat_t * JoltC_Quat_Inversed(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  static Quat resultValue = selfCpp->Inversed();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Quat_t * JoltC_Quat_EnsureWPositive(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  static Quat resultValue = selfCpp->EnsureWPositive();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Quat_t * JoltC_Quat_GetPerpendicular(
  JoltC_Quat_t * self
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  static Quat resultValue = selfCpp->GetPerpendicular();
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

float JoltC_Quat_GetRotationAngle(
  JoltC_Quat_t * self,
  JoltC_Vec3_t * inAxis
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  float result = selfCpp->GetRotationAngle(
    *reinterpret_cast<Vec3 *>(inAxis->obj)
  );
  return result;
};

JoltC_Quat_t * JoltC_Quat_GetTwist(
  JoltC_Quat_t * self,
  JoltC_Vec3_t * inAxis
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  static Quat resultValue = selfCpp->GetTwist(
    *reinterpret_cast<Vec3 *>(inAxis->obj)
  );
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
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

JoltC_Quat_t * JoltC_Quat_LERP(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inDestination,
  float inFraction
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  static Quat resultValue = selfCpp->LERP(
    *reinterpret_cast<Quat *>(inDestination->obj),
    inFraction
  );
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_Quat_t * JoltC_Quat_SLERP(
  JoltC_Quat_t * self,
  JoltC_Quat_t * inDestination,
  float inFraction
) {
  Quat * selfCpp = static_cast<Quat *>(self->obj);
  static Quat resultValue = selfCpp->SLERP(
    *reinterpret_cast<Quat *>(inDestination->obj),
    inFraction
  );
  JoltC_Quat_t* result = new JoltC_Quat_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

