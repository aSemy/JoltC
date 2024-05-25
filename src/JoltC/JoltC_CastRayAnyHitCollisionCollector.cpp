#include "JoltC/JPC_CastRayAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CastRayAnyHitCollisionCollector_t * JPC_CastRayAnyHitCollisionCollector_new() {
  JPC_CastRayAnyHitCollisionCollector_t * cInstance = new JPC_CastRayAnyHitCollisionCollector_t();
  CastRayAnyHitCollisionCollector * cppInstance = new CastRayAnyHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_CastRayAnyHitCollisionCollector_HadHit(
  JPC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JPC_CastRayAnyHitCollisionCollector_Reset(
  JPC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CastRayAnyHitCollisionCollector_SetContext(
  JPC_CastRayAnyHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CastRayAnyHitCollisionCollector_GetContext(
  JPC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CastRayAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CastRayAnyHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CastRayAnyHitCollisionCollector_ForceEarlyOut(
  JPC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CastRayAnyHitCollisionCollector_ShouldEarlyOut(
  JPC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CastRayAnyHitCollisionCollector_GetEarlyOutFraction(
  JPC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CastRayAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

//region properties

JPC_RayCastResult_t * JPC_CastRayAnyHitCollisionCollector_mHit_Get(
  JPC_CastRayAnyHitCollisionCollector_t * self
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  RayCastResult resultValue = selfCpp->mHit;
  RayCastResult* result = new RayCastResult(resultValue);
  return reinterpret_cast<JPC_RayCastResult_t *>(result);
};

void JPC_CastRayAnyHitCollisionCollector_mHit_Set(
  JPC_CastRayAnyHitCollisionCollector_t * self,
  JPC_RayCastResult_t * mHit
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<RayCastResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

