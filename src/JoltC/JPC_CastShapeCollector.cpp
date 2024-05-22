#include "JoltC/JPC_CastShapeCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_CastShapeCollector_Reset(
  JPC_CastShapeCollector_t * self
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CastShapeCollector_SetContext(
  JPC_CastShapeCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CastShapeCollector_GetContext(
  JPC_CastShapeCollector_t * self
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CastShapeCollector_UpdateEarlyOutFraction(
  JPC_CastShapeCollector_t * self,
  float inFraction
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CastShapeCollector_ResetEarlyOutFraction(
  JPC_CastShapeCollector_t * self,
  float inFraction
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CastShapeCollector_ForceEarlyOut(
  JPC_CastShapeCollector_t * self
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CastShapeCollector_ShouldEarlyOut(
  JPC_CastShapeCollector_t * self
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CastShapeCollector_GetEarlyOutFraction(
  JPC_CastShapeCollector_t * self
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CastShapeCollector_GetPositiveEarlyOutFraction(
  JPC_CastShapeCollector_t * self
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

