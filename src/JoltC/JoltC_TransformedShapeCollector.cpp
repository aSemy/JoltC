#include "JoltC/JoltC_TransformedShapeCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_TransformedShapeCollector_destroy(
  JoltC_TransformedShapeCollector_t * self
){
  if (self == NULL) return;
  delete static_cast<TransformedShapeCollector *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_TransformedShapeCollector_Reset(
  JoltC_TransformedShapeCollector_t * self
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_TransformedShapeCollector_SetContext(
  JoltC_TransformedShapeCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_TransformedShapeCollector_GetContext(
  JoltC_TransformedShapeCollector_t * self
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_TransformedShapeCollector_UpdateEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self,
  float inFraction
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_TransformedShapeCollector_ResetEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self,
  float inFraction
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_TransformedShapeCollector_ForceEarlyOut(
  JoltC_TransformedShapeCollector_t * self
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_TransformedShapeCollector_ShouldEarlyOut(
  JoltC_TransformedShapeCollector_t * self
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_TransformedShapeCollector_GetEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_TransformedShapeCollector_GetPositiveEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion


#ifdef __cplusplus
}
#endif
