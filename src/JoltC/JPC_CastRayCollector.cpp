#include "JoltC/JPC_CastRayCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_CastRayCollector_Reset(
  JPC_CastRayCollector_t * self
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CastRayCollector_SetContext(
  JPC_CastRayCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CastRayCollector_GetContext(
  JPC_CastRayCollector_t * self
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CastRayCollector_UpdateEarlyOutFraction(
  JPC_CastRayCollector_t * self,
  float inFraction
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CastRayCollector_ResetEarlyOutFraction(
  JPC_CastRayCollector_t * self,
  float inFraction
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CastRayCollector_ForceEarlyOut(
  JPC_CastRayCollector_t * self
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CastRayCollector_ShouldEarlyOut(
  JPC_CastRayCollector_t * self
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CastRayCollector_GetEarlyOutFraction(
  JPC_CastRayCollector_t * self
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CastRayCollector_GetPositiveEarlyOutFraction(
  JPC_CastRayCollector_t * self
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

