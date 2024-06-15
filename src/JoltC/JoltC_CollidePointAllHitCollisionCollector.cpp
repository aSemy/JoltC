#include "JoltC/JoltC_CollidePointAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CollidePointAllHitCollisionCollector` instance.
 */
JoltC_CollidePointAllHitCollisionCollector_t * JoltC_CollidePointAllHitCollisionCollector_new() {
  JoltC_CollidePointAllHitCollisionCollector_t * cInstance = new JoltC_CollidePointAllHitCollisionCollector_t();
  CollidePointAllHitCollisionCollector * cppInstance = new CollidePointAllHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_CollidePointAllHitCollisionCollector_destroy(
  JoltC_CollidePointAllHitCollisionCollector_t * self
){
  if (self == NULL) return;
  delete static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_CollidePointAllHitCollisionCollector_Sort(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  selfCpp->Sort();
}

bool JoltC_CollidePointAllHitCollisionCollector_HadHit(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  return selfCpp->HadHit();
}

void JoltC_CollidePointAllHitCollisionCollector_Reset(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CollidePointAllHitCollisionCollector_SetContext(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CollidePointAllHitCollisionCollector_GetContext(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CollidePointAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollidePointAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollidePointAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CollidePointAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CollidePointAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CollidePointAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion

//region properties

JoltC_ArrayCollidePointResult_t * JoltC_CollidePointAllHitCollisionCollector_mHits_Get(
  JoltC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  ArrayCollidePointResult * resultPtr = new ArrayCollidePointResult();
  *resultPtr = selfCpp->mHits;
  JoltC_ArrayCollidePointResult_t * result = new JoltC_ArrayCollidePointResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollidePointAllHitCollisionCollector_mHits_Set(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  JoltC_ArrayCollidePointResult_t * mHits
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *static_cast<ArrayCollidePointResult *>(mHits->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
