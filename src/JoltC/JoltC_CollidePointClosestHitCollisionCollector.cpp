#include "JoltC/JPC_CollidePointClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollidePointClosestHitCollisionCollector_t * JPC_CollidePointClosestHitCollisionCollector_new() {
  JPC_CollidePointClosestHitCollisionCollector_t * cInstance = new JPC_CollidePointClosestHitCollisionCollector_t();
  CollidePointClosestHitCollisionCollector * cppInstance = new CollidePointClosestHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_CollidePointClosestHitCollisionCollector_HadHit(
  JPC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JPC_CollidePointClosestHitCollisionCollector_Reset(
  JPC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CollidePointClosestHitCollisionCollector_SetContext(
  JPC_CollidePointClosestHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CollidePointClosestHitCollisionCollector_GetContext(
  JPC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CollidePointClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CollidePointClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CollidePointClosestHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CollidePointClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CollidePointClosestHitCollisionCollector_ForceEarlyOut(
  JPC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CollidePointClosestHitCollisionCollector_ShouldEarlyOut(
  JPC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CollidePointClosestHitCollisionCollector_GetEarlyOutFraction(
  JPC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CollidePointClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

//region properties

JPC_CollidePointResult_t * JPC_CollidePointClosestHitCollisionCollector_mHit_Get(
  JPC_CollidePointClosestHitCollisionCollector_t * self
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  CollidePointResult resultValue = selfCpp->mHit;
  CollidePointResult* result = new CollidePointResult(resultValue);
  return reinterpret_cast<JPC_CollidePointResult_t *>(result);
};

void JPC_CollidePointClosestHitCollisionCollector_mHit_Set(
  JPC_CollidePointClosestHitCollisionCollector_t * self,
  JPC_CollidePointResult_t * mHit
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<CollidePointResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

