#include "JoltC/JoltC_CollideShapeAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeAnyHitCollisionCollector_t * JoltC_CollideShapeAnyHitCollisionCollector_new() {
  JoltC_CollideShapeAnyHitCollisionCollector_t * cInstance = new JoltC_CollideShapeAnyHitCollisionCollector_t();
  CollideShapeAnyHitCollisionCollector * cppInstance = new CollideShapeAnyHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_CollideShapeAnyHitCollisionCollector_HadHit(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JoltC_CollideShapeAnyHitCollisionCollector_Reset(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JoltC_CollideShapeAnyHitCollisionCollector_SetContext(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JoltC_TransformedShape_t * JoltC_CollideShapeAnyHitCollisionCollector_GetContext(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JoltC_TransformedShape_t *>(result);
};

void JoltC_CollideShapeAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JoltC_CollideShapeAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JoltC_CollideShapeAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JoltC_CollideShapeAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_CollideShapeAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_CollideShapeAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

//region properties

JoltC_CollideShapeResult_t * JoltC_CollideShapeAnyHitCollisionCollector_mHit_Get(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  CollideShapeResult resultValue = selfCpp->mHit;
  CollideShapeResult* result = new CollideShapeResult(resultValue);
  return reinterpret_cast<JoltC_CollideShapeResult_t *>(result);
};

void JoltC_CollideShapeAnyHitCollisionCollector_mHit_Set(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  JoltC_CollideShapeResult_t * mHit
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<CollideShapeResult *>(mHit->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

