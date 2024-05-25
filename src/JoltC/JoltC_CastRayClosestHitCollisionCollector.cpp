#include "JoltC/JoltC_CastRayClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastRayClosestHitCollisionCollector_t * JoltC_CastRayClosestHitCollisionCollector_new(
  char** outErrMsg
) {
  try {
    JoltC_CastRayClosestHitCollisionCollector_t * cInstance = new JoltC_CastRayClosestHitCollisionCollector_t();
    CastRayClosestHitCollisionCollector * cppInstance = new CastRayClosestHitCollisionCollector();
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

bool JoltC_CastRayClosestHitCollisionCollector_HadHit(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
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

void JoltC_CastRayClosestHitCollisionCollector_Reset(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CastRayClosestHitCollisionCollector_SetContext(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CastRayClosestHitCollisionCollector_GetContext(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
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

void JoltC_CastRayClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
    
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

void JoltC_CastRayClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
    
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

void JoltC_CastRayClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CastRayClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
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

float JoltC_CastRayClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
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

float JoltC_CastRayClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
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

JoltC_RayCastResult_t * JoltC_CastRayClosestHitCollisionCollector_mHit_Get(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  RayCastResult resultValue = selfCpp->mHit;
  RayCastResult* result = new RayCastResult(resultValue);
  return reinterpret_cast<JoltC_RayCastResult_t *>(result);
};

void JoltC_CastRayClosestHitCollisionCollector_mHit_Set(
  JoltC_CastRayClosestHitCollisionCollector_t * self,
  JoltC_RayCastResult_t * mHit,
  char** outErrMsg
) {
  CastRayClosestHitCollisionCollector * selfCpp = static_cast<CastRayClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<RayCastResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

