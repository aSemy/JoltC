#include "JoltC/JoltC_Vector2.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Vector2_t * JoltC_Vector2_new() {
  JoltC_Vector2_t * cInstance = new JoltC_Vector2_t();
  Vector2 * cppInstance = new Vector2();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_Vector2_SetZero(
  JoltC_Vector2_t * self
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  
  selfCpp->SetZero();
};

void JoltC_Vector2_IsZero(
  JoltC_Vector2_t * self
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  
  selfCpp->IsZero();
};

void JoltC_Vector2_IsClose(
  JoltC_Vector2_t * self,
  JoltC_Vector2_t * inV,
  float inMaxDistSq
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  
  selfCpp->IsClose(
    *reinterpret_cast<Vector2 *>(inV->obj),
    inMaxDistSq
  );
};

void JoltC_Vector2_IsNormalized(
  JoltC_Vector2_t * self,
  float inTolerance
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  
  selfCpp->IsNormalized(
    inTolerance
  );
};

JoltC_Vector2_t * JoltC_Vector2_Normalized(
  JoltC_Vector2_t * self
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  static Vector2 resultValue = selfCpp->Normalized();
  JoltC_Vector2_t* result = new JoltC_Vector2_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

float JoltC_Vector2_GetComponent(
  JoltC_Vector2_t * self,
  unsigned long inCoordinate
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  float result = selfCpp->operator[](
    inCoordinate
  );
  return result;
};

JoltC_Vector2_t * JoltC_Vector2_Add(
  JoltC_Vector2_t * self,
  JoltC_Vector2_t * inV
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  Vector2* resultRef = &selfCpp->operator+=(
    *reinterpret_cast<Vector2 *>(inV->obj)
  );
  JoltC_Vector2_t* result = new JoltC_Vector2_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

JoltC_Vector2_t * JoltC_Vector2_Sub(
  JoltC_Vector2_t * self,
  JoltC_Vector2_t * inV
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  Vector2* resultRef = &selfCpp->operator-=(
    *reinterpret_cast<Vector2 *>(inV->obj)
  );
  JoltC_Vector2_t* result = new JoltC_Vector2_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

JoltC_Vector2_t * JoltC_Vector2_Mul(
  JoltC_Vector2_t * self,
  float inV
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  Vector2* resultRef = &selfCpp->operator*=(
    inV
  );
  JoltC_Vector2_t* result = new JoltC_Vector2_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

JoltC_Vector2_t * JoltC_Vector2_Div(
  JoltC_Vector2_t * self,
  float inV
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  Vector2* resultRef = &selfCpp->operator/=(
    inV
  );
  JoltC_Vector2_t* result = new JoltC_Vector2_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
};

float JoltC_Vector2_Dot(
  JoltC_Vector2_t * self,
  JoltC_Vector2_t * inRHS
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  float result = selfCpp->Dot(
    *reinterpret_cast<Vector2 *>(inRHS->obj)
  );
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

