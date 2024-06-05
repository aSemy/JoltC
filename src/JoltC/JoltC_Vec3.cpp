#include "JoltC/JoltC_Vec3.h"
#include "JoltC/JoltJS.h"

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
  JoltC_Float3_t * inV
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
  const Vec3& resultValue = Vec3::sZero();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_sAxisX() {
  const Vec3& resultValue = Vec3::sAxisX();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_sAxisY() {
  const Vec3& resultValue = Vec3::sAxisY();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_sAxisZ() {
  const Vec3& resultValue = Vec3::sAxisZ();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_sReplicate(
  float inValue
) {
  const Vec3& resultValue = Vec3::sReplicate(
    inValue
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_sMin(
  JoltC_Vec3_t * inLHS,
  JoltC_Vec3_t * inRHS
) {
  const Vec3& resultValue = Vec3::sMin(
    *reinterpret_cast<Vec3 *>(inLHS->obj),
    *reinterpret_cast<Vec3 *>(inRHS->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_sMax(
  JoltC_Vec3_t * inLHS,
  JoltC_Vec3_t * inRHS
) {
  const Vec3& resultValue = Vec3::sMax(
    *reinterpret_cast<Vec3 *>(inLHS->obj),
    *reinterpret_cast<Vec3 *>(inRHS->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_sClamp(
  JoltC_Vec3_t * inValue,
  JoltC_Vec3_t * inMin,
  JoltC_Vec3_t * inMax
) {
  const Vec3& resultValue = Vec3::sClamp(
    *reinterpret_cast<Vec3 *>(inValue->obj),
    *reinterpret_cast<Vec3 *>(inMin->obj),
    *reinterpret_cast<Vec3 *>(inMax->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_sUnitSpherical(
  float inTheta,
  float inPhi
) {
  const Vec3& resultValue = Vec3::sUnitSpherical(
    inTheta,
    inPhi
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
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
  JoltC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  bool result = selfCpp->operator==(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
  return result;
};

bool JoltC_Vec3_NotEquals(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inV
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
  const Vec3& resultValue = selfCpp->Normalized();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_NormalizedOr(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inZeroValue
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3& resultValue = selfCpp->NormalizedOr(
    *reinterpret_cast<Vec3 *>(inZeroValue->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_GetNormalizedPerpendicular(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3& resultValue = selfCpp->GetNormalizedPerpendicular();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
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
  JoltC_Vec3_t * inV,
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

JoltC_Vec3_t * JoltC_Vec3_Abs(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3& resultValue = selfCpp->Abs();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_Reciprocal(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3& resultValue = selfCpp->Reciprocal();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_Cross(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inRHS
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3& resultValue = selfCpp->Cross(
    *reinterpret_cast<Vec3 *>(inRHS->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

float JoltC_Vec3_Dot(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inRHS
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  float result = selfCpp->Dot(
    *reinterpret_cast<Vec3 *>(inRHS->obj)
  );
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_Add(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3* resultRef = &selfCpp->operator+=(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_Sub(
  JoltC_Vec3_t * self,
  JoltC_Vec3_t * inV
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  Vec3* resultRef = &selfCpp->operator-=(
    *reinterpret_cast<Vec3 *>(inV->obj)
  );
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

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
};

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

JoltC_Vec3_t * JoltC_Vec3_Sqrt(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3& resultValue = selfCpp->Sqrt();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

JoltC_Vec3_t * JoltC_Vec3_GetSign(
  JoltC_Vec3_t * self
) {
  Vec3 * selfCpp = static_cast<Vec3 *>(self->obj);
  const Vec3& resultValue = selfCpp->GetSign();
  JoltC_Vec3_t* result = new JoltC_Vec3_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

