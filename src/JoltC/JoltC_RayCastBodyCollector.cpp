#include "JoltC/JPC_RayCastBodyCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_RayCastBodyCollector_Reset(
  JPC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_RayCastBodyCollector_SetContext(
  JPC_RayCastBodyCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_RayCastBodyCollector_GetContext(
  JPC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_RayCastBodyCollector_UpdateEarlyOutFraction(
  JPC_RayCastBodyCollector_t * self,
  float inFraction
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_RayCastBodyCollector_ResetEarlyOutFraction(
  JPC_RayCastBodyCollector_t * self,
  float inFraction
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_RayCastBodyCollector_ForceEarlyOut(
  JPC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_RayCastBodyCollector_ShouldEarlyOut(
  JPC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_RayCastBodyCollector_GetEarlyOutFraction(
  JPC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_RayCastBodyCollector_GetPositiveEarlyOutFraction(
  JPC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

