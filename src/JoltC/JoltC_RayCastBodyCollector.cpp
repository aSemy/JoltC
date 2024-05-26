#include "JoltC/JoltC_RayCastBodyCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_RayCastBodyCollector_Reset(
  JoltC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  
  selfCpp->Reset();
};

void JoltC_RayCastBodyCollector_SetContext(
  JoltC_RayCastBodyCollector_t * self,
  JoltC_TransformedShape_t * inContext
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  
  selfCpp->SetContext(
    reinterpret_cast<TransformedShape *>(inContext->obj)
  );
};

JoltC_TransformedShape_t * JoltC_RayCastBodyCollector_GetContext(
  JoltC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  const TransformedShape * resultValue = selfCpp->GetContext();
  JoltC_TransformedShape_t* result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void*>(&resultValue);
  return result;
};

void JoltC_RayCastBodyCollector_UpdateEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  float inFraction
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  
  selfCpp->UpdateEarlyOutFraction(
    inFraction
  );
};

void JoltC_RayCastBodyCollector_ResetEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  float inFraction
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  
  selfCpp->ResetEarlyOutFraction(
    inFraction
  );
};

void JoltC_RayCastBodyCollector_ForceEarlyOut(
  JoltC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  
  selfCpp->ForceEarlyOut();
};

bool JoltC_RayCastBodyCollector_ShouldEarlyOut(
  JoltC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  bool result = selfCpp->ShouldEarlyOut();
  return result;
};

float JoltC_RayCastBodyCollector_GetEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  float result = selfCpp->GetEarlyOutFraction();
  return result;
};

float JoltC_RayCastBodyCollector_GetPositiveEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self
) {
  RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
  float result = selfCpp->GetPositiveEarlyOutFraction();
  return result;
};

//endregion

#ifdef __cplusplus
}
#endif

