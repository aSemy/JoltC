#include "JoltC/JPC_CollideShapeAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollideShapeAllHitCollisionCollector_t * JPC_CollideShapeAllHitCollisionCollector_new() {
  JPC_CollideShapeAllHitCollisionCollector_t * cInstance = new JPC_CollideShapeAllHitCollisionCollector_t();
  CollideShapeAllHitCollisionCollector * cppInstance = new CollideShapeAllHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_CollideShapeAllHitCollisionCollector_Sort(
  JPC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Sort();
};

bool JPC_CollideShapeAllHitCollisionCollector_HadHit(
  JPC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JPC_CollideShapeAllHitCollisionCollector_Reset(
  JPC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CollideShapeAllHitCollisionCollector_SetContext(
  JPC_CollideShapeAllHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CollideShapeAllHitCollisionCollector_GetContext(
  JPC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CollideShapeAllHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CollideShapeAllHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CollideShapeAllHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CollideShapeAllHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CollideShapeAllHitCollisionCollector_ForceEarlyOut(
  JPC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CollideShapeAllHitCollisionCollector_ShouldEarlyOut(
  JPC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CollideShapeAllHitCollisionCollector_GetEarlyOutFraction(
  JPC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CollideShapeAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

//region properties

JPC_ArrayCollideShapeResult_t * JPC_CollideShapeAllHitCollisionCollector_mHits_Get(
  JPC_CollideShapeAllHitCollisionCollector_t * self
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  ArrayCollideShapeResult resultValue = selfCpp->mHits;
  ArrayCollideShapeResult* result = new ArrayCollideShapeResult(resultValue);
  return reinterpret_cast<JPC_ArrayCollideShapeResult_t *>(result);
};

void JPC_CollideShapeAllHitCollisionCollector_mHits_Set(
  JPC_CollideShapeAllHitCollisionCollector_t * self,
  JPC_ArrayCollideShapeResult_t * mHits
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *reinterpret_cast<ArrayCollideShapeResult *>(mHits->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

