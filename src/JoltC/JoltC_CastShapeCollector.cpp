#include "JoltC/JoltC_CastShapeCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CastShapeCollector_Reset(
  JoltC_CastShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CastShapeCollector_SetContext(
  JoltC_CastShapeCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CastShapeCollector_GetContext(
  JoltC_CastShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
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

void JoltC_CastShapeCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
    
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

void JoltC_CastShapeCollector_ResetEarlyOutFraction(
  JoltC_CastShapeCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
    
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

void JoltC_CastShapeCollector_ForceEarlyOut(
  JoltC_CastShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CastShapeCollector_ShouldEarlyOut(
  JoltC_CastShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
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

float JoltC_CastShapeCollector_GetEarlyOutFraction(
  JoltC_CastShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
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

float JoltC_CastShapeCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeCollector * selfCpp = static_cast<CastShapeCollector *>(self->obj);
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

