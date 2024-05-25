#include "JoltC/JoltC_CastRayCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CastRayCollector_Reset(
  JoltC_CastRayCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CastRayCollector_SetContext(
  JoltC_CastRayCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
    
    selfCpp->SetContext(
    reinterpret_cast<TransformedShape *>(inContext->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_TransformedShape_t * JoltC_CastRayCollector_GetContext(
  JoltC_CastRayCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
    const TransformedShape * result = selfCpp->GetContext();
    return reinterpret_cast<const JoltC_TransformedShape_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CastRayCollector_UpdateEarlyOutFraction(
  JoltC_CastRayCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
    
    selfCpp->UpdateEarlyOutFraction(
    inFraction
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CastRayCollector_ResetEarlyOutFraction(
  JoltC_CastRayCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
    
    selfCpp->ResetEarlyOutFraction(
    inFraction
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CastRayCollector_ForceEarlyOut(
  JoltC_CastRayCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CastRayCollector_ShouldEarlyOut(
  JoltC_CastRayCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
    bool result = selfCpp->ShouldEarlyOut();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_CastRayCollector_GetEarlyOutFraction(
  JoltC_CastRayCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
    float result = selfCpp->GetEarlyOutFraction();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_CastRayCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayCollector * selfCpp = static_cast<CastRayCollector *>(self->obj);
    float result = selfCpp->GetPositiveEarlyOutFraction();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

#ifdef __cplusplus
}
#endif

