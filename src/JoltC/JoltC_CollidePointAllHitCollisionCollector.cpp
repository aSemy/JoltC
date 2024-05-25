#include "JoltC/JPC_CollidePointAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollidePointAllHitCollisionCollector_t * JPC_CollidePointAllHitCollisionCollector_new() {
  JPC_CollidePointAllHitCollisionCollector_t * cInstance = new JPC_CollidePointAllHitCollisionCollector_t();
  CollidePointAllHitCollisionCollector * cppInstance = new CollidePointAllHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_CollidePointAllHitCollisionCollector_Sort(
  JPC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Sort();
};

bool JPC_CollidePointAllHitCollisionCollector_HadHit(
  JPC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JPC_CollidePointAllHitCollisionCollector_Reset(
  JPC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CollidePointAllHitCollisionCollector_SetContext(
  JPC_CollidePointAllHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CollidePointAllHitCollisionCollector_GetContext(
  JPC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CollidePointAllHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CollidePointAllHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CollidePointAllHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CollidePointAllHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CollidePointAllHitCollisionCollector_ForceEarlyOut(
  JPC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CollidePointAllHitCollisionCollector_ShouldEarlyOut(
  JPC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CollidePointAllHitCollisionCollector_GetEarlyOutFraction(
  JPC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CollidePointAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

//region properties

JPC_ArrayCollidePointResult_t * JPC_CollidePointAllHitCollisionCollector_mHits_Get(
  JPC_CollidePointAllHitCollisionCollector_t * self
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  ArrayCollidePointResult resultValue = selfCpp->mHits;
  ArrayCollidePointResult* result = new ArrayCollidePointResult(resultValue);
  return reinterpret_cast<JPC_ArrayCollidePointResult_t *>(result);
};

void JPC_CollidePointAllHitCollisionCollector_mHits_Set(
  JPC_CollidePointAllHitCollisionCollector_t * self,
  JPC_ArrayCollidePointResult_t * mHits
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *reinterpret_cast<ArrayCollidePointResult *>(mHits->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

