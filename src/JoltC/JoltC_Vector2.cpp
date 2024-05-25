#include "JoltC/JPC_Vector2.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_Vector2_t * JPC_Vector2_new() {
  JPC_Vector2_t * cInstance = new JPC_Vector2_t();
  Vector2 * cppInstance = new Vector2();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_Vector2_SetZero(
  JPC_Vector2_t * self
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  
  selfCpp->SetZero();
};

void JPC_Vector2_IsZero(
  JPC_Vector2_t * self
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  
  selfCpp->IsZero();
};

void JPC_Vector2_IsClose(
  JPC_Vector2_t * self,
  const JPC_Vector2_t * inV,
  float inMaxDistSq
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  
  selfCpp->IsClose(
  *reinterpret_cast<Vector2 *>(inV->obj),
  inMaxDistSq
  );
};

void JPC_Vector2_IsNormalized(
  JPC_Vector2_t * self,
  float inTolerance
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  
  selfCpp->IsNormalized(
  inTolerance
  );
};

const JPC_Vector2_t * JPC_Vector2_Normalized(
  JPC_Vector2_t * self
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  const Vector2 resultValue = selfCpp->Normalized();
  const Vector2* result = new Vector2(resultValue);
  return reinterpret_cast<const JPC_Vector2_t *>(result);
};

float JPC_Vector2_GetComponent(
  JPC_Vector2_t * self,
  unsigned long inCoordinate
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  float result = selfCpp->operator[](
  inCoordinate
  );
  return result;
};

JPC_Vector2_t * JPC_Vector2_Add(
  JPC_Vector2_t * self,
  const JPC_Vector2_t * inV
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  Vector2& resultRef = selfCpp->operator+=(
  *reinterpret_cast<Vector2 *>(inV->obj)
  );
  Vector2 * result = &resultRef;
  return reinterpret_cast<JPC_Vector2_t *>(result);
};

JPC_Vector2_t * JPC_Vector2_Sub(
  JPC_Vector2_t * self,
  const JPC_Vector2_t * inV
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  Vector2& resultRef = selfCpp->operator-=(
  *reinterpret_cast<Vector2 *>(inV->obj)
  );
  Vector2 * result = &resultRef;
  return reinterpret_cast<JPC_Vector2_t *>(result);
};

JPC_Vector2_t * JPC_Vector2_Mul(
  JPC_Vector2_t * self,
  float inV
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  Vector2& resultRef = selfCpp->operator*=(
  inV
  );
  Vector2 * result = &resultRef;
  return reinterpret_cast<JPC_Vector2_t *>(result);
};

JPC_Vector2_t * JPC_Vector2_Div(
  JPC_Vector2_t * self,
  float inV
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  Vector2& resultRef = selfCpp->operator/=(
  inV
  );
  Vector2 * result = &resultRef;
  return reinterpret_cast<JPC_Vector2_t *>(result);
};

float JPC_Vector2_Dot(
  JPC_Vector2_t * self,
  const JPC_Vector2_t * inRHS
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  float result = selfCpp->Dot(
  *reinterpret_cast<Vector2 *>(inRHS->obj)
  );
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

