#include "JoltC/JoltC_CollideShapeAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeAllHitCollisionCollector_t * JoltC_CollideShapeAllHitCollisionCollector_new(
  char** outErrMsg
) {
  try {
    JoltC_CollideShapeAllHitCollisionCollector_t * cInstance = new JoltC_CollideShapeAllHitCollisionCollector_t();
    CollideShapeAllHitCollisionCollector * cppInstance = new CollideShapeAllHitCollisionCollector();
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

void JoltC_CollideShapeAllHitCollisionCollector_Sort(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
    
    selfCpp->Sort();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CollideShapeAllHitCollisionCollector_HadHit(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
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

void JoltC_CollideShapeAllHitCollisionCollector_Reset(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CollideShapeAllHitCollisionCollector_SetContext(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CollideShapeAllHitCollisionCollector_GetContext(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
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

void JoltC_CollideShapeAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
    
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

void JoltC_CollideShapeAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
    
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

void JoltC_CollideShapeAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CollideShapeAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
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

float JoltC_CollideShapeAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
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

float JoltC_CollideShapeAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
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

JoltC_ArrayCollideShapeResult_t * JoltC_CollideShapeAllHitCollisionCollector_mHits_Get(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  ArrayCollideShapeResult resultValue = selfCpp->mHits;
  ArrayCollideShapeResult* result = new ArrayCollideShapeResult(resultValue);
  return reinterpret_cast<JoltC_ArrayCollideShapeResult_t *>(result);
};

void JoltC_CollideShapeAllHitCollisionCollector_mHits_Set(
  JoltC_CollideShapeAllHitCollisionCollector_t * self,
  JoltC_ArrayCollideShapeResult_t * mHits,
  char** outErrMsg
) {
  CollideShapeAllHitCollisionCollector * selfCpp = static_cast<CollideShapeAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *reinterpret_cast<ArrayCollideShapeResult *>(mHits->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

