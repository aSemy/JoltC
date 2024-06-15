#include "JoltC/JoltC_CollideShapeAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CollideShapeAnyHitCollisionCollector` instance.
 */
JoltC_CollideShapeAnyHitCollisionCollector_t * JoltC_CollideShapeAnyHitCollisionCollector_new() {
  JoltC_CollideShapeAnyHitCollisionCollector_t * cInstance = new JoltC_CollideShapeAnyHitCollisionCollector_t();
  CollideShapeAnyHitCollisionCollector * cppInstance = new CollideShapeAnyHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_CollideShapeAnyHitCollisionCollector_destroy(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
){
  if (self == NULL) return;
  delete static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_CollideShapeAnyHitCollisionCollector_HadHit(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  return selfCpp->HadHit();
}

void JoltC_CollideShapeAnyHitCollisionCollector_Reset(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CollideShapeAnyHitCollisionCollector_SetContext(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CollideShapeAnyHitCollisionCollector_GetContext(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CollideShapeAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollideShapeAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollideShapeAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CollideShapeAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CollideShapeAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CollideShapeAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion

//region properties

JoltC_CollideShapeResult_t * JoltC_CollideShapeAnyHitCollisionCollector_mHit_Get(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  CollideShapeResult * resultPtr = new CollideShapeResult();
  *resultPtr = selfCpp->mHit;
  JoltC_CollideShapeResult_t * result = new JoltC_CollideShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollideShapeAnyHitCollisionCollector_mHit_Set(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  JoltC_CollideShapeResult_t * mHit
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *static_cast<CollideShapeResult *>(mHit->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
