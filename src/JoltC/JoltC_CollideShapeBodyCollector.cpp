#include "JoltC/JoltC_CollideShapeBodyCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CollideShapeBodyCollector_Reset(
  JoltC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CollideShapeBodyCollector_SetContext(
  JoltC_CollideShapeBodyCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CollideShapeBodyCollector_GetContext(
  JoltC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CollideShapeBodyCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self,
  float inFraction
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollideShapeBodyCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self,
  float inFraction
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollideShapeBodyCollector_ForceEarlyOut(
  JoltC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CollideShapeBodyCollector_ShouldEarlyOut(
  JoltC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CollideShapeBodyCollector_GetEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CollideShapeBodyCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeBodyCollector_t * self
) {
  CollideShapeBodyCollector * selfCpp = static_cast<CollideShapeBodyCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion

#ifdef __cplusplus
}
#endif

