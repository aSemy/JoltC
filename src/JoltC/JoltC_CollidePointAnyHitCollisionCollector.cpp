#include "JoltC/JoltC_CollidePointAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollidePointAnyHitCollisionCollector_t * JoltC_CollidePointAnyHitCollisionCollector_new() {
  JoltC_CollidePointAnyHitCollisionCollector_t * cInstance = new JoltC_CollidePointAnyHitCollisionCollector_t();
  CollidePointAnyHitCollisionCollector * cppInstance = new CollidePointAnyHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_CollidePointAnyHitCollisionCollector_HadHit(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JoltC_CollidePointAnyHitCollisionCollector_Reset(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JoltC_CollidePointAnyHitCollisionCollector_SetContext(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JoltC_TransformedShape_t * JoltC_CollidePointAnyHitCollisionCollector_GetContext(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JoltC_TransformedShape_t *>(result);
};

void JoltC_CollidePointAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JoltC_CollidePointAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JoltC_CollidePointAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JoltC_CollidePointAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_CollidePointAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_CollidePointAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

//region properties

JoltC_CollidePointResult_t * JoltC_CollidePointAnyHitCollisionCollector_mHit_Get(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  CollidePointResult resultValue = selfCpp->mHit;
  CollidePointResult* result = new CollidePointResult(resultValue);
  return reinterpret_cast<JoltC_CollidePointResult_t *>(result);
};

void JoltC_CollidePointAnyHitCollisionCollector_mHit_Set(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  JoltC_CollidePointResult_t * mHit
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<CollidePointResult *>(mHit->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

