#include "JoltC/JPC_CastShapeClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CastShapeClosestHitCollisionCollector_t * JPC_CastShapeClosestHitCollisionCollector_new() {
  JPC_CastShapeClosestHitCollisionCollector_t * cInstance = new JPC_CastShapeClosestHitCollisionCollector_t();
  CastShapeClosestHitCollisionCollector * cppInstance = new CastShapeClosestHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_CastShapeClosestHitCollisionCollector_HadHit(
  JPC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JPC_CastShapeClosestHitCollisionCollector_Reset(
  JPC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CastShapeClosestHitCollisionCollector_SetContext(
  JPC_CastShapeClosestHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CastShapeClosestHitCollisionCollector_GetContext(
  JPC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CastShapeClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CastShapeClosestHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CastShapeClosestHitCollisionCollector_ForceEarlyOut(
  JPC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CastShapeClosestHitCollisionCollector_ShouldEarlyOut(
  JPC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CastShapeClosestHitCollisionCollector_GetEarlyOutFraction(
  JPC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CastShapeClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

//region properties

JPC_ShapeCastResult_t * JPC_CastShapeClosestHitCollisionCollector_mHit_Get(
  JPC_CastShapeClosestHitCollisionCollector_t * self
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  ShapeCastResult resultValue = selfCpp->mHit;
  ShapeCastResult* result = new ShapeCastResult(resultValue);
  return reinterpret_cast<JPC_ShapeCastResult_t *>(result);
};

void JPC_CastShapeClosestHitCollisionCollector_mHit_Set(
  JPC_CastShapeClosestHitCollisionCollector_t * self,
  JPC_ShapeCastResult_t * mHit
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<ShapeCastResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

