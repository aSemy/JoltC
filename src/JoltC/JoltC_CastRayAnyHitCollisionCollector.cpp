#include "JoltC/JoltC_CastRayAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CastRayAnyHitCollisionCollector` instance.
 */
JoltC_CastRayAnyHitCollisionCollector_t * JoltC_CastRayAnyHitCollisionCollector_new() {
  JoltC_CastRayAnyHitCollisionCollector_t * cInstance = new JoltC_CastRayAnyHitCollisionCollector_t();
  CastRayAnyHitCollisionCollector * cppInstance = new CastRayAnyHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_CastRayAnyHitCollisionCollector_destroy(
  JoltC_CastRayAnyHitCollisionCollector_t * self
){
  if (self == NULL) return;
  delete static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_CastRayAnyHitCollisionCollector_HadHit(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  return selfCpp->HadHit();
}

void JoltC_CastRayAnyHitCollisionCollector_Reset(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CastRayAnyHitCollisionCollector_SetContext(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CastRayAnyHitCollisionCollector_GetContext(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CastRayAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CastRayAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CastRayAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CastRayAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CastRayAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CastRayAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion

//region properties

JoltC_RayCastResult_t * JoltC_CastRayAnyHitCollisionCollector_mHit_Get(
  JoltC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  RayCastResult * resultPtr = new RayCastResult();
  *resultPtr = selfCpp->mHit;
  JoltC_RayCastResult_t * result = new JoltC_RayCastResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CastRayAnyHitCollisionCollector_mHit_Set(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  JoltC_RayCastResult_t * mHit
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *static_cast<RayCastResult *>(mHit->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
