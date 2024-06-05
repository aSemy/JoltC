#include "JoltC/JoltC_CollidePointClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

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
  bool result = selfCpp->HadHit();
  return result;
};

void JoltC_CollidePointClosestHitCollisionCollector_Reset(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  selfCpp->Reset();
};

void JoltC_CollidePointClosestHitCollisionCollector_SetContext(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  selfCpp->SetContext(
    reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

JoltC_TransformedShape_t * JoltC_CollidePointClosestHitCollisionCollector_GetContext(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * resultValue = selfCpp->GetContext();
  JoltC_TransformedShape_t* result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_CollidePointClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
};

void JoltC_CollidePointClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
};

void JoltC_CollidePointClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
};

bool JoltC_CollidePointClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_CollidePointClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_CollidePointClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

//region properties

JoltC_CollidePointResult_t * JoltC_CollidePointClosestHitCollisionCollector_mHit_Get(
  JoltC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  const CollidePointResult& resultValue = selfCpp->mHit;
  JoltC_CollidePointResult_t* result = new JoltC_CollidePointResult_t();
  result->obj = const_cast<void*>(reinterpret_cast<const void*>(&resultValue));
  return result;
};

void JoltC_CollidePointClosestHitCollisionCollector_mHit_Set(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  JoltC_CollidePointResult_t * mHit
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<CollidePointResult *>(mHit->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

