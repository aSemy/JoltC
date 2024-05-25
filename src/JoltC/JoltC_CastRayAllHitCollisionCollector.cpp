#include "JoltC/JoltC_CastRayAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastRayAllHitCollisionCollector_t * JoltC_CastRayAllHitCollisionCollector_new(
  char** outErrMsg
) {
  try {
    JoltC_CastRayAllHitCollisionCollector_t * cInstance = new JoltC_CastRayAllHitCollisionCollector_t();
    CastRayAllHitCollisionCollector * cppInstance = new CastRayAllHitCollisionCollector();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

void JoltC_CastRayAllHitCollisionCollector_Sort(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
    
    selfCpp->Sort();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CastRayAllHitCollisionCollector_HadHit(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
    bool result = selfCpp->HadHit();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CastRayAllHitCollisionCollector_Reset(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CastRayAllHitCollisionCollector_SetContext(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CastRayAllHitCollisionCollector_GetContext(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
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

void JoltC_CastRayAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
    
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

void JoltC_CastRayAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
    
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

void JoltC_CastRayAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CastRayAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
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

float JoltC_CastRayAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
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

float JoltC_CastRayAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
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

//region properties

JoltC_ArrayRayCastResult_t * JoltC_CastRayAllHitCollisionCollector_mHits_Get(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  ArrayRayCastResult resultValue = selfCpp->mHits;
  ArrayRayCastResult* result = new ArrayRayCastResult(resultValue);
  return reinterpret_cast<JoltC_ArrayRayCastResult_t *>(result);
};

void JoltC_CastRayAllHitCollisionCollector_mHits_Set(
  JoltC_CastRayAllHitCollisionCollector_t * self,
  JoltC_ArrayRayCastResult_t * mHits,
  char** outErrMsg
) {
  CastRayAllHitCollisionCollector * selfCpp = static_cast<CastRayAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *reinterpret_cast<ArrayRayCastResult *>(mHits->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

