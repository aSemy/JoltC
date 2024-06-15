#include "JoltC/JoltC_CastShapeBodyCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_CastShapeBodyCollector_destroy(
  JoltC_CastShapeBodyCollector_t * self
){
  if (self == NULL) return;
  delete static_cast<CastShapeBodyCollector *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_CastShapeBodyCollector_Reset(
  JoltC_CastShapeBodyCollector_t * self
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CastShapeBodyCollector_SetContext(
  JoltC_CastShapeBodyCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CastShapeBodyCollector_GetContext(
  JoltC_CastShapeBodyCollector_t * self
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CastShapeBodyCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeBodyCollector_t * self,
  float inFraction
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CastShapeBodyCollector_ResetEarlyOutFraction(
  JoltC_CastShapeBodyCollector_t * self,
  float inFraction
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CastShapeBodyCollector_ForceEarlyOut(
  JoltC_CastShapeBodyCollector_t * self
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CastShapeBodyCollector_ShouldEarlyOut(
  JoltC_CastShapeBodyCollector_t * self
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CastShapeBodyCollector_GetEarlyOutFraction(
  JoltC_CastShapeBodyCollector_t * self
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CastShapeBodyCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeBodyCollector_t * self
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion


#ifdef __cplusplus
}
#endif
