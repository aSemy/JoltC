#include "JoltC/JoltC_RVec3.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `RVec3` instance.
 */
JoltC_RVec3_t * JoltC_RVec3_new_0() {
  JoltC_RVec3_t * cInstance = new JoltC_RVec3_t();
  RVec3 * cppInstance = new RVec3();
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `RVec3` instance.
 */
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
  RVec3 * resultPtr = new RVec3();
  *resultPtr = RVec3::sZero();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_RVec3_sAxisX() {
  RVec3 * resultPtr = new RVec3();
  *resultPtr = RVec3::sAxisX();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_RVec3_sAxisY() {
  RVec3 * resultPtr = new RVec3();
  *resultPtr = RVec3::sAxisY();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_RVec3_sAxisZ() {
  RVec3 * resultPtr = new RVec3();
  *resultPtr = RVec3::sAxisZ();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_RVec3_sReplicate(
  double inValue
) {
  RVec3 * resultPtr = new RVec3();
  *resultPtr = RVec3::sReplicate(
    inValue
  );
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_RVec3_sMin(
  JoltC_RVec3_t * inLHS,
  JoltC_RVec3_t * inRHS
) {
  const RVec3 * inLHSCpp = static_cast<const RVec3 *>(inLHS->obj);
  const RVec3 * inRHSCpp = static_cast<const RVec3 *>(inRHS->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = RVec3::sMin(
    *inLHSCpp,
    *inRHSCpp
  );
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_RVec3_sMax(
  JoltC_RVec3_t * inLHS,
  JoltC_RVec3_t * inRHS
) {
  const RVec3 * inLHSCpp = static_cast<const RVec3 *>(inLHS->obj);
  const RVec3 * inRHSCpp = static_cast<const RVec3 *>(inRHS->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = RVec3::sMax(
    *inLHSCpp,
    *inRHSCpp
  );
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_RVec3_sClamp(
  JoltC_RVec3_t * inValue,
  JoltC_RVec3_t * inMin,
  JoltC_RVec3_t * inMax
) {
  const RVec3 * inValueCpp = static_cast<const RVec3 *>(inValue->obj);
  const RVec3 * inMinCpp = static_cast<const RVec3 *>(inMin->obj);
  const RVec3 * inMaxCpp = static_cast<const RVec3 *>(inMax->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = RVec3::sClamp(
    *inValueCpp,
    *inMinCpp,
    *inMaxCpp
  );
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

double JoltC_RVec3_GetComponent(
  JoltC_RVec3_t * self,
  unsigned long inCoordinate
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  return selfCpp->operator[](
    inCoordinate
  );
}

bool JoltC_RVec3_Equals(
  JoltC_RVec3_t * self,
  JoltC_RVec3_t * inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  const RVec3 * inVCpp = static_cast<const RVec3 *>(inV->obj);
  return selfCpp->operator==(
    *inVCpp
  );
}

bool JoltC_RVec3_NotEquals(
  JoltC_RVec3_t * self,
  JoltC_RVec3_t * inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  const RVec3 * inVCpp = static_cast<const RVec3 *>(inV->obj);
  return selfCpp->operator!=(
    *inVCpp
  );
}

double JoltC_RVec3_LengthSq(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  return selfCpp->LengthSq();
}

double JoltC_RVec3_Length(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  return selfCpp->Length();
}

JoltC_RVec3_t * JoltC_RVec3_Normalized(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->Normalized();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

double JoltC_RVec3_GetX(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  return selfCpp->GetX();
}

double JoltC_RVec3_GetY(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  return selfCpp->GetY();
}

double JoltC_RVec3_GetZ(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  return selfCpp->GetZ();
}

void JoltC_RVec3_SetX(
  JoltC_RVec3_t * self,
  double inX
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  selfCpp->SetX(
    inX
  );
}

void JoltC_RVec3_SetY(
  JoltC_RVec3_t * self,
  double inY
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  selfCpp->SetY(
    inY
  );
}

void JoltC_RVec3_SetZ(
  JoltC_RVec3_t * self,
  double inZ
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  selfCpp->SetZ(
    inZ
  );
}

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
}

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
}

bool JoltC_RVec3_IsNearZero(
  JoltC_RVec3_t * self,
  double inMaxDistSq
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  return selfCpp->IsNearZero(
    inMaxDistSq
  );
}

bool JoltC_RVec3_IsClose(
  JoltC_RVec3_t * self,
  JoltC_RVec3_t * inV,
  double inMaxDistSq
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  const RVec3 * inVCpp = static_cast<const RVec3 *>(inV->obj);
  return selfCpp->IsClose(
    *inVCpp,
    inMaxDistSq
  );
}

bool JoltC_RVec3_IsNormalized(
  JoltC_RVec3_t * self,
  double inTolerance
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  return selfCpp->IsNormalized(
    inTolerance
  );
}

JoltC_RVec3_t * JoltC_RVec3_Abs(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->Abs();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_RVec3_Reciprocal(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->Reciprocal();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_RVec3_Cross(
  JoltC_RVec3_t * self,
  JoltC_RVec3_t * inRHS
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  const RVec3 * inRHSCpp = static_cast<const RVec3 *>(inRHS->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->Cross(
    *inRHSCpp
  );
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

double JoltC_RVec3_Dot(
  JoltC_RVec3_t * self,
  JoltC_RVec3_t * inRHS
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  const RVec3 * inRHSCpp = static_cast<const RVec3 *>(inRHS->obj);
  return selfCpp->Dot(
    *inRHSCpp
  );
}

JoltC_RVec3_t * JoltC_RVec3_Add(
  JoltC_RVec3_t * self,
  JoltC_Vec3_t * inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  RVec3* resultRef = &selfCpp->operator+=(
    *inVCpp
  );
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

JoltC_RVec3_t * JoltC_RVec3_Sub(
  JoltC_RVec3_t * self,
  JoltC_Vec3_t * inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  RVec3* resultRef = &selfCpp->operator-=(
    *inVCpp
  );
  JoltC_RVec3_t* result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

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
}

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
}

JoltC_RVec3_t * JoltC_RVec3_Sqrt(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->Sqrt();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_RVec3_GetSign(
  JoltC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetSign();
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

#ifdef __cplusplus
}
#endif

