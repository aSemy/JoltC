#include "JoltC/JPC_Vec3.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Vec3_t * JPC_Vec3_new_0() {
  JPC_Vec3_t * cInstance = new JPC_Vec3_t();
  Vec3 * cppInstance = new Vec3();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_Vec3_t * JPC_Vec3_new_1(
  const JPC_Float3_t * inV
) {
  JPC_Vec3_t * cInstance = new JPC_Vec3_t();
  Vec3 * cppInstance = new Vec3(
    *reinterpret_cast<Float3 *>(inV->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_Vec3_t * JPC_Vec3_new_2(
  float inX,
  float inY,
  float inZ
) {
  JPC_Vec3_t * cInstance = new JPC_Vec3_t();
  Vec3 * cppInstance = new Vec3(
    inX,
    inY,
    inZ
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Vec3_t * JPC_Vec3_sZero() {
  Vec3 resultValue = Vec3::sZero();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Vec3_sAxisX() {
  Vec3 resultValue = Vec3::sAxisX();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Vec3_sAxisY() {
  Vec3 resultValue = Vec3::sAxisY();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Vec3_sAxisZ() {
  Vec3 resultValue = Vec3::sAxisZ();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Vec3_sReplicate(
  float inValue
) {
  Vec3 resultValue = Vec3::sReplicate(
  inValue
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Vec3_sMin(
  const JPC_Vec3_t * inLHS,
  const JPC_Vec3_t * inRHS
) {
  Vec3 resultValue = Vec3::sMin(
  *reinterpret_cast<Vec3 *>(inLHS->obj),
  *reinterpret_cast<Vec3 *>(inRHS->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Vec3_sMax(
  const JPC_Vec3_t * inLHS,
  const JPC_Vec3_t * inRHS
) {
  Vec3 resultValue = Vec3::sMax(
  *reinterpret_cast<Vec3 *>(inLHS->obj),
  *reinterpret_cast<Vec3 *>(inRHS->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Vec3_sClamp(
  const JPC_Vec3_t * inValue,
  const JPC_Vec3_t * inMin,
  const JPC_Vec3_t * inMax
) {
  Vec3 resultValue = Vec3::sClamp(
  *reinterpret_cast<Vec3 *>(inValue->obj),
  *reinterpret_cast<Vec3 *>(inMin->obj),
  *reinterpret_cast<Vec3 *>(inMax->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Vec3_sUnitSpherical(
  float inTheta,
  float inPhi
) {
  Vec3 resultValue = Vec3::sUnitSpherical(
  inTheta,
  inPhi
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

float JPC_Vec3_GetComponent(
  JPC_Vec3_t * self,
  unsigned long inCoordinate
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->operator[](
  inCoordinate
  );
  return result;
};

bool JPC_Vec3_Equals(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  bool result = selfCpp->operator==(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  return result;
};

bool JPC_Vec3_NotEquals(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  bool result = selfCpp->operator!=(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  return result;
};

float JPC_Vec3_LengthSq(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->LengthSq();
  return result;
};

float JPC_Vec3_Length(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->Length();
  return result;
};

JPC_Vec3_t * JPC_Vec3_Normalized(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3 resultValue = selfCpp->Normalized();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Vec3_NormalizedOr(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inZeroValue
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3 resultValue = selfCpp->NormalizedOr(
  *reinterpret_cast<Vec3 *>(inZeroValue->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Vec3_GetNormalizedPerpendicular(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3 resultValue = selfCpp->GetNormalizedPerpendicular();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

float JPC_Vec3_GetX(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->GetX();
  return result;
};

float JPC_Vec3_GetY(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->GetY();
  return result;
};

float JPC_Vec3_GetZ(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->GetZ();
  return result;
};

void JPC_Vec3_SetX(
  JPC_Vec3_t * self,
  float inX
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  
  selfCpp->SetX(
  inX
  );
};

void JPC_Vec3_SetY(
  JPC_Vec3_t * self,
  float inY
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  
  selfCpp->SetY(
  inY
  );
};

void JPC_Vec3_SetZ(
  JPC_Vec3_t * self,
  float inZ
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  
  selfCpp->SetZ(
  inZ
  );
};

void JPC_Vec3_Set(
  JPC_Vec3_t * self,
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

void JPC_Vec3_SetComponent(
  JPC_Vec3_t * self,
  unsigned long inCoordinate,
  float inValue
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  
  selfCpp->SetComponent(
  inCoordinate,
  inValue
  );
};

bool JPC_Vec3_IsNearZero(
  JPC_Vec3_t * self,
  float inMaxDistSq
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  bool result = selfCpp->IsNearZero(
  inMaxDistSq
  );
  return result;
};

bool JPC_Vec3_IsClose(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inV,
  float inMaxDistSq
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  bool result = selfCpp->IsClose(
  *reinterpret_cast<Vec3 *>(inV->obj),
  inMaxDistSq
  );
  return result;
};

bool JPC_Vec3_IsNormalized(
  JPC_Vec3_t * self,
  float inTolerance
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  bool result = selfCpp->IsNormalized(
  inTolerance
  );
  return result;
};

long JPC_Vec3_GetLowestComponentIndex(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  long result = selfCpp->GetLowestComponentIndex();
  return result;
};

long JPC_Vec3_GetHighestComponentIndex(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  long result = selfCpp->GetHighestComponentIndex();
  return result;
};

const JPC_Vec3_t * JPC_Vec3_Abs(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 resultValue = selfCpp->Abs();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_Vec3_t * JPC_Vec3_Reciprocal(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 resultValue = selfCpp->Reciprocal();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_Vec3_t * JPC_Vec3_Cross(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inRHS
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 resultValue = selfCpp->Cross(
  *reinterpret_cast<Vec3 *>(inRHS->obj)
  );
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

float JPC_Vec3_Dot(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inRHS
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->Dot(
  *reinterpret_cast<Vec3 *>(inRHS->obj)
  );
  return result;
};

JPC_Vec3_t * JPC_Vec3_Add(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3& resultRef = selfCpp->operator+=(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  Vec3 * result = &resultRef;
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Vec3_Sub(
  JPC_Vec3_t * self,
  const JPC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3& resultRef = selfCpp->operator-=(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  Vec3 * result = &resultRef;
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Vec3_Mul(
  JPC_Vec3_t * self,
  float inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3& resultRef = selfCpp->operator*=(
  inV
  );
  Vec3 * result = &resultRef;
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

JPC_Vec3_t * JPC_Vec3_Div(
  JPC_Vec3_t * self,
  float inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3& resultRef = selfCpp->operator/=(
  inV
  );
  Vec3 * result = &resultRef;
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

float JPC_Vec3_ReduceMin(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->ReduceMin();
  return result;
};

float JPC_Vec3_ReduceMax(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->ReduceMax();
  return result;
};

const JPC_Vec3_t * JPC_Vec3_Sqrt(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 resultValue = selfCpp->Sqrt();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

const JPC_Vec3_t * JPC_Vec3_GetSign(
  JPC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3 resultValue = selfCpp->GetSign();
  const Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<const JPC_Vec3_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

