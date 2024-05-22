#include "JoltC/JPC_CollidePointAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollidePointAnyHitCollisionCollector_t * JPC_CollidePointAnyHitCollisionCollector_new() {
  JPC_CollidePointAnyHitCollisionCollector_t * cInstance = new JPC_CollidePointAnyHitCollisionCollector_t();
  CollidePointAnyHitCollisionCollector * cppInstance = new CollidePointAnyHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_CollidePointAnyHitCollisionCollector_HadHit(
  JPC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JPC_CollidePointAnyHitCollisionCollector_Reset(
  JPC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CollidePointAnyHitCollisionCollector_SetContext(
  JPC_CollidePointAnyHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CollidePointAnyHitCollisionCollector_GetContext(
  JPC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CollidePointAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CollidePointAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CollidePointAnyHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CollidePointAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CollidePointAnyHitCollisionCollector_ForceEarlyOut(
  JPC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CollidePointAnyHitCollisionCollector_ShouldEarlyOut(
  JPC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CollidePointAnyHitCollisionCollector_GetEarlyOutFraction(
  JPC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CollidePointAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

//region properties

JPC_CollidePointResult_t * JPC_CollidePointAnyHitCollisionCollector_mHit_Get(
  JPC_CollidePointAnyHitCollisionCollector_t * self
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  CollidePointResult resultValue = selfCpp->mHit;
  CollidePointResult* result = new CollidePointResult(resultValue);
  return reinterpret_cast<JPC_CollidePointResult_t *>(result);
};

void JPC_CollidePointAnyHitCollisionCollector_mHit_Set(
  JPC_CollidePointAnyHitCollisionCollector_t * self,
  JPC_CollidePointResult_t * mHit
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<CollidePointResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

