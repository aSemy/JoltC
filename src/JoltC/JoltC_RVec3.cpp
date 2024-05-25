#include "JoltC/JoltC_RVec3.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RVec3_t * JoltC_RVec3_new_0(
  char** outErrMsg
) {
  try {
    JoltC_RVec3_t * cInstance = new JoltC_RVec3_t();
    RVec3 * cppInstance = new RVec3();
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

JoltC_RVec3_t * JoltC_RVec3_new_1(
  double inX,
  double inY,
  double inZ,
  char** outErrMsg
) {
  try {
    JoltC_RVec3_t * cInstance = new JoltC_RVec3_t();
    RVec3 * cppInstance = new RVec3(
      inX,
      inY,
      inZ
    );
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

JoltC_RVec3_t * JoltC_RVec3_sZero(
  char** outErrMsg
) {
  try {
    RVec3 resultValue = RVec3::sZero();
    RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_RVec3_sAxisX(
  char** outErrMsg
) {
  try {
    RVec3 resultValue = RVec3::sAxisX();
    RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_RVec3_sAxisY(
  char** outErrMsg
) {
  try {
    RVec3 resultValue = RVec3::sAxisY();
    RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_RVec3_sAxisZ(
  char** outErrMsg
) {
  try {
    RVec3 resultValue = RVec3::sAxisZ();
    RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_RVec3_sReplicate(
  double inValue,
  char** outErrMsg
) {
  try {
    RVec3 resultValue = RVec3::sReplicate(
    inValue
    );
    RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_RVec3_sMin(
  const JoltC_RVec3_t * inLHS,
  const JoltC_RVec3_t * inRHS,
  char** outErrMsg
) {
  try {
    RVec3 resultValue = RVec3::sMin(
    *reinterpret_cast<RVec3 *>(inLHS->obj),
    *reinterpret_cast<RVec3 *>(inRHS->obj)
    );
    RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_RVec3_sMax(
  const JoltC_RVec3_t * inLHS,
  const JoltC_RVec3_t * inRHS,
  char** outErrMsg
) {
  try {
    RVec3 resultValue = RVec3::sMax(
    *reinterpret_cast<RVec3 *>(inLHS->obj),
    *reinterpret_cast<RVec3 *>(inRHS->obj)
    );
    RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_RVec3_sClamp(
  const JoltC_RVec3_t * inValue,
  const JoltC_RVec3_t * inMin,
  const JoltC_RVec3_t * inMax,
  char** outErrMsg
) {
  try {
    RVec3 resultValue = RVec3::sClamp(
    *reinterpret_cast<RVec3 *>(inValue->obj),
    *reinterpret_cast<RVec3 *>(inMin->obj),
    *reinterpret_cast<RVec3 *>(inMax->obj)
    );
    RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

double JoltC_RVec3_GetComponent(
  JoltC_RVec3_t * self,
  unsigned long inCoordinate,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    double result = selfCpp->operator[](
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

bool JoltC_RVec3_Equals(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inV,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    bool result = selfCpp->operator==(
    *reinterpret_cast<RVec3 *>(inV->obj)
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

bool JoltC_RVec3_NotEquals(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inV,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    bool result = selfCpp->operator!=(
    *reinterpret_cast<RVec3 *>(inV->obj)
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

double JoltC_RVec3_LengthSq(
  JoltC_RVec3_t * self,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    double result = selfCpp->LengthSq();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

double JoltC_RVec3_Length(
  JoltC_RVec3_t * self,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    double result = selfCpp->Length();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_RVec3_Normalized(
  JoltC_RVec3_t * self,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    RVec3 resultValue = selfCpp->Normalized();
    RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

double JoltC_RVec3_GetX(
  JoltC_RVec3_t * self,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    double result = selfCpp->GetX();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

double JoltC_RVec3_GetY(
  JoltC_RVec3_t * self,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    double result = selfCpp->GetY();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

double JoltC_RVec3_GetZ(
  JoltC_RVec3_t * self,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    double result = selfCpp->GetZ();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_RVec3_SetX(
  JoltC_RVec3_t * self,
  double inX,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    
    selfCpp->SetX(
    inX
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_RVec3_SetY(
  JoltC_RVec3_t * self,
  double inY,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    
    selfCpp->SetY(
    inY
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_RVec3_SetZ(
  JoltC_RVec3_t * self,
  double inZ,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    
    selfCpp->SetZ(
    inZ
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_RVec3_Set(
  JoltC_RVec3_t * self,
  double inX,
  double inY,
  double inZ,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    
    selfCpp->Set(
    inX,
    inY,
    inZ
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_RVec3_SetComponent(
  JoltC_RVec3_t * self,
  unsigned long inCoordinate,
  double inValue,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    
    selfCpp->SetComponent(
    inCoordinate,
    inValue
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_RVec3_IsNearZero(
  JoltC_RVec3_t * self,
  double inMaxDistSq,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    bool result = selfCpp->IsNearZero(
    inMaxDistSq
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

bool JoltC_RVec3_IsClose(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inV,
  double inMaxDistSq,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    bool result = selfCpp->IsClose(
    *reinterpret_cast<RVec3 *>(inV->obj),
    inMaxDistSq
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

bool JoltC_RVec3_IsNormalized(
  JoltC_RVec3_t * self,
  double inTolerance,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    bool result = selfCpp->IsNormalized(
    inTolerance
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

const JoltC_RVec3_t * JoltC_RVec3_Abs(
  JoltC_RVec3_t * self,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    const RVec3 resultValue = selfCpp->Abs();
    const RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<const JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_RVec3_t * JoltC_RVec3_Reciprocal(
  JoltC_RVec3_t * self,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    const RVec3 resultValue = selfCpp->Reciprocal();
    const RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<const JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_RVec3_t * JoltC_RVec3_Cross(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inRHS,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    const RVec3 resultValue = selfCpp->Cross(
    *reinterpret_cast<RVec3 *>(inRHS->obj)
    );
    const RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<const JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

double JoltC_RVec3_Dot(
  JoltC_RVec3_t * self,
  const JoltC_RVec3_t * inRHS,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    double result = selfCpp->Dot(
    *reinterpret_cast<RVec3 *>(inRHS->obj)
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

JoltC_RVec3_t * JoltC_RVec3_Add(
  JoltC_RVec3_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    RVec3& resultRef = selfCpp->operator+=(
    *reinterpret_cast<Vec3 *>(inV->obj)
    );
    RVec3 * result = &resultRef;
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_RVec3_Sub(
  JoltC_RVec3_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    RVec3& resultRef = selfCpp->operator-=(
    *reinterpret_cast<Vec3 *>(inV->obj)
    );
    RVec3 * result = &resultRef;
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_RVec3_Mul(
  JoltC_RVec3_t * self,
  double inV,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    RVec3& resultRef = selfCpp->operator*=(
    inV
    );
    RVec3 * result = &resultRef;
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RVec3_t * JoltC_RVec3_Div(
  JoltC_RVec3_t * self,
  double inV,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    RVec3& resultRef = selfCpp->operator/=(
    inV
    );
    RVec3 * result = &resultRef;
    return reinterpret_cast<JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_RVec3_t * JoltC_RVec3_Sqrt(
  JoltC_RVec3_t * self,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    const RVec3 resultValue = selfCpp->Sqrt();
    const RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<const JoltC_RVec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_RVec3_t * JoltC_RVec3_GetSign(
  JoltC_RVec3_t * self,
  char** outErrMsg
) {
  try {
    RVec3 * selfCpp = static_cast<RVec3 *>(self->obj);
    const RVec3 resultValue = selfCpp->GetSign();
    const RVec3* result = new RVec3(resultValue);
    return reinterpret_cast<const JoltC_RVec3_t *>(result);
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

