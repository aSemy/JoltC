#include "JoltC/JPC_CollideShapeCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_CollideShapeCollector_Reset(
  JPC_CollideShapeCollector_t * self
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CollideShapeCollector_SetContext(
  JPC_CollideShapeCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CollideShapeCollector_GetContext(
  JPC_CollideShapeCollector_t * self
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CollideShapeCollector_UpdateEarlyOutFraction(
  JPC_CollideShapeCollector_t * self,
  float inFraction
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CollideShapeCollector_ResetEarlyOutFraction(
  JPC_CollideShapeCollector_t * self,
  float inFraction
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CollideShapeCollector_ForceEarlyOut(
  JPC_CollideShapeCollector_t * self
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CollideShapeCollector_ShouldEarlyOut(
  JPC_CollideShapeCollector_t * self
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CollideShapeCollector_GetEarlyOutFraction(
  JPC_CollideShapeCollector_t * self
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CollideShapeCollector_GetPositiveEarlyOutFraction(
  JPC_CollideShapeCollector_t * self
) {
  CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

