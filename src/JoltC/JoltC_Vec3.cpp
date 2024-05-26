#include "JoltC/JoltC_Vec3.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Vec3_t * JoltC_Vec3_new_0() {
  JoltC_Vec3_t * cInstance = new JoltC_Vec3_t();
  Vec3 * cppInstance = new Vec3();
  cInstance->obj = cppInstance;
  return cInstance;
};

JoltC_Vec3_t * JoltC_Vec3_new_1(
  const JoltC_Float3_t * inV
) {
  JoltC_Vec3_t * cInstance = new JoltC_Vec3_t();
  Vec3 * cppInstance = new Vec3(
    *reinterpret_cast<Float3 *>(inV->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

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

//region functions

JoltC_Vec3_t * JoltC_Vec3_sZero() {
  Vec3 resultValue = Vec3::sZero();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_Vec3_sAxisX() {
  Vec3 resultValue = Vec3::sAxisX();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_Vec3_sAxisY() {
  Vec3 resultValue = Vec3::sAxisY();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_Vec3_sAxisZ() {
  Vec3 resultValue = Vec3::sAxisZ();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_Vec3_sReplicate(
  float inValue
) {
  Vec3 resultValue = Vec3::sReplicate(
  inValue
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_Vec3_sMin(
  const JoltC_Vec3_t * inLHS,
  const JoltC_Vec3_t * inRHS
) {
  Vec3 resultValue = Vec3::sMin(
  *reinterpret_cast<Vec3 *>(inLHS->obj),
  *reinterpret_cast<Vec3 *>(inRHS->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_Vec3_sMax(
  const JoltC_Vec3_t * inLHS,
  const JoltC_Vec3_t * inRHS
) {
  Vec3 resultValue = Vec3::sMax(
  *reinterpret_cast<Vec3 *>(inLHS->obj),
  *reinterpret_cast<Vec3 *>(inRHS->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_Vec3_sClamp(
  const JoltC_Vec3_t * inValue,
  const JoltC_Vec3_t * inMin,
  const JoltC_Vec3_t * inMax
) {
  Vec3 resultValue = Vec3::sClamp(
  *reinterpret_cast<Vec3 *>(inValue->obj),
  *reinterpret_cast<Vec3 *>(inMin->obj),
  *reinterpret_cast<Vec3 *>(inMax->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_Vec3_sUnitSpherical(
  float inTheta,
  float inPhi
) {
  Vec3 resultValue = Vec3::sUnitSpherical(
  inTheta,
  inPhi
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

float JoltC_Vec3_GetComponent(
  JoltC_Vec3_t * self,
  unsigned long inCoordinate
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->operator[](
  inCoordinate
  );
  return result;
};

bool JoltC_Vec3_Equals(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  bool result = selfCpp->operator==(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  return result;
};

bool JoltC_Vec3_NotEquals(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  bool result = selfCpp->operator!=(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  return result;
};

float JoltC_Vec3_LengthSq(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->LengthSq();
  return result;
};

float JoltC_Vec3_Length(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->Length();
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_Normalized(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3 resultValue = selfCpp->Normalized();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_Vec3_NormalizedOr(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inZeroValue
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3 resultValue = selfCpp->NormalizedOr(
  *reinterpret_cast<Vec3 *>(inZeroValue->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_Vec3_GetNormalizedPerpendicular(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3 resultValue = selfCpp->GetNormalizedPerpendicular();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

float JoltC_Vec3_GetX(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->GetX();
  return result;
};

float JoltC_Vec3_GetY(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->GetY();
  return result;
};

float JoltC_Vec3_GetZ(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->GetZ();
  return result;
};

void JoltC_Vec3_SetX(
  JoltC_Vec3_t * self,
  float inX
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  
  selfCpp->SetX(
  inX
  );
};

void JoltC_Vec3_SetY(
  JoltC_Vec3_t * self,
  float inY
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  
  selfCpp->SetY(
  inY
  );
};

void JoltC_Vec3_SetZ(
  JoltC_Vec3_t * self,
  float inZ
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  
  selfCpp->SetZ(
  inZ
  );
};

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
};

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
};

bool JoltC_Vec3_IsNearZero(
  JoltC_Vec3_t * self,
  float inMaxDistSq
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  bool result = selfCpp->IsNearZero(
  inMaxDistSq
  );
  return result;
};

bool JoltC_Vec3_IsClose(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inV,
  float inMaxDistSq
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  bool result = selfCpp->IsClose(
  *reinterpret_cast<Vec3 *>(inV->obj),
  inMaxDistSq
  );
  return result;
};

bool JoltC_Vec3_IsNormalized(
  JoltC_Vec3_t * self,
  float inTolerance
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  bool result = selfCpp->IsNormalized(
  inTolerance
  );
  return result;
};

long JoltC_Vec3_GetLowestComponentIndex(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  long result = selfCpp->GetLowestComponentIndex();
  return result;
};

long JoltC_Vec3_GetHighestComponentIndex(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  long result = selfCpp->GetHighestComponentIndex();
  return result;
};

const JoltC_Vec3_t * JoltC_Vec3_Abs(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 resultValue = selfCpp->Abs();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

const JoltC_Vec3_t * JoltC_Vec3_Reciprocal(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 resultValue = selfCpp->Reciprocal();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

const JoltC_Vec3_t * JoltC_Vec3_Cross(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inRHS
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 resultValue = selfCpp->Cross(
  *reinterpret_cast<Vec3 *>(inRHS->obj)
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

float JoltC_Vec3_Dot(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inRHS
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->Dot(
  *reinterpret_cast<Vec3 *>(inRHS->obj)
  );
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_Add(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3& resultRef = selfCpp->operator+=(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  Vec3 * result = &resultRef;
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_Vec3_Sub(
  JoltC_Vec3_t * self,
  const JoltC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3& resultRef = selfCpp->operator-=(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  Vec3 * result = &resultRef;
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_Vec3_Mul(
  JoltC_Vec3_t * self,
  float inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3& resultRef = selfCpp->operator*=(
  inV
  );
  Vec3 * result = &resultRef;
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

JoltC_Vec3_t * JoltC_Vec3_Div(
  JoltC_Vec3_t * self,
  float inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3& resultRef = selfCpp->operator/=(
  inV
  );
  Vec3 * result = &resultRef;
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

float JoltC_Vec3_ReduceMin(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->ReduceMin();
  return result;
};

float JoltC_Vec3_ReduceMax(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->ReduceMax();
  return result;
};

const JoltC_Vec3_t * JoltC_Vec3_Sqrt(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 resultValue = selfCpp->Sqrt();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

const JoltC_Vec3_t * JoltC_Vec3_GetSign(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 resultValue = selfCpp->GetSign();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JoltC_Vec3_t *>(result);
};

//endregion

#ifdef __cplusplus
}
#endif

