#include "JoltC/JoltC_CastRayAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastRayAllHitCollisionCollector_t * JoltC_CastRayAllHitCollisionCollector_new() {
  JoltC_CastRayAllHitCollisionCollector_t * cInstance = new JoltC_CastRayAllHitCollisionCollector_t();
  CastRayAllHitCollisionCollector * cppInstance = new CastRayAllHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_CastRayAllHitCollisionCollector_Sort(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Sort();
};

bool JoltC_CastRayAllHitCollisionCollector_HadHit(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JoltC_CastRayAllHitCollisionCollector_Reset(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JoltC_CastRayAllHitCollisionCollector_SetContext(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
    reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

JoltC_TransformedShape_t * JoltC_CastRayAllHitCollisionCollector_GetContext(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  const TransformedShape * resultValue = selfCpp->GetContext();
  JoltC_TransformedShape_t* result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CastRayAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastRayAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastRayAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JoltC_CastRayAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_CastRayAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_CastRayAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

//region properties

JoltC_ArrayRayCastResult_t * JoltC_CastRayAllHitCollisionCollector_mHits_Get(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  static ArrayRayCastResult resultValue = selfCpp->mHits;
  JoltC_ArrayRayCastResult_t* result = new JoltC_ArrayRayCastResult_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CastRayAllHitCollisionCollector_mHits_Set(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  JoltC_ArrayRayCastResult_t * mHits
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *reinterpret_cast<ArrayRayCastResult *>(mHits->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

