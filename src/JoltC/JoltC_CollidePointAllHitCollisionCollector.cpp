#include "JoltC/JoltC_CollidePointAllHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollidePointAllHitCollisionCollector_t * JoltC_CollidePointAllHitCollisionCollector_new(
  char** outErrMsg
) {
  try {
    JoltC_CollidePointAllHitCollisionCollector_t * cInstance = new JoltC_CollidePointAllHitCollisionCollector_t();
    CollidePointAllHitCollisionCollector * cppInstance = new CollidePointAllHitCollisionCollector();
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

void JoltC_CollidePointAllHitCollisionCollector_Sort(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
    
    selfCpp->Sort();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CollidePointAllHitCollisionCollector_HadHit(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
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

void JoltC_CollidePointAllHitCollisionCollector_Reset(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CollidePointAllHitCollisionCollector_SetContext(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CollidePointAllHitCollisionCollector_GetContext(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
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

void JoltC_CollidePointAllHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
    
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

void JoltC_CollidePointAllHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
    
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

void JoltC_CollidePointAllHitCollisionCollector_ForceEarlyOut(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CollidePointAllHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
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

float JoltC_CollidePointAllHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
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

float JoltC_CollidePointAllHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
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

JoltC_ArrayCollidePointResult_t * JoltC_CollidePointAllHitCollisionCollector_mHits_Get(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  char** outErrMsg
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  ArrayCollidePointResult resultValue = selfCpp->mHits;
  ArrayCollidePointResult* result = new ArrayCollidePointResult(resultValue);
  return reinterpret_cast<JoltC_ArrayCollidePointResult_t *>(result);
};

void JoltC_CollidePointAllHitCollisionCollector_mHits_Set(
  JoltC_CollidePointAllHitCollisionCollector_t * self,
  JoltC_ArrayCollidePointResult_t * mHits,
  char** outErrMsg
) {
  CollidePointAllHitCollisionCollector * selfCpp = static_cast<CollidePointAllHitCollisionCollector *>(self->obj);
  selfCpp->mHits = *reinterpret_cast<ArrayCollidePointResult *>(mHits->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

