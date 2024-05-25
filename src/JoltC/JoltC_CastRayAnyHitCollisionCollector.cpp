#include "JoltC/JoltC_CastRayAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastRayAnyHitCollisionCollector_t * JoltC_CastRayAnyHitCollisionCollector_new(
  char** outErrMsg
) {
  try {
    JoltC_CastRayAnyHitCollisionCollector_t * cInstance = new JoltC_CastRayAnyHitCollisionCollector_t();
    CastRayAnyHitCollisionCollector * cppInstance = new CastRayAnyHitCollisionCollector();
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

bool JoltC_CastRayAnyHitCollisionCollector_HadHit(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
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

void JoltC_CastRayAnyHitCollisionCollector_Reset(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CastRayAnyHitCollisionCollector_SetContext(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CastRayAnyHitCollisionCollector_GetContext(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
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

void JoltC_CastRayAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
    
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

void JoltC_CastRayAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
    
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

void JoltC_CastRayAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CastRayAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
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

float JoltC_CastRayAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
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

float JoltC_CastRayAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
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

JoltC_RayCastResult_t * JoltC_CastRayAnyHitCollisionCollector_mHit_Get(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  RayCastResult resultValue = selfCpp->mHit;
  RayCastResult* result = new RayCastResult(resultValue);
  return reinterpret_cast<JoltC_RayCastResult_t *>(result);
};

void JoltC_CastRayAnyHitCollisionCollector_mHit_Set(
  JoltC_CastRayAnyHitCollisionCollector_t * self,
  JoltC_RayCastResult_t * mHit,
  char** outErrMsg
) {
  CastRayAnyHitCollisionCollector * selfCpp = static_cast<CastRayAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<RayCastResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

