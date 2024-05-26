#include "JoltC/JoltC_CastShapeAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastShapeAllHitCollisionCollector_t * JoltC_CastShapeAllHitCollisionCollector_new() {
  JoltC_CastShapeAllHitCollisionCollector_t * cInstance = new JoltC_CastShapeAllHitCollisionCollector_t();
  CastShapeAllHitCollisionCollector * cppInstance = new CastShapeAllHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

void JoltC_CastShapeAllHitCollisionCollector_Sort(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Sort();
};

bool JoltC_CastShapeAllHitCollisionCollector_HadHit(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JoltC_CastShapeAllHitCollisionCollector_Reset(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JoltC_CastShapeAllHitCollisionCollector_SetContext(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
    reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

JoltC_TransformedShape_t * JoltC_CastShapeAllHitCollisionCollector_GetContext(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  const TransformedShape * resultValue = selfCpp->GetContext();
  JoltC_TransformedShape_t* result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CastShapeAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastShapeAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastShapeAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JoltC_CastShapeAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_CastShapeAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_CastShapeAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

//region properties

JoltC_ArrayShapeCastResult_t * JoltC_CastShapeAllHitCollisionCollector_mHits_Get(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  static ArrayShapeCastResult resultValue = selfCpp->mHits;
  JoltC_ArrayShapeCastResult_t* result = new JoltC_ArrayShapeCastResult_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CastShapeAllHitCollisionCollector_mHits_Set(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  JoltC_ArrayShapeCastResult_t * mHits
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *reinterpret_cast<ArrayShapeCastResult *>(mHits->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

