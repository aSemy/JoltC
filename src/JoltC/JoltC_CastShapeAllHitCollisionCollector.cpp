#include "JoltC/JoltC_CastShapeAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CastShapeAllHitCollisionCollector_t * JoltC_CastShapeAllHitCollisionCollector_new(
  char** outErrMsg
) {
  try {
    JoltC_CastShapeAllHitCollisionCollector_t * cInstance = new JoltC_CastShapeAllHitCollisionCollector_t();
    CastShapeAllHitCollisionCollector * cppInstance = new CastShapeAllHitCollisionCollector();
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

void JoltC_CastShapeAllHitCollisionCollector_Sort(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
    
    selfCpp->Sort();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CastShapeAllHitCollisionCollector_HadHit(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
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

void JoltC_CastShapeAllHitCollisionCollector_Reset(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CastShapeAllHitCollisionCollector_SetContext(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CastShapeAllHitCollisionCollector_GetContext(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
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

void JoltC_CastShapeAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
    
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

void JoltC_CastShapeAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
    
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

void JoltC_CastShapeAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CastShapeAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
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

float JoltC_CastShapeAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
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

float JoltC_CastShapeAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
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

JoltC_ArrayShapeCastResult_t * JoltC_CastShapeAllHitCollisionCollector_mHits_Get(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  ArrayShapeCastResult resultValue = selfCpp->mHits;
  ArrayShapeCastResult* result = new ArrayShapeCastResult(resultValue);
  return reinterpret_cast<JoltC_ArrayShapeCastResult_t *>(result);
};

void JoltC_CastShapeAllHitCollisionCollector_mHits_Set(
  JoltC_CastShapeAllHitCollisionCollector_t * self,
  JoltC_ArrayShapeCastResult_t * mHits,
  char** outErrMsg
) {
  CastShapeAllHitCollisionCollector * selfCpp = static_cast<CastShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *reinterpret_cast<ArrayShapeCastResult *>(mHits->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

