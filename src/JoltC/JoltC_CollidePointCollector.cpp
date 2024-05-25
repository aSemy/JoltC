#include "JoltC/JoltC_CollidePointCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CollidePointCollector_Reset(
  JoltC_CollidePointCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CollidePointCollector_SetContext(
  JoltC_CollidePointCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CollidePointCollector_GetContext(
  JoltC_CollidePointCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
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

void JoltC_CollidePointCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
    
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

void JoltC_CollidePointCollector_ResetEarlyOutFraction(
  JoltC_CollidePointCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
    
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

void JoltC_CollidePointCollector_ForceEarlyOut(
  JoltC_CollidePointCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CollidePointCollector_ShouldEarlyOut(
  JoltC_CollidePointCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
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

float JoltC_CollidePointCollector_GetEarlyOutFraction(
  JoltC_CollidePointCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
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

float JoltC_CollidePointCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointCollector * selfCpp = static_cast<CollidePointCollector *>(self->obj);
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

