#include "JoltC/JoltC_CastRayClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CastRayClosestHitCollisionCollector` instance.
 */
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
  return selfCpp->HadHit();
}

void JoltC_CastRayClosestHitCollisionCollector_Reset(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CastRayClosestHitCollisionCollector_SetContext(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CastRayClosestHitCollisionCollector_GetContext(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CastRayClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CastRayClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CastRayClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CastRayClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CastRayClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CastRayClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion

//region properties

JoltC_RayCastResult_t * JoltC_CastRayClosestHitCollisionCollector_mHit_Get(
  JoltC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  RayCastResult * resultPtr = new RayCastResult();
  *resultPtr = selfCpp->mHit;
  JoltC_RayCastResult_t * result = new JoltC_RayCastResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CastRayClosestHitCollisionCollector_mHit_Set(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  JoltC_RayCastResult_t * mHit
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *static_cast<RayCastResult *>(mHit->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

