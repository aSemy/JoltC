#include "JoltC/JoltC_TransformedShapeCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_TransformedShapeCollector_Reset(
  JoltC_TransformedShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_TransformedShapeCollector_SetContext(
  JoltC_TransformedShapeCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_TransformedShapeCollector_GetContext(
  JoltC_TransformedShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
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

void JoltC_TransformedShapeCollector_UpdateEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
    
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

void JoltC_TransformedShapeCollector_ResetEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
    
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

void JoltC_TransformedShapeCollector_ForceEarlyOut(
  JoltC_TransformedShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_TransformedShapeCollector_ShouldEarlyOut(
  JoltC_TransformedShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
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

float JoltC_TransformedShapeCollector_GetEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
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

float JoltC_TransformedShapeCollector_GetPositiveEarlyOutFraction(
  JoltC_TransformedShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    TransformedShapeCollector * selfCpp = static_cast<TransformedShapeCollector *>(self->obj);
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

