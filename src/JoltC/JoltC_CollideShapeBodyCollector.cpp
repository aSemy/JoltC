#include "JoltC/JPC_CollideShapeBodyCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JPC_CollideShapeBodyCollector_Reset(
  JPC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CollideShapeBodyCollector_SetContext(
  JPC_CollideShapeBodyCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CollideShapeBodyCollector_GetContext(
  JPC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CollideShapeBodyCollector_UpdateEarlyOutFraction(
  JPC_CollideShapeBodyCollector_t * self,
  float inFraction
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CollideShapeBodyCollector_ResetEarlyOutFraction(
  JPC_CollideShapeBodyCollector_t * self,
  float inFraction
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CollideShapeBodyCollector_ForceEarlyOut(
  JPC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CollideShapeBodyCollector_ShouldEarlyOut(
  JPC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CollideShapeBodyCollector_GetEarlyOutFraction(
  JPC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CollideShapeBodyCollector_GetPositiveEarlyOutFraction(
  JPC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

#ifdef __cplusplus
}
#endif

