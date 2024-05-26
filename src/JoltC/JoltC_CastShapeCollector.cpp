#include "JoltC/JoltC_CastShapeCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_CastShapeAllHitCollisionCollector_t into JoltC_CastShapeCollector_t.
 */
JoltC_CastShapeCollector_t * JoltC_CastShapeCollector_From_CastShapeAllHitCollisionCollector(
  JoltC_CastShapeAllHitCollisionCollector_t * subtype
) {
  return (JoltC_CastShapeCollector_t*) subtype;
};

/**
 * Convert an instance of JoltC_CastShapeClosestHitCollisionCollector_t into JoltC_CastShapeCollector_t.
 */
JoltC_CastShapeCollector_t * JoltC_CastShapeCollector_From_CastShapeClosestHitCollisionCollector(
  JoltC_CastShapeClosestHitCollisionCollector_t * subtype
) {
  return (JoltC_CastShapeCollector_t*) subtype;
};

/**
 * Convert an instance of JoltC_CastShapeAnyHitCollisionCollector_t into JoltC_CastShapeCollector_t.
 */
JoltC_CastShapeCollector_t * JoltC_CastShapeCollector_From_CastShapeAnyHitCollisionCollector(
  JoltC_CastShapeAnyHitCollisionCollector_t * subtype
) {
  return (JoltC_CastShapeCollector_t*) subtype;
};

//endregion

//region functions

void JoltC_CastShapeCollector_Reset(
  JoltC_CastShapeCollector_t * self
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JoltC_CastShapeCollector_SetContext(
  JoltC_CastShapeCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  
  selfCpp->SetContext(
    reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

JoltC_TransformedShape_t * JoltC_CastShapeCollector_GetContext(
  JoltC_CastShapeCollector_t * self
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  const TransformedShape * resultValue = selfCpp->GetContext();
  JoltC_TransformedShape_t* result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CastShapeCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeCollector_t * self,
  float inFraction
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastShapeCollector_ResetEarlyOutFraction(
  JoltC_CastShapeCollector_t * self,
  float inFraction
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastShapeCollector_ForceEarlyOut(
  JoltC_CastShapeCollector_t * self
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JoltC_CastShapeCollector_ShouldEarlyOut(
  JoltC_CastShapeCollector_t * self
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_CastShapeCollector_GetEarlyOutFraction(
  JoltC_CastShapeCollector_t * self
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_CastShapeCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeCollector_t * self
) {
  CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

