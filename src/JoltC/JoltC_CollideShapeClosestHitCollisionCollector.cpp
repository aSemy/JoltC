#include "JoltC/JoltC_CollideShapeClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CollideShapeClosestHitCollisionCollector` instance.
 */
JoltC_CollideShapeClosestHitCollisionCollector_t * JoltC_CollideShapeClosestHitCollisionCollector_new() {
  JoltC_CollideShapeClosestHitCollisionCollector_t * cInstance = new JoltC_CollideShapeClosestHitCollisionCollector_t();
  CollideShapeClosestHitCollisionCollector * cppInstance = new CollideShapeClosestHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_CollideShapeClosestHitCollisionCollector_destroy(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
){
  if (self == NULL) return;
  delete static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_CollideShapeClosestHitCollisionCollector_HadHit(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  return selfCpp->HadHit();
}

void JoltC_CollideShapeClosestHitCollisionCollector_Reset(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CollideShapeClosestHitCollisionCollector_SetContext(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CollideShapeClosestHitCollisionCollector_GetContext(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CollideShapeClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollideShapeClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollideShapeClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CollideShapeClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CollideShapeClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CollideShapeClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion

//region properties

JoltC_CollideShapeResult_t * JoltC_CollideShapeClosestHitCollisionCollector_mHit_Get(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  CollideShapeResult * resultPtr = new CollideShapeResult();
  *resultPtr = selfCpp->mHit;
  JoltC_CollideShapeResult_t * result = new JoltC_CollideShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollideShapeClosestHitCollisionCollector_mHit_Set(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  JoltC_CollideShapeResult_t * mHit
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *static_cast<CollideShapeResult *>(mHit->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
