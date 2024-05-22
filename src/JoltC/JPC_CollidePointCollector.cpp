#include "JoltC/JPC_CollidePointCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_CollidePointCollector_Reset(
  JPC_CollidePointCollector_t * self
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CollidePointCollector_SetContext(
  JPC_CollidePointCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CollidePointCollector_GetContext(
  JPC_CollidePointCollector_t * self
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CollidePointCollector_UpdateEarlyOutFraction(
  JPC_CollidePointCollector_t * self,
  float inFraction
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CollidePointCollector_ResetEarlyOutFraction(
  JPC_CollidePointCollector_t * self,
  float inFraction
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CollidePointCollector_ForceEarlyOut(
  JPC_CollidePointCollector_t * self
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CollidePointCollector_ShouldEarlyOut(
  JPC_CollidePointCollector_t * self
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CollidePointCollector_GetEarlyOutFraction(
  JPC_CollidePointCollector_t * self
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CollidePointCollector_GetPositiveEarlyOutFraction(
  JPC_CollidePointCollector_t * self
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

