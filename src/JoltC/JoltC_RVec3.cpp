#include "JoltC/JoltC_RVec3.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RVec3_t * JoltC_RVec3_new_0() {
  JoltC_RVec3_t * cInstance = new JoltC_RVec3_t();
  RVec3 * cppInstance = new RVec3();
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_RVec3_t * JoltC_RVec3_new_1(
  double inX,
  double inY,
  double inZ
) {
  JoltC_RVec3_t * cInstance = new JoltC_RVec3_t();
  RVec3 * cppInstance = new RVec3(
    inX,
    inY,
    inZ
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

JoltC_RVec3_t * JoltC_RVec3_sZero() {
  static RVec3 resultValue = RVec3::sZero();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_sAxisX() {
  static RVec3 resultValue = RVec3::sAxisX();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_sAxisY() {
  static RVec3 resultValue = RVec3::sAxisY();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_sAxisZ() {
  static RVec3 resultValue = RVec3::sAxisZ();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_sReplicate(
  double inValue
) {
  static RVec3 resultValue = RVec3::sReplicate(
    inValue
  );
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_sMin(
  JoltC_RVec3_t * inLHS,
  JoltC_RVec3_t * inRHS
) {
  static RVec3 resultValue = RVec3::sMin(
    *reinterpret_cast<RVec3 *>(inLHS->obj),
    *reinterpret_cast<RVec3 *>(inRHS->obj)
  );
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_sMax(
  JoltC_RVec3_t * inLHS,
  JoltC_RVec3_t * inRHS
) {
  static RVec3 resultValue = RVec3::sMax(
    *reinterpret_cast<RVec3 *>(inLHS->obj),
    *reinterpret_cast<RVec3 *>(inRHS->obj)
  );
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_sClamp(
  JoltC_RVec3_t * inValue,
  JoltC_RVec3_t * inMin,
  JoltC_RVec3_t * inMax
) {
  static RVec3 resultValue = RVec3::sClamp(
    *reinterpret_cast<RVec3 *>(inValue->obj),
    *reinterpret_cast<RVec3 *>(inMin->obj),
    *reinterpret_cast<RVec3 *>(inMax->obj)
  );
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

double JoltC_RVec3_GetComponent(
  JoltC_RVec3_t * self,
  unsigned long inCoordinate
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->operator[](
    inCoordinate
  );
  return result;
};

bool JoltC_RVec3_Equals(
  JoltC_RVec3_t * self,
  JoltC_RVec3_t * inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  bool result = selfCpp->operator==(
    *reinterpret_cast<RVec3 *>(inV->obj)
  );
  return result;
};

bool JoltC_RVec3_NotEquals(
  JoltC_RVec3_t * self,
  JoltC_RVec3_t * inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  bool result = selfCpp->operator!=(
    *reinterpret_cast<RVec3 *>(inV->obj)
  );
  return result;
};

double JoltC_RVec3_LengthSq(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->LengthSq();
  return result;
};

double JoltC_RVec3_Length(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->Length();
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_Normalized(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  static RVec3 resultValue = selfCpp->Normalized();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

double JoltC_RVec3_GetX(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->GetX();
  return result;
};

double JoltC_RVec3_GetY(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->GetY();
  return result;
};

double JoltC_RVec3_GetZ(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->GetZ();
  return result;
};

void JoltC_RVec3_SetX(
  JoltC_RVec3_t * self,
  double inX
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  
  selfCpp->SetX(
    inX
  );
};

void JoltC_RVec3_SetY(
  JoltC_RVec3_t * self,
  double inY
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  
  selfCpp->SetY(
    inY
  );
};

void JoltC_RVec3_SetZ(
  JoltC_RVec3_t * self,
  double inZ
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  
  selfCpp->SetZ(
    inZ
  );
};

void JoltC_RVec3_Set(
  JoltC_RVec3_t * self,
  double inX,
  double inY,
  double inZ
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  
  selfCpp->Set(
    inX,
    inY,
    inZ
  );
};

void JoltC_RVec3_SetComponent(
  JoltC_RVec3_t * self,
  unsigned long inCoordinate,
  double inValue
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  
  selfCpp->SetComponent(
    inCoordinate,
    inValue
  );
};

bool JoltC_RVec3_IsNearZero(
  JoltC_RVec3_t * self,
  double inMaxDistSq
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  bool result = selfCpp->IsNearZero(
    inMaxDistSq
  );
  return result;
};

bool JoltC_RVec3_IsClose(
  JoltC_RVec3_t * self,
  JoltC_RVec3_t * inV,
  double inMaxDistSq
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  bool result = selfCpp->IsClose(
    *reinterpret_cast<RVec3 *>(inV->obj),
    inMaxDistSq
  );
  return result;
};

bool JoltC_RVec3_IsNormalized(
  JoltC_RVec3_t * self,
  double inTolerance
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  bool result = selfCpp->IsNormalized(
    inTolerance
  );
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_Abs(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  static RVec3 resultValue = selfCpp->Abs();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_Reciprocal(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  static RVec3 resultValue = selfCpp->Reciprocal();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_Cross(
  JoltC_RVec3_t * self,
  JoltC_RVec3_t * inRHS
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  static RVec3 resultValue = selfCpp->Cross(
    *reinterpret_cast<RVec3 *>(inRHS->obj)
  );
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

double JoltC_RVec3_Dot(
  JoltC_RVec3_t * self,
  JoltC_RVec3_t * inRHS
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->Dot(
    *reinterpret_cast<RVec3 *>(inRHS->obj)
  );
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_Add(
  JoltC_RVec3_t * self,
  JoltC_Vec3_t * inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3* resultRef = &selfCpp->operator+=(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_Sub(
  JoltC_RVec3_t * self,
  JoltC_Vec3_t * inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3* resultRef = &selfCpp->operator-=(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_Mul(
  JoltC_RVec3_t * self,
  double inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3* resultRef = &selfCpp->operator*=(
    inV
  );
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_Div(
  JoltC_RVec3_t * self,
  double inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3* resultRef = &selfCpp->operator/=(
    inV
  );
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_Sqrt(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  static RVec3 resultValue = selfCpp->Sqrt();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

JoltC_RVec3_t * JoltC_RVec3_GetSign(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  static RVec3 resultValue = selfCpp->GetSign();
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

