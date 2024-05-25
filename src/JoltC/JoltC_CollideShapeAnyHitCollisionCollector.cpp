#include "JoltC/JPC_CollideShapeAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollideShapeAnyHitCollisionCollector_t * JPC_CollideShapeAnyHitCollisionCollector_new() {
  JPC_CollideShapeAnyHitCollisionCollector_t * cInstance = new JPC_CollideShapeAnyHitCollisionCollector_t();
  CollideShapeAnyHitCollisionCollector * cppInstance = new CollideShapeAnyHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_CollideShapeAnyHitCollisionCollector_HadHit(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JPC_CollideShapeAnyHitCollisionCollector_Reset(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CollideShapeAnyHitCollisionCollector_SetContext(
  JPC_CollideShapeAnyHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CollideShapeAnyHitCollisionCollector_GetContext(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CollideShapeAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CollideShapeAnyHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CollideShapeAnyHitCollisionCollector_ForceEarlyOut(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CollideShapeAnyHitCollisionCollector_ShouldEarlyOut(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CollideShapeAnyHitCollisionCollector_GetEarlyOutFraction(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CollideShapeAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

//region properties

JPC_CollideShapeResult_t * JPC_CollideShapeAnyHitCollisionCollector_mHit_Get(
  JPC_CollideShapeAnyHitCollisionCollector_t * self
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  CollideShapeResult resultValue = selfCpp->mHit;
  CollideShapeResult* result = new CollideShapeResult(resultValue);
  return reinterpret_cast<JPC_CollideShapeResult_t *>(result);
};

void JPC_CollideShapeAnyHitCollisionCollector_mHit_Set(
  JPC_CollideShapeAnyHitCollisionCollector_t * self,
  JPC_CollideShapeResult_t * mHit
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<CollideShapeResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

