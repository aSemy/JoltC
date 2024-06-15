#include "JoltC/JoltC_Vec3.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `Vec3` instance.
 */
JoltC_Vec3_t * JoltC_Vec3_new_0() {
  JoltC_Vec3_t * cInstance = new JoltC_Vec3_t();
  Vec3 * cppInstance = new Vec3();
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `Vec3` instance.
 */
JoltC_Vec3_t * JoltC_Vec3_new_1(
  JoltC_Float3_t * inV
) {
  const Float3 * inVCpp = static_cast<const Float3 *>(inV->obj);
  JoltC_Vec3_t * cInstance = new JoltC_Vec3_t();
  Vec3 * cppInstance = new Vec3(
    *inVCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

/**
  Construct a new `Vec3` instance.
 */
JoltC_Vec3_t * JoltC_Vec3_new_2(
  float inX,
  float inY,
  float inZ
) {
  JoltC_Vec3_t * cInstance = new JoltC_Vec3_t();
  Vec3 * cppInstance = new Vec3(
    inX,
    inY,
    inZ
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_Vec3_destroy(
  JoltC_Vec3_t * self
){
  if (self == NULL) return;
  delete static_cast<Vec3 *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_Vec3_t * JoltC_Vec3_sZero() {
  Vec3 * resultPtr = new Vec3();
  *resultPtr = Vec3::sZero();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_sAxisX() {
  Vec3 * resultPtr = new Vec3();
  *resultPtr = Vec3::sAxisX();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_sAxisY() {
  Vec3 * resultPtr = new Vec3();
  *resultPtr = Vec3::sAxisY();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_sAxisZ() {
  Vec3 * resultPtr = new Vec3();
  *resultPtr = Vec3::sAxisZ();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_sReplicate(
  float inValue
) {
  Vec3 * resultPtr = new Vec3();
  *resultPtr = Vec3::sReplicate(
    inValue
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_sMin(
  JoltC_Vec3_t * inLHS,
  JoltC_Vec3_t * inRHS
) {
  const Vec3 * inLHSCpp = static_cast<const Vec3 *>(inLHS->obj);
  const Vec3 * inRHSCpp = static_cast<const Vec3 *>(inRHS->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = Vec3::sMin(
    *inLHSCpp,
    *inRHSCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_sMax(
  JoltC_Vec3_t * inLHS,
  JoltC_Vec3_t * inRHS
) {
  const Vec3 * inLHSCpp = static_cast<const Vec3 *>(inLHS->obj);
  const Vec3 * inRHSCpp = static_cast<const Vec3 *>(inRHS->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = Vec3::sMax(
    *inLHSCpp,
    *inRHSCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_sClamp(
  JoltC_Vec3_t * inValue,
  JoltC_Vec3_t * inMin,
  JoltC_Vec3_t * inMax
) {
  const Vec3 * inValueCpp = static_cast<const Vec3 *>(inValue->obj);
  const Vec3 * inMinCpp = static_cast<const Vec3 *>(inMin->obj);
  const Vec3 * inMaxCpp = static_cast<const Vec3 *>(inMax->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = Vec3::sClamp(
    *inValueCpp,
    *inMinCpp,
    *inMaxCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_sUnitSpherical(
  float inTheta,
  float inPhi
) {
  Vec3 * resultPtr = new Vec3();
  *resultPtr = Vec3::sUnitSpherical(
    inTheta,
    inPhi
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_Vec3_GetComponent(
  JoltC_Vec3_t * self,
  unsigned long inCoordinate
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  return selfCpp->operator[](
    inCoordinate
  );
}

bool JoltC_Vec3_Equals(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  return selfCpp->operator==(
    *inVCpp
  );
}

bool JoltC_Vec3_NotEquals(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  return selfCpp->operator!=(
    *inVCpp
  );
}

float JoltC_Vec3_LengthSq(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  return selfCpp->LengthSq();
}

float JoltC_Vec3_Length(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  return selfCpp->Length();
}

JoltC_Vec3_t * JoltC_Vec3_Normalized(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->Normalized();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_NormalizedOr(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inZeroValue
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 * inZeroValueCpp = static_cast<const Vec3 *>(inZeroValue->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->NormalizedOr(
    *inZeroValueCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_GetNormalizedPerpendicular(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetNormalizedPerpendicular();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_Vec3_GetX(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  return selfCpp->GetX();
}

float JoltC_Vec3_GetY(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  return selfCpp->GetY();
}

float JoltC_Vec3_GetZ(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  return selfCpp->GetZ();
}

void JoltC_Vec3_SetX(
  JoltC_Vec3_t * self,
  float inX
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  selfCpp->SetX(
    inX
  );
}

void JoltC_Vec3_SetY(
  JoltC_Vec3_t * self,
  float inY
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  selfCpp->SetY(
    inY
  );
}

void JoltC_Vec3_SetZ(
  JoltC_Vec3_t * self,
  float inZ
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  selfCpp->SetZ(
    inZ
  );
}

void JoltC_Vec3_Set(
  JoltC_Vec3_t * self,
  float inX,
  float inY,
  float inZ
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  selfCpp->Set(
    inX,
    inY,
    inZ
  );
}

void JoltC_Vec3_SetComponent(
  JoltC_Vec3_t * self,
  unsigned long inCoordinate,
  float inValue
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  selfCpp->SetComponent(
    inCoordinate,
    inValue
  );
}

bool JoltC_Vec3_IsNearZero(
  JoltC_Vec3_t * self,
  float inMaxDistSq
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  return selfCpp->IsNearZero(
    inMaxDistSq
  );
}

bool JoltC_Vec3_IsClose(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inV,
  float inMaxDistSq
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  return selfCpp->IsClose(
    *inVCpp,
    inMaxDistSq
  );
}

bool JoltC_Vec3_IsNormalized(
  JoltC_Vec3_t * self,
  float inTolerance
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  return selfCpp->IsNormalized(
    inTolerance
  );
}

long JoltC_Vec3_GetLowestComponentIndex(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  return selfCpp->GetLowestComponentIndex();
}

long JoltC_Vec3_GetHighestComponentIndex(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  return selfCpp->GetHighestComponentIndex();
}

JoltC_Vec3_t * JoltC_Vec3_Abs(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->Abs();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_Reciprocal(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->Reciprocal();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_Cross(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inRHS
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 * inRHSCpp = static_cast<const Vec3 *>(inRHS->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->Cross(
    *inRHSCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_Vec3_Dot(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inRHS
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 * inRHSCpp = static_cast<const Vec3 *>(inRHS->obj);
  return selfCpp->Dot(
    *inRHSCpp
  );
}

JoltC_Vec3_t * JoltC_Vec3_Add(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  Vec3* resultRef = &selfCpp->operator+=(
    *inVCpp
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_Sub(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 * inVCpp = static_cast<const Vec3 *>(inV->obj);
  Vec3* resultRef = &selfCpp->operator-=(
    *inVCpp
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_Mul(
  JoltC_Vec3_t * self,
  float inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3* resultRef = &selfCpp->operator*=(
    inV
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_Div(
  JoltC_Vec3_t * self,
  float inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3* resultRef = &selfCpp->operator/=(
    inV
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

float JoltC_Vec3_ReduceMin(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  return selfCpp->ReduceMin();
}

float JoltC_Vec3_ReduceMax(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  return selfCpp->ReduceMax();
}

JoltC_Vec3_t * JoltC_Vec3_Sqrt(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->Sqrt();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_Vec3_GetSign(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetSign();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion


#ifdef __cplusplus
}
#endif
