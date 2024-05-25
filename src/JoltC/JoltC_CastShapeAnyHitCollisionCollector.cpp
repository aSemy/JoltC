#include "JoltC/JoltC_CastShapeAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastShapeAnyHitCollisionCollector_t * JoltC_CastShapeAnyHitCollisionCollector_new(
  char** outErrMsg
) {
  try {
    JoltC_CastShapeAnyHitCollisionCollector_t * cInstance = new JoltC_CastShapeAnyHitCollisionCollector_t();
    CastShapeAnyHitCollisionCollector * cppInstance = new CastShapeAnyHitCollisionCollector();
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

bool JoltC_CastShapeAnyHitCollisionCollector_HadHit(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
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

void JoltC_CastShapeAnyHitCollisionCollector_Reset(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CastShapeAnyHitCollisionCollector_SetContext(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CastShapeAnyHitCollisionCollector_GetContext(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
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

void JoltC_CastShapeAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
    
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

void JoltC_CastShapeAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
    
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

void JoltC_CastShapeAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CastShapeAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
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

float JoltC_CastShapeAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
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

float JoltC_CastShapeAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
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

JoltC_ShapeCastResult_t * JoltC_CastShapeAnyHitCollisionCollector_mHit_Get(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  ShapeCastResult resultValue = selfCpp->mHit;
  ShapeCastResult* result = new ShapeCastResult(resultValue);
  return reinterpret_cast<JoltC_ShapeCastResult_t *>(result);
};

void JoltC_CastShapeAnyHitCollisionCollector_mHit_Set(
  JoltC_CastShapeAnyHitCollisionCollector_t * self,
  JoltC_ShapeCastResult_t * mHit,
  char** outErrMsg
) {
  CastShapeAnyHitCollisionCollector * selfCpp = static_cast<CastShapeAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<ShapeCastResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

