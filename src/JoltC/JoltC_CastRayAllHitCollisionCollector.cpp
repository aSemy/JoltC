#include "JoltC/JoltC_CastRayAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CastRayAllHitCollisionCollector` instance.
 */
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
}

bool JoltC_CastRayAllHitCollisionCollector_HadHit(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  return selfCpp->HadHit();
}

void JoltC_CastRayAllHitCollisionCollector_Reset(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CastRayAllHitCollisionCollector_SetContext(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CastRayAllHitCollisionCollector_GetContext(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CastRayAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CastRayAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CastRayAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CastRayAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CastRayAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CastRayAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion

//region properties

JoltC_ArrayRayCastResult_t * JoltC_CastRayAllHitCollisionCollector_mHits_Get(
  JoltC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  ArrayRayCastResult * resultPtr = new ArrayRayCastResult();
  *resultPtr = selfCpp->mHits;
  JoltC_ArrayRayCastResult_t * result = new JoltC_ArrayRayCastResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CastRayAllHitCollisionCollector_mHits_Set(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  JoltC_ArrayRayCastResult_t * mHits
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *static_cast<ArrayRayCastResult *>(mHits->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

