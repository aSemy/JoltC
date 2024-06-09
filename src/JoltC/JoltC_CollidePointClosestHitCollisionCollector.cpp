#include "JoltC/JoltC_CollidePointClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CollidePointClosestHitCollisionCollector` instance.
 */
JoltC_CollidePointClosestHitCollisionCollector_t * JoltC_CollidePointClosestHitCollisionCollector_new() {
  JoltC_CollidePointClosestHitCollisionCollector_t * cInstance = new JoltC_CollidePointClosestHitCollisionCollector_t();
  CollidePointClosestHitCollisionCollector * cppInstance = new CollidePointClosestHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region functions

bool JoltC_CollidePointClosestHitCollisionCollector_HadHit(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  return selfCpp->HadHit();
}

void JoltC_CollidePointClosestHitCollisionCollector_Reset(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CollidePointClosestHitCollisionCollector_SetContext(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CollidePointClosestHitCollisionCollector_GetContext(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CollidePointClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollidePointClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollidePointClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CollidePointClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CollidePointClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CollidePointClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion

//region properties

JoltC_CollidePointResult_t * JoltC_CollidePointClosestHitCollisionCollector_mHit_Get(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  CollidePointResult * resultPtr = new CollidePointResult();
  *resultPtr = selfCpp->mHit;
  JoltC_CollidePointResult_t * result = new JoltC_CollidePointResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollidePointClosestHitCollisionCollector_mHit_Set(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  JoltC_CollidePointResult_t * mHit
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *static_cast<CollidePointResult *>(mHit->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

