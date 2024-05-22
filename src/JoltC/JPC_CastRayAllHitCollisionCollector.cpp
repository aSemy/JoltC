#include "JoltC/JPC_CastRayAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CastRayAllHitCollisionCollector_t * JPC_CastRayAllHitCollisionCollector_new() {
  JPC_CastRayAllHitCollisionCollector_t * cInstance = new JPC_CastRayAllHitCollisionCollector_t();
  CastRayAllHitCollisionCollector * cppInstance = new CastRayAllHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_CastRayAllHitCollisionCollector_Sort(
  JPC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Sort();
};

bool JPC_CastRayAllHitCollisionCollector_HadHit(
  JPC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JPC_CastRayAllHitCollisionCollector_Reset(
  JPC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CastRayAllHitCollisionCollector_SetContext(
  JPC_CastRayAllHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CastRayAllHitCollisionCollector_GetContext(
  JPC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CastRayAllHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CastRayAllHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CastRayAllHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CastRayAllHitCollisionCollector_t * self,
  float inFraction
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CastRayAllHitCollisionCollector_ForceEarlyOut(
  JPC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CastRayAllHitCollisionCollector_ShouldEarlyOut(
  JPC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CastRayAllHitCollisionCollector_GetEarlyOutFraction(
  JPC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CastRayAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

//region properties

JPC_ArrayRayCastResult_t * JPC_CastRayAllHitCollisionCollector_mHits_Get(
  JPC_CastRayAllHitCollisionCollector_t * self
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  ArrayRayCastResult resultValue = selfCpp->mHits;
  ArrayRayCastResult* result = new ArrayRayCastResult(resultValue);
  return reinterpret_cast<JPC_ArrayRayCastResult_t *>(result);
};

void JPC_CastRayAllHitCollisionCollector_mHits_Set(
  JPC_CastRayAllHitCollisionCollector_t * self,
  JPC_ArrayRayCastResult_t * mHits
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *reinterpret_cast<ArrayRayCastResult *>(mHits->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

