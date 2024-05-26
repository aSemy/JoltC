#include "JoltC/JoltC_CastShapeClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastShapeClosestHitCollisionCollector_t * JoltC_CastShapeClosestHitCollisionCollector_new() {
  JoltC_CastShapeClosestHitCollisionCollector_t * cInstance = new JoltC_CastShapeClosestHitCollisionCollector_t();
  CastShapeClosestHitCollisionCollector * cppInstance = new CastShapeClosestHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_CastShapeClosestHitCollisionCollector_HadHit(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JoltC_CastShapeClosestHitCollisionCollector_Reset(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JoltC_CastShapeClosestHitCollisionCollector_SetContext(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JoltC_TransformedShape_t * JoltC_CastShapeClosestHitCollisionCollector_GetContext(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JoltC_TransformedShape_t *>(result);
};

void JoltC_CastShapeClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JoltC_CastShapeClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JoltC_CastShapeClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JoltC_CastShapeClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_CastShapeClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_CastShapeClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

//region properties

JoltC_ShapeCastResult_t * JoltC_CastShapeClosestHitCollisionCollector_mHit_Get(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  ShapeCastResult resultValue = selfCpp->mHit;
  ShapeCastResult* result = new ShapeCastResult(resultValue);
  return reinterpret_cast<JoltC_ShapeCastResult_t *>(result);
};

void JoltC_CastShapeClosestHitCollisionCollector_mHit_Set(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  JoltC_ShapeCastResult_t * mHit
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<ShapeCastResult *>(mHit->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

