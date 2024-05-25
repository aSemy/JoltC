#include "JoltC/JoltC_Mat44.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_Mat44_t * JoltC_Mat44_new(
  char** outErrMsg
) {
  try {
    JoltC_Mat44_t * cInstance = new JoltC_Mat44_t();
    Mat44 * cppInstance = new Mat44();
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

JoltC_Mat44_t * JoltC_Mat44_sZero(
  char** outErrMsg
) {
  try {
    Mat44 resultValue = Mat44::sZero();
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_sIdentity(
  char** outErrMsg
) {
  try {
    Mat44 resultValue = Mat44::sIdentity();
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_sRotationX(
  float inX,
  char** outErrMsg
) {
  try {
    Mat44 resultValue = Mat44::sRotationX(
    inX
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_sRotationY(
  float inY,
  char** outErrMsg
) {
  try {
    Mat44 resultValue = Mat44::sRotationY(
    inY
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_sRotationZ(
  float inZ,
  char** outErrMsg
) {
  try {
    Mat44 resultValue = Mat44::sRotationZ(
    inZ
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_sRotation(
  const JoltC_Quat_t * inQ,
  char** outErrMsg
) {
  try {
    Mat44 resultValue = Mat44::sRotation(
    *reinterpret_cast<Quat *>(inQ->obj)
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_sTranslation(
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
) {
  try {
    Mat44 resultValue = Mat44::sTranslation(
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_sRotationTranslation(
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
) {
  try {
    Mat44 resultValue = Mat44::sRotationTranslation(
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_sInverseRotationTranslation(
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
) {
  try {
    Mat44 resultValue = Mat44::sInverseRotationTranslation(
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_sScale(
  float inScale,
  char** outErrMsg
) {
  try {
    Mat44 resultValue = Mat44::sScale(
    inScale
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_sPerspective(
  float inFovY,
  float inAspect,
  float inNear,
  float inFar,
  char** outErrMsg
) {
  try {
    Mat44 resultValue = Mat44::sPerspective(
    inFovY,
    inAspect,
    inNear,
    inFar
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_Mat44_GetAxisX(
  JoltC_Mat44_t * self,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Vec3 resultValue = selfCpp->GetAxisX();
    Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_Mat44_GetAxisY(
  JoltC_Mat44_t * self,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Vec3 resultValue = selfCpp->GetAxisY();
    Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_Mat44_GetAxisZ(
  JoltC_Mat44_t * self,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Vec3 resultValue = selfCpp->GetAxisZ();
    Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_GetRotation(
  JoltC_Mat44_t * self,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Mat44 resultValue = selfCpp->GetRotation();
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Quat_t * JoltC_Mat44_GetQuaternion(
  JoltC_Mat44_t * self,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Quat resultValue = selfCpp->GetQuaternion();
    Quat* result = new Quat(resultValue);
    return reinterpret_cast<JoltC_Quat_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_Mat44_GetTranslation(
  JoltC_Mat44_t * self,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Vec3 resultValue = selfCpp->GetTranslation();
    Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Mat44_IsClose(
  JoltC_Mat44_t * self,
  const JoltC_Mat44_t * inM,
  float inMaxDistSq,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    bool result = selfCpp->IsClose(
    *reinterpret_cast<Mat44 *>(inM->obj),
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

JoltC_Vec3_t * JoltC_Mat44_Multiply3x3(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Vec3 resultValue = selfCpp->Multiply3x3(
    *reinterpret_cast<Vec3 *>(inV->obj)
    );
    Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_Mat44_Multiply3x3Transposed(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Vec3 resultValue = selfCpp->Multiply3x3Transposed(
    *reinterpret_cast<Vec3 *>(inV->obj)
    );
    Vec3* result = new Vec3(resultValue);
    return reinterpret_cast<JoltC_Vec3_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_Transposed(
  JoltC_Mat44_t * self,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Mat44 resultValue = selfCpp->Transposed();
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_Transposed3x3(
  JoltC_Mat44_t * self,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Mat44 resultValue = selfCpp->Transposed3x3();
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_Inversed(
  JoltC_Mat44_t * self,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Mat44 resultValue = selfCpp->Inversed();
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_InversedRotationTranslation(
  JoltC_Mat44_t * self,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Mat44 resultValue = selfCpp->InversedRotationTranslation();
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_Mat44_GetDeterminant3x3(
  JoltC_Mat44_t * self,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    float result = selfCpp->GetDeterminant3x3();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_Inversed3x3(
  JoltC_Mat44_t * self,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Mat44 resultValue = selfCpp->Inversed3x3();
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_GetDirectionPreservingMatrix(
  JoltC_Mat44_t * self,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Mat44 resultValue = selfCpp->GetDirectionPreservingMatrix();
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_PreTranslated(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Mat44 resultValue = selfCpp->PreTranslated(
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_PostTranslated(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Mat44 resultValue = selfCpp->PostTranslated(
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_PreScaled(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Mat44 resultValue = selfCpp->PreScaled(
    *reinterpret_cast<Vec3 *>(inScale->obj)
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Mat44_t * JoltC_Mat44_PostScaled(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    Mat44 resultValue = selfCpp->PostScaled(
    *reinterpret_cast<Vec3 *>(inScale->obj)
    );
    Mat44* result = new Mat44(resultValue);
    return reinterpret_cast<JoltC_Mat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Mat44_SetColumn3(
  JoltC_Mat44_t * self,
  long inCol,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    
    selfCpp->SetColumn3(
    inCol,
    *reinterpret_cast<Vec3 *>(inV->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Mat44_SetAxisX(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    
    selfCpp->SetAxisX(
    *reinterpret_cast<Vec3 *>(inV->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Mat44_SetAxisY(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    
    selfCpp->SetAxisY(
    *reinterpret_cast<Vec3 *>(inV->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Mat44_SetAxisZ(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    
    selfCpp->SetAxisZ(
    *reinterpret_cast<Vec3 *>(inV->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Mat44_SetTranslation(
  JoltC_Mat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    
    selfCpp->SetTranslation(
    *reinterpret_cast<Vec3 *>(inV->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Mat44_SetColumn4(
  JoltC_Mat44_t * self,
  long inCol,
  const JoltC_Vec4_t * inV,
  char** outErrMsg
) {
  try {
    Mat44 * selfCpp = static_cast<Mat44 *>(self->obj);
    
    selfCpp->SetColumn4(
    inCol,
    *reinterpret_cast<Vec4 *>(inV->obj)
    );
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

