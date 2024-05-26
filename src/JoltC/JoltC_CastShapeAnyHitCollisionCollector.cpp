#include "JoltC/JoltC_CastShapeAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastShapeAnyHitCollisionCollector_t * JoltC_CastShapeAnyHitCollisionCollector_new() {
  JoltC_CastShapeAnyHitCollisionCollector_t * cInstance = new JoltC_CastShapeAnyHitCollisionCollector_t();
  CastShapeAnyHitCollisionCollector * cppInstance = new CastShapeAnyHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_CastShapeAnyHitCollisionCollector_HadHit(
  JoltC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JoltC_CastShapeAnyHitCollisionCollector_Reset(
  JoltC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JoltC_CastShapeAnyHitCollisionCollector_SetContext(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
    reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

JoltC_TransformedShape_t * JoltC_CastShapeAnyHitCollisionCollector_GetContext(
  JoltC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * resultValue = selfCpp->GetContext();
  JoltC_TransformedShape_t* result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CastShapeAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastShapeAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastShapeAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JoltC_CastShapeAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_CastShapeAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_CastShapeAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

//region properties

JoltC_ShapeCastResult_t * JoltC_CastShapeAnyHitCollisionCollector_mHit_Get(
  JoltC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  static ShapeCastResult resultValue = selfCpp->mHit;
  JoltC_ShapeCastResult_t* result = new JoltC_ShapeCastResult_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CastShapeAnyHitCollisionCollector_mHit_Set(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  JoltC_ShapeCastResult_t * mHit
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<ShapeCastResult *>(mHit->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

