#include "JoltC/JPC_RVec3.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_RVec3_t * JPC_RVec3_new_0() {
  JPC_RVec3_t * cInstance = new JPC_RVec3_t();
  RVec3 * cppInstance = new RVec3();
  cInstance->obj = cppInstance;
  return cInstance;
};

JPC_RVec3_t * JPC_RVec3_new_1(
  double inX,
  double inY,
  double inZ
) {
  JPC_RVec3_t * cInstance = new JPC_RVec3_t();
  RVec3 * cppInstance = new RVec3(
    inX,
    inY,
    inZ
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_RVec3_t * JPC_RVec3_sZero() {
  RVec3 resultValue = RVec3::sZero();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_RVec3_t * JPC_RVec3_sAxisX() {
  RVec3 resultValue = RVec3::sAxisX();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_RVec3_t * JPC_RVec3_sAxisY() {
  RVec3 resultValue = RVec3::sAxisY();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_RVec3_t * JPC_RVec3_sAxisZ() {
  RVec3 resultValue = RVec3::sAxisZ();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_RVec3_t * JPC_RVec3_sReplicate(
  double inValue
) {
  RVec3 resultValue = RVec3::sReplicate(
  inValue
  );
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_RVec3_t * JPC_RVec3_sMin(
  const JPC_RVec3_t * inLHS,
  const JPC_RVec3_t * inRHS
) {
  RVec3 resultValue = RVec3::sMin(
  *reinterpret_cast<RVec3 *>(inLHS->obj),
  *reinterpret_cast<RVec3 *>(inRHS->obj)
  );
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_RVec3_t * JPC_RVec3_sMax(
  const JPC_RVec3_t * inLHS,
  const JPC_RVec3_t * inRHS
) {
  RVec3 resultValue = RVec3::sMax(
  *reinterpret_cast<RVec3 *>(inLHS->obj),
  *reinterpret_cast<RVec3 *>(inRHS->obj)
  );
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_RVec3_t * JPC_RVec3_sClamp(
  const JPC_RVec3_t * inValue,
  const JPC_RVec3_t * inMin,
  const JPC_RVec3_t * inMax
) {
  RVec3 resultValue = RVec3::sClamp(
  *reinterpret_cast<RVec3 *>(inValue->obj),
  *reinterpret_cast<RVec3 *>(inMin->obj),
  *reinterpret_cast<RVec3 *>(inMax->obj)
  );
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

double JPC_RVec3_GetComponent(
  JPC_RVec3_t * self,
  unsigned long inCoordinate
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->operator[](
  inCoordinate
  );
  return result;
};

bool JPC_RVec3_Equals(
  JPC_RVec3_t * self,
  const JPC_RVec3_t * inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  bool result = selfCpp->operator==(
  *reinterpret_cast<RVec3 *>(inV->obj)
  );
  return result;
};

bool JPC_RVec3_NotEquals(
  JPC_RVec3_t * self,
  const JPC_RVec3_t * inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  bool result = selfCpp->operator!=(
  *reinterpret_cast<RVec3 *>(inV->obj)
  );
  return result;
};

double JPC_RVec3_LengthSq(
  JPC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->LengthSq();
  return result;
};

double JPC_RVec3_Length(
  JPC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->Length();
  return result;
};

JPC_RVec3_t * JPC_RVec3_Normalized(
  JPC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3 resultValue = selfCpp->Normalized();
  RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

double JPC_RVec3_GetX(
  JPC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->GetX();
  return result;
};

double JPC_RVec3_GetY(
  JPC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->GetY();
  return result;
};

double JPC_RVec3_GetZ(
  JPC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->GetZ();
  return result;
};

void JPC_RVec3_SetX(
  JPC_RVec3_t * self,
  double inX
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  
  selfCpp->SetX(
  inX
  );
};

void JPC_RVec3_SetY(
  JPC_RVec3_t * self,
  double inY
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  
  selfCpp->SetY(
  inY
  );
};

void JPC_RVec3_SetZ(
  JPC_RVec3_t * self,
  double inZ
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  
  selfCpp->SetZ(
  inZ
  );
};

void JPC_RVec3_Set(
  JPC_RVec3_t * self,
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

void JPC_RVec3_SetComponent(
  JPC_RVec3_t * self,
  unsigned long inCoordinate,
  double inValue
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  
  selfCpp->SetComponent(
  inCoordinate,
  inValue
  );
};

bool JPC_RVec3_IsNearZero(
  JPC_RVec3_t * self,
  double inMaxDistSq
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  bool result = selfCpp->IsNearZero(
  inMaxDistSq
  );
  return result;
};

bool JPC_RVec3_IsClose(
  JPC_RVec3_t * self,
  const JPC_RVec3_t * inV,
  double inMaxDistSq
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  bool result = selfCpp->IsClose(
  *reinterpret_cast<RVec3 *>(inV->obj),
  inMaxDistSq
  );
  return result;
};

bool JPC_RVec3_IsNormalized(
  JPC_RVec3_t * self,
  double inTolerance
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  bool result = selfCpp->IsNormalized(
  inTolerance
  );
  return result;
};

const JPC_RVec3_t * JPC_RVec3_Abs(
  JPC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  const RVec3 resultValue = selfCpp->Abs();
  const RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<const JPC_RVec3_t *>(result);
};

const JPC_RVec3_t * JPC_RVec3_Reciprocal(
  JPC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  const RVec3 resultValue = selfCpp->Reciprocal();
  const RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<const JPC_RVec3_t *>(result);
};

const JPC_RVec3_t * JPC_RVec3_Cross(
  JPC_RVec3_t * self,
  const JPC_RVec3_t * inRHS
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  const RVec3 resultValue = selfCpp->Cross(
  *reinterpret_cast<RVec3 *>(inRHS->obj)
  );
  const RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<const JPC_RVec3_t *>(result);
};

double JPC_RVec3_Dot(
  JPC_RVec3_t * self,
  const JPC_RVec3_t * inRHS
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  double result = selfCpp->Dot(
  *reinterpret_cast<RVec3 *>(inRHS->obj)
  );
  return result;
};

JPC_RVec3_t * JPC_RVec3_Add(
  JPC_RVec3_t * self,
  const JPC_Vec3_t * inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3& resultRef = selfCpp->operator+=(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  RVec3 * result = &resultRef;
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_RVec3_t * JPC_RVec3_Sub(
  JPC_RVec3_t * self,
  const JPC_Vec3_t * inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3& resultRef = selfCpp->operator-=(
  *reinterpret_cast<Vec3 *>(inV->obj)
  );
  RVec3 * result = &resultRef;
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_RVec3_t * JPC_RVec3_Mul(
  JPC_RVec3_t * self,
  double inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3& resultRef = selfCpp->operator*=(
  inV
  );
  RVec3 * result = &resultRef;
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

JPC_RVec3_t * JPC_RVec3_Div(
  JPC_RVec3_t * self,
  double inV
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  RVec3& resultRef = selfCpp->operator/=(
  inV
  );
  RVec3 * result = &resultRef;
  return reinterpret_cast<JPC_RVec3_t *>(result);
};

const JPC_RVec3_t * JPC_RVec3_Sqrt(
  JPC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  const RVec3 resultValue = selfCpp->Sqrt();
  const RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<const JPC_RVec3_t *>(result);
};

const JPC_RVec3_t * JPC_RVec3_GetSign(
  JPC_RVec3_t * self
) {
  RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
  const RVec3 resultValue = selfCpp->GetSign();
  const RVec3* result = new RVec3(resultValue);
  return reinterpret_cast<const JPC_RVec3_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

