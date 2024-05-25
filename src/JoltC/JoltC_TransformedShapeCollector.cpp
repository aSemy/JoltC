#include "JoltC/JPC_TransformedShapeCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_TransformedShapeCollector_Reset(
  JPC_TransformedShapeCollector_t * self
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_TransformedShapeCollector_SetContext(
  JPC_TransformedShapeCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_TransformedShapeCollector_GetContext(
  JPC_TransformedShapeCollector_t * self
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_TransformedShapeCollector_UpdateEarlyOutFraction(
  JPC_TransformedShapeCollector_t * self,
  float inFraction
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_TransformedShapeCollector_ResetEarlyOutFraction(
  JPC_TransformedShapeCollector_t * self,
  float inFraction
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_TransformedShapeCollector_ForceEarlyOut(
  JPC_TransformedShapeCollector_t * self
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_TransformedShapeCollector_ShouldEarlyOut(
  JPC_TransformedShapeCollector_t * self
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_TransformedShapeCollector_GetEarlyOutFraction(
  JPC_TransformedShapeCollector_t * self
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_TransformedShapeCollector_GetPositiveEarlyOutFraction(
  JPC_TransformedShapeCollector_t * self
) {
  TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

