#include "JoltC/JoltC_CastShapeClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastShapeClosestHitCollisionCollector_t * JoltC_CastShapeClosestHitCollisionCollector_new(
  char** outErrMsg
) {
  try {
    JoltC_CastShapeClosestHitCollisionCollector_t * cInstance = new JoltC_CastShapeClosestHitCollisionCollector_t();
    CastShapeClosestHitCollisionCollector * cppInstance = new CastShapeClosestHitCollisionCollector();
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

bool JoltC_CastShapeClosestHitCollisionCollector_HadHit(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
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

void JoltC_CastShapeClosestHitCollisionCollector_Reset(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CastShapeClosestHitCollisionCollector_SetContext(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CastShapeClosestHitCollisionCollector_GetContext(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
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

void JoltC_CastShapeClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
    
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

void JoltC_CastShapeClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
    
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

void JoltC_CastShapeClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CastShapeClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
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

float JoltC_CastShapeClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
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

float JoltC_CastShapeClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
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

JoltC_ShapeCastResult_t * JoltC_CastShapeClosestHitCollisionCollector_mHit_Get(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  ShapeCastResult resultValue = selfCpp->mHit;
  ShapeCastResult* result = new ShapeCastResult(resultValue);
  return reinterpret_cast<JoltC_ShapeCastResult_t *>(result);
};

void JoltC_CastShapeClosestHitCollisionCollector_mHit_Set(
  JoltC_CastShapeClosestHitCollisionCollector_t * self,
  JoltC_ShapeCastResult_t * mHit,
  char** outErrMsg
) {
  CastShapeClosestHitCollisionCollector * selfCpp = static_cast<CastShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<ShapeCastResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

