#include "JoltC/JPC_CollideShapeClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollideShapeClosestHitCollisionCollector_t * JPC_CollideShapeClosestHitCollisionCollector_new() {
  JPC_CollideShapeClosestHitCollisionCollector_t * cInstance = new JPC_CollideShapeClosestHitCollisionCollector_t();
  CollideShapeClosestHitCollisionCollector * cppInstance = new CollideShapeClosestHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_CollideShapeClosestHitCollisionCollector_HadHit(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JPC_CollideShapeClosestHitCollisionCollector_Reset(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CollideShapeClosestHitCollisionCollector_SetContext(
  JPC_CollideShapeClosestHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CollideShapeClosestHitCollisionCollector_GetContext(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CollideShapeClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CollideShapeClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CollideShapeClosestHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CollideShapeClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CollideShapeClosestHitCollisionCollector_ForceEarlyOut(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CollideShapeClosestHitCollisionCollector_ShouldEarlyOut(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CollideShapeClosestHitCollisionCollector_GetEarlyOutFraction(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CollideShapeClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

//region properties

JPC_CollideShapeResult_t * JPC_CollideShapeClosestHitCollisionCollector_mHit_Get(
  JPC_CollideShapeClosestHitCollisionCollector_t * self
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  CollideShapeResult resultValue = selfCpp->mHit;
  CollideShapeResult* result = new CollideShapeResult(resultValue);
  return reinterpret_cast<JPC_CollideShapeResult_t *>(result);
};

void JPC_CollideShapeClosestHitCollisionCollector_mHit_Set(
  JPC_CollideShapeClosestHitCollisionCollector_t * self,
  JPC_CollideShapeResult_t * mHit
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<CollideShapeResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

