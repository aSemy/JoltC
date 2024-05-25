#include "JoltC/JoltC_CollidePointClosestHitCollisionCollector.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollidePointClosestHitCollisionCollector_t * JoltC_CollidePointClosestHitCollisionCollector_new(
  char** outErrMsg
) {
  try {
    JoltC_CollidePointClosestHitCollisionCollector_t * cInstance = new JoltC_CollidePointClosestHitCollisionCollector_t();
    CollidePointClosestHitCollisionCollector * cppInstance = new CollidePointClosestHitCollisionCollector();
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

bool JoltC_CollidePointClosestHitCollisionCollector_HadHit(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
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

void JoltC_CollidePointClosestHitCollisionCollector_Reset(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
    
    selfCpp->Reset();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CollidePointClosestHitCollisionCollector_SetContext(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  const JoltC_TransformedShape_t * inContext,
  char** outErrMsg
) {
  try {
    CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
    
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

const JoltC_TransformedShape_t * JoltC_CollidePointClosestHitCollisionCollector_GetContext(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
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

void JoltC_CollidePointClosestHitCollisionCollector_UpdateEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
    
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

void JoltC_CollidePointClosestHitCollisionCollector_ResetEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  float inFraction,
  char** outErrMsg
) {
  try {
    CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
    
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

void JoltC_CollidePointClosestHitCollisionCollector_ForceEarlyOut(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
    
    selfCpp->ForceEarlyOut();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_CollidePointClosestHitCollisionCollector_ShouldEarlyOut(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
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

float JoltC_CollidePointClosestHitCollisionCollector_GetEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
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

float JoltC_CollidePointClosestHitCollisionCollector_GetPositiveEarlyOutFraction(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  try {
    CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
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

JoltC_CollidePointResult_t * JoltC_CollidePointClosestHitCollisionCollector_mHit_Get(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  char** outErrMsg
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  CollidePointResult resultValue = selfCpp->mHit;
  CollidePointResult* result = new CollidePointResult(resultValue);
  return reinterpret_cast<JoltC_CollidePointResult_t *>(result);
};

void JoltC_CollidePointClosestHitCollisionCollector_mHit_Set(
  JoltC_CollidePointClosestHitCollisionCollector_t * self,
  JoltC_CollidePointResult_t * mHit,
  char** outErrMsg
) {
  CollidePointClosestHitCollisionCollector * selfCpp = static_cast<CollidePointClosestHitCollisionCollector *>(self->obj);
  selfCpp->mHit = *reinterpret_cast<CollidePointResult *>(mHit->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

