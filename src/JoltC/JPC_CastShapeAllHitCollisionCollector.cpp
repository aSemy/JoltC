#include "JoltC/JPC_CastShapeAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CastShapeAllHitCollisionCollector_t * JPC_CastShapeAllHitCollisionCollector_new() {
  JPC_CastShapeAllHitCollisionCollector_t * cInstance = new JPC_CastShapeAllHitCollisionCollector_t();
  CastShapeAllHitCollisionCollector * cppInstance = new CastShapeAllHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

void JPC_CastShapeAllHitCollisionCollector_Sort(
  JPC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Sort();
};

bool JPC_CastShapeAllHitCollisionCollector_HadHit(
  JPC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JPC_CastShapeAllHitCollisionCollector_Reset(
  JPC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CastShapeAllHitCollisionCollector_SetContext(
  JPC_CastShapeAllHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CastShapeAllHitCollisionCollector_GetContext(
  JPC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CastShapeAllHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CastShapeAllHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CastShapeAllHitCollisionCollector_ForceEarlyOut(
  JPC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CastShapeAllHitCollisionCollector_ShouldEarlyOut(
  JPC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CastShapeAllHitCollisionCollector_GetEarlyOutFraction(
  JPC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CastShapeAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

//region properties

JPC_ArrayShapeCastResult_t * JPC_CastShapeAllHitCollisionCollector_mHits_Get(
  JPC_CastShapeAllHitCollisionCollector_t * self
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  ArrayShapeCastResult resultValue = selfCpp->mHits;
  ArrayShapeCastResult* result = new ArrayShapeCastResult(resultValue);
  return reinterpret_cast<JPC_ArrayShapeCastResult_t *>(result);
};

void JPC_CastShapeAllHitCollisionCollector_mHits_Set(
  JPC_CastShapeAllHitCollisionCollector_t * self,
  JPC_ArrayShapeCastResult_t * mHits
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *reinterpret_cast<ArrayShapeCastResult *>(mHits->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

