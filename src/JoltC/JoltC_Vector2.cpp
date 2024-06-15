#include "JoltC/JoltC_Vector2.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `Vector2` instance.
 */
JoltC_Vector2_t * JoltC_Vector2_new() {
  JoltC_Vector2_t * cInstance = new JoltC_Vector2_t();
  Vector2 * cppInstance = new Vector2();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_Vector2_destroy(
  JoltC_Vector2_t * self
){
  if (self == NULL) return;
  delete static_cast<Vector2 *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_Vector2_SetZero(
  JoltC_Vector2_t * self
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  selfCpp->SetZero();
}

void JoltC_Vector2_IsZero(
  JoltC_Vector2_t * self
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  selfCpp->IsZero();
}

void JoltC_Vector2_IsClose(
  JoltC_Vector2_t * self,
  JoltC_Vector2_t * inV,
  float inMaxDistSq
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  const Vector2 * inVCpp = static_cast<const Vector2 *>(inV->obj);
  selfCpp->IsClose(
    *inVCpp,
    inMaxDistSq
  );
}

void JoltC_Vector2_IsNormalized(
  JoltC_Vector2_t * self,
  float inTolerance
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  selfCpp->IsNormalized(
    inTolerance
  );
}

JoltC_Vector2_t * JoltC_Vector2_Normalized(
  JoltC_Vector2_t * self
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  Vector2 * resultPtr = new Vector2();
  *resultPtr = selfCpp->Normalized();
  JoltC_Vector2_t * result = new JoltC_Vector2_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_Vector2_GetComponent(
  JoltC_Vector2_t * self,
  unsigned long inCoordinate
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  return selfCpp->operator[](
    inCoordinate
  );
}

JoltC_Vector2_t * JoltC_Vector2_Add(
  JoltC_Vector2_t * self,
  JoltC_Vector2_t * inV
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  const Vector2 * inVCpp = static_cast<const Vector2 *>(inV->obj);
  Vector2* resultRef = &selfCpp->operator+=(
    *inVCpp
  );
  JoltC_Vector2_t* result = new JoltC_Vector2_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

JoltC_Vector2_t * JoltC_Vector2_Sub(
  JoltC_Vector2_t * self,
  JoltC_Vector2_t * inV
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  const Vector2 * inVCpp = static_cast<const Vector2 *>(inV->obj);
  Vector2* resultRef = &selfCpp->operator-=(
    *inVCpp
  );
  JoltC_Vector2_t* result = new JoltC_Vector2_t();
  result->obj = reinterpret_cast<void*>(resultRef);
  return result;
}

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
}

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
}

float JoltC_Vector2_Dot(
  JoltC_Vector2_t * self,
  JoltC_Vector2_t * inRHS
) {
  Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
  const Vector2 * inRHSCpp = static_cast<const Vector2 *>(inRHS->obj);
  return selfCpp->Dot(
    *inRHSCpp
  );
}

//endregion


#ifdef __cplusplus
}
#endif
