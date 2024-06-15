#include "JoltC/JoltC_CastShapeClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CastShapeClosestHitCollisionCollector` instance.
 */
JoltC_CastShapeClosestHitCollisionCollector_t * JoltC_CastShapeClosestHitCollisionCollector_new() {
  JoltC_CastShapeClosestHitCollisionCollector_t * cInstance = new JoltC_CastShapeClosestHitCollisionCollector_t();
  CastShapeClosestHitCollisionCollector * cppInstance = new CastShapeClosestHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_CastShapeClosestHitCollisionCollector_destroy(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
){
  if (self == NULL) return;
  delete static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_CastShapeClosestHitCollisionCollector_HadHit(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  return selfCpp->HadHit();
}

void JoltC_CastShapeClosestHitCollisionCollector_Reset(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CastShapeClosestHitCollisionCollector_SetContext(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CastShapeClosestHitCollisionCollector_GetContext(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CastShapeClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CastShapeClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CastShapeClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CastShapeClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CastShapeClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CastShapeClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion

//region properties

JoltC_ShapeCastResult_t * JoltC_CastShapeClosestHitCollisionCollector_mHit_Get(
  JoltC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  ShapeCastResult * resultPtr = new ShapeCastResult();
  *resultPtr = selfCpp->mHit;
  JoltC_ShapeCastResult_t * result = new JoltC_ShapeCastResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CastShapeClosestHitCollisionCollector_mHit_Set(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  JoltC_ShapeCastResult_t * mHit
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *static_cast<ShapeCastResult *>(mHit->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
