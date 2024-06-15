#include "JoltC/JoltC_CollideShapeAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CollideShapeAllHitCollisionCollector` instance.
 */
JoltC_CollideShapeAllHitCollisionCollector_t * JoltC_CollideShapeAllHitCollisionCollector_new() {
  JoltC_CollideShapeAllHitCollisionCollector_t * cInstance = new JoltC_CollideShapeAllHitCollisionCollector_t();
  CollideShapeAllHitCollisionCollector * cppInstance = new CollideShapeAllHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_CollideShapeAllHitCollisionCollector_destroy(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
){
  if (self == NULL) return;
  delete static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_CollideShapeAllHitCollisionCollector_Sort(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->Sort();
}

bool JoltC_CollideShapeAllHitCollisionCollector_HadHit(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  return selfCpp->HadHit();
}

void JoltC_CollideShapeAllHitCollisionCollector_Reset(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CollideShapeAllHitCollisionCollector_SetContext(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CollideShapeAllHitCollisionCollector_GetContext(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CollideShapeAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollideShapeAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollideShapeAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CollideShapeAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CollideShapeAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CollideShapeAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion

//region properties

JoltC_ArrayCollideShapeResult_t * JoltC_CollideShapeAllHitCollisionCollector_mHits_Get(
  JoltC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  ArrayCollideShapeResult * resultPtr = new ArrayCollideShapeResult();
  *resultPtr = selfCpp->mHits;
  JoltC_ArrayCollideShapeResult_t * result = new JoltC_ArrayCollideShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollideShapeAllHitCollisionCollector_mHits_Set(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  JoltC_ArrayCollideShapeResult_t * mHits
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *static_cast<ArrayCollideShapeResult *>(mHits->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
