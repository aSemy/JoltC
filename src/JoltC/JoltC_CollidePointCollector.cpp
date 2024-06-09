#include "JoltC/JoltC_CollidePointCollector.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_CollidePointAllHitCollisionCollector_t into JoltC_CollidePointCollector_t.
 */
JoltC_CollidePointCollector_t * JoltC_CollidePointCollector_From_CollidePointAllHitCollisionCollector(
  JoltC_CollidePointAllHitCollisionCollector_t * subtype
) {
  return (JoltC_CollidePointCollector_t*) subtype;
};

/**
 * Convert an instance of JoltC_CollidePointClosestHitCollisionCollector_t into JoltC_CollidePointCollector_t.
 */
JoltC_CollidePointCollector_t * JoltC_CollidePointCollector_From_CollidePointClosestHitCollisionCollector(
  JoltC_CollidePointClosestHitCollisionCollector_t * subtype
) {
  return (JoltC_CollidePointCollector_t*) subtype;
};

/**
 * Convert an instance of JoltC_CollidePointAnyHitCollisionCollector_t into JoltC_CollidePointCollector_t.
 */
JoltC_CollidePointCollector_t * JoltC_CollidePointCollector_From_CollidePointAnyHitCollisionCollector(
  JoltC_CollidePointAnyHitCollisionCollector_t * subtype
) {
  return (JoltC_CollidePointCollector_t*) subtype;
};

//endregion

//region functions

void JoltC_CollidePointCollector_Reset(
  JoltC_CollidePointCollector_t * self
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  selfCpp->Reset();
}

void JoltC_CollidePointCollector_SetContext(
  JoltC_CollidePointCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  const TransformedShape * inContextCpp = static_cast<const TransformedShape *>(inContext->obj);
  selfCpp->SetContext(
    inContextCpp
  );
}

JoltC_TransformedShape_t * JoltC_CollidePointCollector_GetContext(
  JoltC_CollidePointCollector_t * self
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  const TransformedShape * resultPtr = selfCpp->GetContext();
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_CollidePointCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointCollector_t * self,
  float inFraction
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollidePointCollector_ResetEarlyOutFraction(
  JoltC_CollidePointCollector_t * self,
  float inFraction
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
}

void JoltC_CollidePointCollector_ForceEarlyOut(
  JoltC_CollidePointCollector_t * self
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  selfCpp->ForceEarlyOut();
}

bool JoltC_CollidePointCollector_ShouldEarlyOut(
  JoltC_CollidePointCollector_t * self
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  return selfCpp->ShouldEarlyOut();
}

float JoltC_CollidePointCollector_GetEarlyOutFraction(
  JoltC_CollidePointCollector_t * self
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  return selfCpp->GetEarlyOutFraction();
}

float JoltC_CollidePointCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointCollector_t * self
) {
  CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
  return selfCpp->GetPositiveEarlyOutFraction();
}

//endregion

#ifdef __cplusplus
}
#endif

