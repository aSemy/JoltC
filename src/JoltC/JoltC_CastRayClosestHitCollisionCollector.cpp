#include "JoltC/JoltC_CastRayClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastRayClosestHitCollisionCollector_t * JoltC_CastRayClosestHitCollisionCollector_new() {
  JoltC_CastRayClosestHitCollisionCollector_t * cInstance = new JoltC_CastRayClosestHitCollisionCollector_t();
  CastRayClosestHitCollisionCollector * cppInstance = new CastRayClosestHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_CastRayClosestHitCollisionCollector_HadHit(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JoltC_CastRayClosestHitCollisionCollector_Reset(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  selfCpp->Reset();
};

void JoltC_CastRayClosestHitCollisionCollector_SetContext(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  selfCpp->SetContext(
    reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

JoltC_TransformedShape_t * JoltC_CastRayClosestHitCollisionCollector_GetContext(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * resultValue = selfCpp->GetContext();
  JoltC_TransformedShape_t* result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_CastRayClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastRayClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
};

void JoltC_CastRayClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
};

bool JoltC_CastRayClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_CastRayClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_CastRayClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

//region properties

JoltC_RayCastResult_t * JoltC_CastRayClosestHitCollisionCollector_mHit_Get(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  const RayCastResult& resultValue = selfCpp->mHit;
  JoltC_RayCastResult_t* result = new JoltC_RayCastResult_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_CastRayClosestHitCollisionCollector_mHit_Set(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  JoltC_RayCastResult_t * mHit
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<RayCastResult *>(mHit->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

