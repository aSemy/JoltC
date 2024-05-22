#include "JoltC/JPC_CastRayClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CastRayClosestHitCollisionCollector_t * JPC_CastRayClosestHitCollisionCollector_new() {
  JPC_CastRayClosestHitCollisionCollector_t * cInstance = new JPC_CastRayClosestHitCollisionCollector_t();
  CastRayClosestHitCollisionCollector * cppInstance = new CastRayClosestHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_CastRayClosestHitCollisionCollector_HadHit(
  JPC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JPC_CastRayClosestHitCollisionCollector_Reset(
  JPC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CastRayClosestHitCollisionCollector_SetContext(
  JPC_CastRayClosestHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CastRayClosestHitCollisionCollector_GetContext(
  JPC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CastRayClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CastRayClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CastRayClosestHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CastRayClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CastRayClosestHitCollisionCollector_ForceEarlyOut(
  JPC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CastRayClosestHitCollisionCollector_ShouldEarlyOut(
  JPC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CastRayClosestHitCollisionCollector_GetEarlyOutFraction(
  JPC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CastRayClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

//region properties

JPC_RayCastResult_t * JPC_CastRayClosestHitCollisionCollector_mHit_Get(
  JPC_CastRayClosestHitCollisionCollector_t * self
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  RayCastResult resultValue = selfCpp->mHit;
  RayCastResult* result = new RayCastResult(resultValue);
  return reinterpret_cast<JPC_RayCastResult_t *>(result);
};

void JPC_CastRayClosestHitCollisionCollector_mHit_Set(
  JPC_CastRayClosestHitCollisionCollector_t * self,
  JPC_RayCastResult_t * mHit
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<RayCastResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

