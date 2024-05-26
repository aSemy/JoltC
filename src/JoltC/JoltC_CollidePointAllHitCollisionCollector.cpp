#include "JoltC/JoltC_CollidePointAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollidePointAllHitCollisionCollector_t * JoltC_CollidePointAllHitCollisionCollector_new() {
  JoltC_CollidePointAllHitCollisionCollector_t * cInstance = new JoltC_CollidePointAllHitCollisionCollector_t();
  CollidePointAllHitCollisionCollector * cppInstance = new CollidePointAllHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_CollidePointAllHitCollisionCollector_Sort(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Sort();
};

bool JoltC_CollidePointAllHitCollisionCollector_HadHit(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JoltC_CollidePointAllHitCollisionCollector_Reset(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JoltC_CollidePointAllHitCollisionCollector_SetContext(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JoltC_TransformedShape_t * JoltC_CollidePointAllHitCollisionCollector_GetContext(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JoltC_TransformedShape_t *>(result);
};

void JoltC_CollidePointAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JoltC_CollidePointAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JoltC_CollidePointAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JoltC_CollidePointAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_CollidePointAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_CollidePointAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

//region properties

JoltC_ArrayCollidePointResult_t * JoltC_CollidePointAllHitCollisionCollector_mHits_Get(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  ArrayCollidePointResult resultValue = selfCpp->mHits;
  ArrayCollidePointResult* result = new ArrayCollidePointResult(resultValue);
  return reinterpret_cast<JoltC_ArrayCollidePointResult_t *>(result);
};

void JoltC_CollidePointAllHitCollisionCollector_mHits_Set(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  JoltC_ArrayCollidePointResult_t * mHits
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *reinterpret_cast<ArrayCollidePointResult *>(mHits->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

