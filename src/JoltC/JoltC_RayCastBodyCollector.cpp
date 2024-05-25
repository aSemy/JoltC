#include "JoltC/JoltC_RayCastBodyCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_RayCastBodyCollector_Reset(
  JoltC_RayCastBodyCollector_t * self,
  char** outErrMsg
) {
  try {
    RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_RayCastBodyCollector_SetContext(
  JoltC_RayCastBodyCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_RayCastBodyCollector_GetContext(
  JoltC_RayCastBodyCollector_t * self,
  char** outErrMsg
) {
  try {
    RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
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

void JoltC_RayCastBodyCollector_UpdateEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
    
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

void JoltC_RayCastBodyCollector_ResetEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
    
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

void JoltC_RayCastBodyCollector_ForceEarlyOut(
  JoltC_RayCastBodyCollector_t * self,
  char** outErrMsg
) {
  try {
    RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_RayCastBodyCollector_ShouldEarlyOut(
  JoltC_RayCastBodyCollector_t * self,
  char** outErrMsg
) {
  try {
    RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
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

float JoltC_RayCastBodyCollector_GetEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  char** outErrMsg
) {
  try {
    RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
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

float JoltC_RayCastBodyCollector_GetPositiveEarlyOutFraction(
  JoltC_RayCastBodyCollector_t * self,
  char** outErrMsg
) {
  try {
    RayCastBodyCollector * selfCpp = static_cast<RayCastBodyCollector *>(self->obj);
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

