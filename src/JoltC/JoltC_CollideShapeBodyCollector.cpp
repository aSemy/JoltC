#include "JoltC/JoltC_CollideShapeBodyCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CollideShapeBodyCollector_Reset(
  JoltC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JoltC_CollideShapeBodyCollector_SetContext(
  JoltC_CollideShapeBodyCollector_t * self,
  const JoltC_TransformedShape_t * inContext
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JoltC_TransformedShape_t * JoltC_CollideShapeBodyCollector_GetContext(
  JoltC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JoltC_TransformedShape_t *>(result);
};

void JoltC_CollideShapeBodyCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self,
  float inFraction
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JoltC_CollideShapeBodyCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self,
  float inFraction
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JoltC_CollideShapeBodyCollector_ForceEarlyOut(
  JoltC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JoltC_CollideShapeBodyCollector_ShouldEarlyOut(
  JoltC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_CollideShapeBodyCollector_GetEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_CollideShapeBodyCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

