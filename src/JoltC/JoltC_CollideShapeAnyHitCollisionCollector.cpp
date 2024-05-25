#include "JoltC/JoltC_CollideShapeAnyHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeAnyHitCollisionCollector_t * JoltC_CollideShapeAnyHitCollisionCollector_new(
  char** outErrMsg
) {
  try {
    JoltC_CollideShapeAnyHitCollisionCollector_t * cInstance = new JoltC_CollideShapeAnyHitCollisionCollector_t();
    CollideShapeAnyHitCollisionCollector * cppInstance = new CollideShapeAnyHitCollisionCollector();
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

bool JoltC_CollideShapeAnyHitCollisionCollector_HadHit(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
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

void JoltC_CollideShapeAnyHitCollisionCollector_Reset(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CollideShapeAnyHitCollisionCollector_SetContext(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CollideShapeAnyHitCollisionCollector_GetContext(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
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

void JoltC_CollideShapeAnyHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
    
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

void JoltC_CollideShapeAnyHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
    
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

void JoltC_CollideShapeAnyHitCollisionCollector_ForceEarlyOut(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CollideShapeAnyHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
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

float JoltC_CollideShapeAnyHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
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

float JoltC_CollideShapeAnyHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
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

JoltC_CollideShapeResult_t * JoltC_CollideShapeAnyHitCollisionCollector_mHit_Get(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  char** outErrMsg
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  CollideShapeResult resultValue = selfCpp->mHit;
  CollideShapeResult* result = new CollideShapeResult(resultValue);
  return reinterpret_cast<JoltC_CollideShapeResult_t *>(result);
};

void JoltC_CollideShapeAnyHitCollisionCollector_mHit_Set(
  JoltC_CollideShapeAnyHitCollisionCollector_t * self,
  JoltC_CollideShapeResult_t * mHit,
  char** outErrMsg
) {
  CollideShapeAnyHitCollisionCollector * selfCpp = static_cast<CollideShapeAnyHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<CollideShapeResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

