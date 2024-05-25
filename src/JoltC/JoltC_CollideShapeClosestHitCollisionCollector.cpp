#include "JoltC/JoltC_CollideShapeClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeClosestHitCollisionCollector_t * JoltC_CollideShapeClosestHitCollisionCollector_new(
  char** outErrMsg
) {
  try {
    JoltC_CollideShapeClosestHitCollisionCollector_t * cInstance = new JoltC_CollideShapeClosestHitCollisionCollector_t();
    CollideShapeClosestHitCollisionCollector * cppInstance = new CollideShapeClosestHitCollisionCollector();
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

bool JoltC_CollideShapeClosestHitCollisionCollector_HadHit(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
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

void JoltC_CollideShapeClosestHitCollisionCollector_Reset(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CollideShapeClosestHitCollisionCollector_SetContext(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CollideShapeClosestHitCollisionCollector_GetContext(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
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

void JoltC_CollideShapeClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
    
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

void JoltC_CollideShapeClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
    
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

void JoltC_CollideShapeClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CollideShapeClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
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

float JoltC_CollideShapeClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
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

float JoltC_CollideShapeClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
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

JoltC_CollideShapeResult_t * JoltC_CollideShapeClosestHitCollisionCollector_mHit_Get(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  CollideShapeResult resultValue = selfCpp->mHit;
  CollideShapeResult* result = new CollideShapeResult(resultValue);
  return reinterpret_cast<JoltC_CollideShapeResult_t *>(result);
};

void JoltC_CollideShapeClosestHitCollisionCollector_mHit_Set(
  JoltC_CollideShapeClosestHitCollisionCollector_t * self,
  JoltC_CollideShapeResult_t * mHit,
  char** outErrMsg
) {
  CollideShapeClosestHitCollisionCollector * selfCpp = static_cast<CollideShapeClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<CollideShapeResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

