#include "JoltC/JPC_LinearCurve.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_LinearCurve_t * JPC_LinearCurve_new() {
  JPC_LinearCurve_t * cInstance = new JPC_LinearCurve_t();
  LinearCurve * cppInstance = new LinearCurve();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_LinearCurve_Clear(
  JPC_LinearCurve_t * self
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  
  selfCpp->Clear();
};

void JPC_LinearCurve_Reserve(
  JPC_LinearCurve_t * self,
  unsigned long inSize
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  
  selfCpp->Reserve(
  inSize
  );
};

void JPC_LinearCurve_AddPoint(
  JPC_LinearCurve_t * self,
  float inX,
  float inY
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  
  selfCpp->AddPoint(
  inX,
  inY
  );
};

void JPC_LinearCurve_Sort(
  JPC_LinearCurve_t * self
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  
  selfCpp->Sort();
};

float JPC_LinearCurve_GetMinX(
  JPC_LinearCurve_t * self
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  float result = selfCpp->GetMinX();
  return result;
};

float JPC_LinearCurve_GetMaxX(
  JPC_LinearCurve_t * self
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  float result = selfCpp->GetMaxX();
  return result;
};

float JPC_LinearCurve_GetValue(
  JPC_LinearCurve_t * self,
  float inX
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  float result = selfCpp->GetValue(
  inX
  );
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

