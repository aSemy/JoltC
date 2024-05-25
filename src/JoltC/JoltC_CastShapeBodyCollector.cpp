#include "JoltC/JPC_CastShapeBodyCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_CastShapeBodyCollector_Reset(
  JPC_CastShapeBodyCollector_t * self
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CastShapeBodyCollector_SetContext(
  JPC_CastShapeBodyCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CastShapeBodyCollector_GetContext(
  JPC_CastShapeBodyCollector_t * self
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CastShapeBodyCollector_UpdateEarlyOutFraction(
  JPC_CastShapeBodyCollector_t * self,
  float inFraction
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CastShapeBodyCollector_ResetEarlyOutFraction(
  JPC_CastShapeBodyCollector_t * self,
  float inFraction
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CastShapeBodyCollector_ForceEarlyOut(
  JPC_CastShapeBodyCollector_t * self
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CastShapeBodyCollector_ShouldEarlyOut(
  JPC_CastShapeBodyCollector_t * self
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CastShapeBodyCollector_GetEarlyOutFraction(
  JPC_CastShapeBodyCollector_t * self
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CastShapeBodyCollector_GetPositiveEarlyOutFraction(
  JPC_CastShapeBodyCollector_t * self
) {
  CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

