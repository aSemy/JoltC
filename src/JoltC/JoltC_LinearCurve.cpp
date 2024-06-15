#include "JoltC/JoltC_LinearCurve.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `LinearCurve` instance.
 */
JoltC_LinearCurve_t * JoltC_LinearCurve_new() {
  JoltC_LinearCurve_t * cInstance = new JoltC_LinearCurve_t();
  LinearCurve * cppInstance = new LinearCurve();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_LinearCurve_destroy(
  JoltC_LinearCurve_t * self
){
  if (self == NULL) return;
  delete static_cast<LinearCurve *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_LinearCurve_Clear(
  JoltC_LinearCurve_t * self
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  selfCpp->Clear();
}

void JoltC_LinearCurve_Reserve(
  JoltC_LinearCurve_t * self,
  unsigned long inSize
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  selfCpp->Reserve(
    inSize
  );
}

void JoltC_LinearCurve_AddPoint(
  JoltC_LinearCurve_t * self,
  float inX,
  float inY
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  selfCpp->AddPoint(
    inX,
    inY
  );
}

void JoltC_LinearCurve_Sort(
  JoltC_LinearCurve_t * self
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  selfCpp->Sort();
}

float JoltC_LinearCurve_GetMinX(
  JoltC_LinearCurve_t * self
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  return selfCpp->GetMinX();
}

float JoltC_LinearCurve_GetMaxX(
  JoltC_LinearCurve_t * self
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  return selfCpp->GetMaxX();
}

float JoltC_LinearCurve_GetValue(
  JoltC_LinearCurve_t * self,
  float inX
) {
  LinearCurve * selfCpp = static_cast<LinearCurve *>(self->obj);
  return selfCpp->GetValue(
    inX
  );
}

//endregion


#ifdef __cplusplus
}
#endif
