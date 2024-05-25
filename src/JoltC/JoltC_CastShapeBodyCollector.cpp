#include "JoltC/JoltC_CastShapeBodyCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CastShapeBodyCollector_Reset(
  JoltC_CastShapeBodyCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CastShapeBodyCollector_SetContext(
  JoltC_CastShapeBodyCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CastShapeBodyCollector_GetContext(
  JoltC_CastShapeBodyCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
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

void JoltC_CastShapeBodyCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeBodyCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
    
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

void JoltC_CastShapeBodyCollector_ResetEarlyOutFraction(
  JoltC_CastShapeBodyCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
    
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

void JoltC_CastShapeBodyCollector_ForceEarlyOut(
  JoltC_CastShapeBodyCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CastShapeBodyCollector_ShouldEarlyOut(
  JoltC_CastShapeBodyCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
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

float JoltC_CastShapeBodyCollector_GetEarlyOutFraction(
  JoltC_CastShapeBodyCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
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

float JoltC_CastShapeBodyCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeBodyCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeBodyCollector * selfCpp = static_cast<CastShapeBodyCollector *>(self->obj);
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

