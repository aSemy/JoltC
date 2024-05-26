#include "JoltC/JoltC_CastRayAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastRayAnyHitCollisionCollector_t * JoltC_CastRayAnyHitCollisionCollector_new() {
  JoltC_CastRayAnyHitCollisionCollector_t * cInstance = new JoltC_CastRayAnyHitCollisionCollector_t();
  CastRayAnyHitCollisionCollector * cppInstance = new CastRayAnyHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_CastRayAnyHitCollisionCollector_HadHit(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JoltC_CastRayAnyHitCollisionCollector_Reset(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JoltC_CastRayAnyHitCollisionCollector_SetContext(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
    reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

JoltC_TransformedShape_t * JoltC_CastRayAnyHitCollisionCollector_GetContext(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * resultValue = selfCpp->GetContext();
  JoltC_TransformedShape_t* result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CastRayAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastRayAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastRayAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JoltC_CastRayAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_CastRayAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_CastRayAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

//region properties

JoltC_RayCastResult_t * JoltC_CastRayAnyHitCollisionCollector_mHit_Get(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  static RayCastResult resultValue = selfCpp->mHit;
  JoltC_RayCastResult_t* result = new JoltC_RayCastResult_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_CastRayAnyHitCollisionCollector_mHit_Set(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  JoltC_RayCastResult_t * mHit
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<RayCastResult *>(mHit->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

