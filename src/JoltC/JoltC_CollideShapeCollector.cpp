#include "JoltC/JoltC_CollideShapeCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

void JoltC_CollideShapeCollector_Reset(
  JoltC_CollideShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CollideShapeCollector_SetContext(
  JoltC_CollideShapeCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CollideShapeCollector_GetContext(
  JoltC_CollideShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
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

void JoltC_CollideShapeCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
    
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

void JoltC_CollideShapeCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
    
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

void JoltC_CollideShapeCollector_ForceEarlyOut(
  JoltC_CollideShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CollideShapeCollector_ShouldEarlyOut(
  JoltC_CollideShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
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

float JoltC_CollideShapeCollector_GetEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
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

float JoltC_CollideShapeCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeCollector * selfCpp = static_cast<CollideShapeCollector *>(self->obj);
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

