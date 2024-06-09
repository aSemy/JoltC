#include "JoltC/JoltC_CollidePointAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CollidePointAnyHitCollisionCollector` instance.
 */
JoltC_CollidePointAnyHitCollisionCollector_t * JoltC_CollidePointAnyHitCollisionCollector_new() {
  JoltC_CollidePointAnyHitCollisionCollector_t * cInstance = new JoltC_CollidePointAnyHitCollisionCollector_t();
  CollidePointAnyHitCollisionCollector * cppInstance = new CollidePointAnyHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_CollidePointAnyHitCollisionCollector_HadHit(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  return selfCpp->HadHit();
}

void JoltC_CollidePointAnyHitCollisionCollector_Reset(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CollidePointAnyHitCollisionCollector_SetContext(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CollidePointAnyHitCollisionCollector_GetContext(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CollidePointAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollidePointAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollidePointAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CollidePointAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CollidePointAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CollidePointAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion

//region properties

JoltC_CollidePointResult_t * JoltC_CollidePointAnyHitCollisionCollector_mHit_Get(
  JoltC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  CollidePointResult * resultPtr = new CollidePointResult();
  *resultPtr = selfCpp->mHit;
  JoltC_CollidePointResult_t * result = new JoltC_CollidePointResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollidePointAnyHitCollisionCollector_mHit_Set(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  JoltC_CollidePointResult_t * mHit
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *static_cast<CollidePointResult *>(mHit->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

