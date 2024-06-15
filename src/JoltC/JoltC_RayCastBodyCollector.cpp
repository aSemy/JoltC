#include "JoltC/JoltC_RayCastBodyCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_RayCastBodyCollector_destroy(
  JoltC_RayCastBodyCollector_t * self
){
  if (self == NULL) return;
  delete static_cast<RayCastBodyCollector *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_RayCastBodyCollector_Reset(
  JoltC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_RayCastBodyCollector_SetContext(
  JoltC_RayCastBodyCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_RayCastBodyCollector_GetContext(
  JoltC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_RayCastBodyCollector_UpdateEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  float inFraction
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_RayCastBodyCollector_ResetEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  float inFraction
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_RayCastBodyCollector_ForceEarlyOut(
  JoltC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_RayCastBodyCollector_ShouldEarlyOut(
  JoltC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_RayCastBodyCollector_GetEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_RayCastBodyCollector_GetPositiveEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion


#ifdef __cplusplus
}
#endif
