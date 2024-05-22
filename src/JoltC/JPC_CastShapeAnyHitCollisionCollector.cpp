#include "JoltC/JPC_CastShapeAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CastShapeAnyHitCollisionCollector_t * JPC_CastShapeAnyHitCollisionCollector_new() {
  JPC_CastShapeAnyHitCollisionCollector_t * cInstance = new JPC_CastShapeAnyHitCollisionCollector_t();
  CastShapeAnyHitCollisionCollector * cppInstance = new CastShapeAnyHitCollisionCollector();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_CastShapeAnyHitCollisionCollector_HadHit(
  JPC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->HadHit();
  return result;
};

void JPC_CastShapeAnyHitCollisionCollector_Reset(
  JPC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JPC_CastShapeAnyHitCollisionCollector_SetContext(
  JPC_CastShapeAnyHitCollisionCollector_t * self,
  const JPC_TransformedShape_t * inContext
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->SetContext(
  reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

const JPC_TransformedShape_t * JPC_CastShapeAnyHitCollisionCollector_GetContext(
  JPC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  const TransformedShape * result = selfCpp->GetContext();
  return reinterpret_cast<const JPC_TransformedShape_t *>(result);
};

void JPC_CastShapeAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JPC_CastShapeAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
  inFraction
  );
};

void JPC_CastShapeAnyHitCollisionCollector_ResetEarlyOutFraction(
  JPC_CastShapeAnyHitCollisionCollector_t * self,
  float inFraction
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
  inFraction
  );
};

void JPC_CastShapeAnyHitCollisionCollector_ForceEarlyOut(
  JPC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JPC_CastShapeAnyHitCollisionCollector_ShouldEarlyOut(
  JPC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JPC_CastShapeAnyHitCollisionCollector_GetEarlyOutFraction(
  JPC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JPC_CastShapeAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JPC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion functions

//region properties

JPC_ShapeCastResult_t * JPC_CastShapeAnyHitCollisionCollector_mHit_Get(
  JPC_CastShapeAnyHitCollisionCollector_t * self
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  ShapeCastResult resultValue = selfCpp->mHit;
  ShapeCastResult* result = new ShapeCastResult(resultValue);
  return reinterpret_cast<JPC_ShapeCastResult_t *>(result);
};

void JPC_CastShapeAnyHitCollisionCollector_mHit_Set(
  JPC_CastShapeAnyHitCollisionCollector_t * self,
  JPC_ShapeCastResult_t * mHit
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<ShapeCastResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

