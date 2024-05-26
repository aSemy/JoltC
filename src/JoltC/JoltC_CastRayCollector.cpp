#include "JoltC/JoltC_CastRayCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_CastRayAllHitCollisionCollector_t into JoltC_CastRayCollector_t.
 */
JoltC_CastRayCollector_t * JoltC_CastRayCollector_From_CastRayAllHitCollisionCollector(
  JoltC_CastRayAllHitCollisionCollector_t * subtype
) {
  return (JoltC_CastRayCollector_t*) subtype;
};

/**
 * Convert an instance of JoltC_CastRayClosestHitCollisionCollector_t into JoltC_CastRayCollector_t.
 */
JoltC_CastRayCollector_t * JoltC_CastRayCollector_From_CastRayClosestHitCollisionCollector(
  JoltC_CastRayClosestHitCollisionCollector_t * subtype
) {
  return (JoltC_CastRayCollector_t*) subtype;
};

/**
 * Convert an instance of JoltC_CastRayAnyHitCollisionCollector_t into JoltC_CastRayCollector_t.
 */
JoltC_CastRayCollector_t * JoltC_CastRayCollector_From_CastRayAnyHitCollisionCollector(
  JoltC_CastRayAnyHitCollisionCollector_t * subtype
) {
  return (JoltC_CastRayCollector_t*) subtype;
};

//endregion

//region functions

void JoltC_CastRayCollector_Reset(
  JoltC_CastRayCollector_t * self
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JoltC_CastRayCollector_SetContext(
  JoltC_CastRayCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  
  selfCpp->SetContext(
    reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

JoltC_TransformedShape_t * JoltC_CastRayCollector_GetContext(
  JoltC_CastRayCollector_t * self
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  const TransformedShape * resultValue = selfCpp->GetContext();
  JoltC_TransformedShape_t* result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CastRayCollector_UpdateEarlyOutFraction(
  JoltC_CastRayCollector_t * self,
  float inFraction
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastRayCollector_ResetEarlyOutFraction(
  JoltC_CastRayCollector_t * self,
  float inFraction
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastRayCollector_ForceEarlyOut(
  JoltC_CastRayCollector_t * self
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JoltC_CastRayCollector_ShouldEarlyOut(
  JoltC_CastRayCollector_t * self
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_CastRayCollector_GetEarlyOutFraction(
  JoltC_CastRayCollector_t * self
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_CastRayCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayCollector_t * self
) {
  CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

