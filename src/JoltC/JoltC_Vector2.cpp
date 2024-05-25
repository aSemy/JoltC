#include "JoltC/JoltC_Vector2.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Vector2_t * JoltC_Vector2_new(
  char** outErrMsg
) {
  try {
    JoltC_Vector2_t * cInstance = new JoltC_Vector2_t();
    Vector2 * cppInstance = new Vector2();
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

void JoltC_Vector2_SetZero(
  JoltC_Vector2_t * self,
  char** outErrMsg
) {
  try {
    Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
    
    selfCpp->SetZero();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Vector2_IsZero(
  JoltC_Vector2_t * self,
  char** outErrMsg
) {
  try {
    Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
    
    selfCpp->IsZero();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Vector2_IsClose(
  JoltC_Vector2_t * self,
  const JoltC_Vector2_t * inV,
  float inMaxDistSq,
  char** outErrMsg
) {
  try {
    Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
    
    selfCpp->IsClose(
    *reinterpret_cast<Vector2 *>(inV->obj),
    inMaxDistSq
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Vector2_IsNormalized(
  JoltC_Vector2_t * self,
  float inTolerance,
  char** outErrMsg
) {
  try {
    Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
    
    selfCpp->IsNormalized(
    inTolerance
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_Vector2_t * JoltC_Vector2_Normalized(
  JoltC_Vector2_t * self,
  char** outErrMsg
) {
  try {
    Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
    const Vector2 resultValue = selfCpp->Normalized();
    const Vector2* result = new Vector2(resultValue);
    return reinterpret_cast<const JoltC_Vector2_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Vector2_GetComponent(
  JoltC_Vector2_t * self,
  unsigned long inCoordinate,
  char** outErrMsg
) {
  try {
    Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
    float result = selfCpp->operator[](
    inCoordinate
    );
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vector2_t * JoltC_Vector2_Add(
  JoltC_Vector2_t * self,
  const JoltC_Vector2_t * inV,
  char** outErrMsg
) {
  try {
    Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
    Vector2& resultRef = selfCpp->operator+=(
    *reinterpret_cast<Vector2 *>(inV->obj)
    );
    Vector2 * result = &resultRef;
    return reinterpret_cast<JoltC_Vector2_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vector2_t * JoltC_Vector2_Sub(
  JoltC_Vector2_t * self,
  const JoltC_Vector2_t * inV,
  char** outErrMsg
) {
  try {
    Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
    Vector2& resultRef = selfCpp->operator-=(
    *reinterpret_cast<Vector2 *>(inV->obj)
    );
    Vector2 * result = &resultRef;
    return reinterpret_cast<JoltC_Vector2_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vector2_t * JoltC_Vector2_Mul(
  JoltC_Vector2_t * self,
  float inV,
  char** outErrMsg
) {
  try {
    Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
    Vector2& resultRef = selfCpp->operator*=(
    inV
    );
    Vector2 * result = &resultRef;
    return reinterpret_cast<JoltC_Vector2_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vector2_t * JoltC_Vector2_Div(
  JoltC_Vector2_t * self,
  float inV,
  char** outErrMsg
) {
  try {
    Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
    Vector2& resultRef = selfCpp->operator/=(
    inV
    );
    Vector2 * result = &resultRef;
    return reinterpret_cast<JoltC_Vector2_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Vector2_Dot(
  JoltC_Vector2_t * self,
  const JoltC_Vector2_t * inRHS,
  char** outErrMsg
) {
  try {
    Vector2 * selfCpp = static_cast<Vector2 *>(self->obj);
    float result = selfCpp->Dot(
    *reinterpret_cast<Vector2 *>(inRHS->obj)
    );
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

#ifdef __cplusplus
}
#endif

