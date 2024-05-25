#include "JoltC/JoltC_CollidePointAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollidePointAnyHitCollisionCollector_t * JoltC_CollidePointAnyHitCollisionCollector_new(
  char** outErrMsg
) {
  try {
    JoltC_CollidePointAnyHitCollisionCollector_t * cInstance = new JoltC_CollidePointAnyHitCollisionCollector_t();
    CollidePointAnyHitCollisionCollector * cppInstance = new CollidePointAnyHitCollisionCollector();
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

bool JoltC_CollidePointAnyHitCollisionCollector_HadHit(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
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

void JoltC_CollidePointAnyHitCollisionCollector_Reset(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CollidePointAnyHitCollisionCollector_SetContext(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CollidePointAnyHitCollisionCollector_GetContext(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
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

void JoltC_CollidePointAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
    
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

void JoltC_CollidePointAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
    
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

void JoltC_CollidePointAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CollidePointAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
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

float JoltC_CollidePointAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
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

float JoltC_CollidePointAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
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

JoltC_CollidePointResult_t * JoltC_CollidePointAnyHitCollisionCollector_mHit_Get(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  CollidePointResult resultValue = selfCpp->mHit;
  CollidePointResult* result = new CollidePointResult(resultValue);
  return reinterpret_cast<JoltC_CollidePointResult_t *>(result);
};

void JoltC_CollidePointAnyHitCollisionCollector_mHit_Set(
  JoltC_CollidePointAnyHitCollisionCollector_t * self,
  JoltC_CollidePointResult_t * mHit,
  char** outErrMsg
) {
  CollidePointAnyHitCollisionCollector * selfCpp = static_cast<CollidePointAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<CollidePointResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

