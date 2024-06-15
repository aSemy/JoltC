#include "JoltC/JoltC_CastShapeAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CastShapeAllHitCollisionCollector` instance.
 */
JoltC_CastShapeAllHitCollisionCollector_t * JoltC_CastShapeAllHitCollisionCollector_new() {
  JoltC_CastShapeAllHitCollisionCollector_t * cInstance = new JoltC_CastShapeAllHitCollisionCollector_t();
  CastShapeAllHitCollisionCollector * cppInstance = new CastShapeAllHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_CastShapeAllHitCollisionCollector_destroy(
  JoltC_CastShapeAllHitCollisionCollector_t * self
){
  if (self == NULL) return;
  delete static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  free(self);
}

//endregion
//region functions

void JoltC_CastShapeAllHitCollisionCollector_Sort(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->Sort();
}

bool JoltC_CastShapeAllHitCollisionCollector_HadHit(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  return selfCpp->HadHit();
}

void JoltC_CastShapeAllHitCollisionCollector_Reset(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CastShapeAllHitCollisionCollector_SetContext(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CastShapeAllHitCollisionCollector_GetContext(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CastShapeAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CastShapeAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CastShapeAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CastShapeAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CastShapeAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CastShapeAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion

//region properties

JoltC_ArrayShapeCastResult_t * JoltC_CastShapeAllHitCollisionCollector_mHits_Get(
  JoltC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  ArrayShapeCastResult * resultPtr = new ArrayShapeCastResult();
  *resultPtr = selfCpp->mHits;
  JoltC_ArrayShapeCastResult_t * result = new JoltC_ArrayShapeCastResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CastShapeAllHitCollisionCollector_mHits_Set(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  JoltC_ArrayShapeCastResult_t * mHits
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *static_cast<ArrayShapeCastResult *>(mHits->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
