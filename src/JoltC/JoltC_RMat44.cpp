#include "JoltC/JoltC_RMat44.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_RMat44_t * JoltC_RMat44_new(
  char** outErrMsg
) {
  try {
    JoltC_RMat44_t * cInstance = new JoltC_RMat44_t();
    RMat44 * cppInstance = new RMat44();
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

JoltC_RMat44_t * JoltC_RMat44_sZero(
  char** outErrMsg
) {
  try {
    RMat44 resultValue = RMat44::sZero();
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RMat44_t * JoltC_RMat44_sIdentity(
  char** outErrMsg
) {
  try {
    RMat44 resultValue = RMat44::sIdentity();
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RMat44_t * JoltC_RMat44_sRotation(
  const JoltC_Quat_t * inQ,
  char** outErrMsg
) {
  try {
    RMat44 resultValue = RMat44::sRotation(
    *reinterpret_cast<Quat *>(inQ->obj)
    );
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RMat44_t * JoltC_RMat44_sTranslation(
  const JoltC_RVec3_t * inTranslation,
  char** outErrMsg
) {
  try {
    RMat44 resultValue = RMat44::sTranslation(
    *reinterpret_cast<RVec3 *>(inTranslation->obj)
    );
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RMat44_t * JoltC_RMat44_sRotationTranslation(
  const JoltC_Quat_t * inRotation,
  const JoltC_RVec3_t * inTranslation,
  char** outErrMsg
) {
  try {
    RMat44 resultValue = RMat44::sRotationTranslation(
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<RVec3 *>(inTranslation->obj)
    );
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RMat44_t * JoltC_RMat44_sInverseRotationTranslation(
  const JoltC_Quat_t * inRotation,
  const JoltC_RVec3_t * inTranslation,
  char** outErrMsg
) {
  try {
    RMat44 resultValue = RMat44::sInverseRotationTranslation(
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<RVec3 *>(inTranslation->obj)
    );
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_RMat44_GetAxisX(
  JoltC_RMat44_t * self,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
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

JoltC_Vec3_t * JoltC_RMat44_GetAxisY(
  JoltC_RMat44_t * self,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
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

JoltC_Vec3_t * JoltC_RMat44_GetAxisZ(
  JoltC_RMat44_t * self,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
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

JoltC_Mat44_t * JoltC_RMat44_GetRotation(
  JoltC_RMat44_t * self,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
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

JoltC_Quat_t * JoltC_RMat44_GetQuaternion(
  JoltC_RMat44_t * self,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
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

JoltC_RVec3_t * JoltC_RMat44_GetTranslation(
  JoltC_RMat44_t * self,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    RVec3 resultValue = selfCpp->GetTranslation();
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

bool JoltC_RMat44_IsClose(
  JoltC_RMat44_t * self,
  const JoltC_RMat44_t * inM,
  double inMaxDistSq,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    bool result = selfCpp->IsClose(
    *reinterpret_cast<RMat44 *>(inM->obj),
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

JoltC_Vec3_t * JoltC_RMat44_Multiply3x3(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
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

JoltC_Vec3_t * JoltC_RMat44_Multiply3x3Transposed(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
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

JoltC_Mat44_t * JoltC_RMat44_Transposed3x3(
  JoltC_RMat44_t * self,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
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

JoltC_RMat44_t * JoltC_RMat44_Inversed(
  JoltC_RMat44_t * self,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    RMat44 resultValue = selfCpp->Inversed();
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RMat44_t * JoltC_RMat44_InversedRotationTranslation(
  JoltC_RMat44_t * self,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    RMat44 resultValue = selfCpp->InversedRotationTranslation();
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RMat44_t * JoltC_RMat44_PreTranslated(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    RMat44 resultValue = selfCpp->PreTranslated(
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
    );
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RMat44_t * JoltC_RMat44_PostTranslated(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inTranslation,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    RMat44 resultValue = selfCpp->PostTranslated(
    *reinterpret_cast<Vec3 *>(inTranslation->obj)
    );
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RMat44_t * JoltC_RMat44_PreScaled(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    RMat44 resultValue = selfCpp->PreScaled(
    *reinterpret_cast<Vec3 *>(inScale->obj)
    );
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_RMat44_t * JoltC_RMat44_PostScaled(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    RMat44 resultValue = selfCpp->PostScaled(
    *reinterpret_cast<Vec3 *>(inScale->obj)
    );
    RMat44* result = new RMat44(resultValue);
    return reinterpret_cast<JoltC_RMat44_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_RMat44_SetColumn3(
  JoltC_RMat44_t * self,
  long inCol,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    
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

void JoltC_RMat44_SetAxisX(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    
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

void JoltC_RMat44_SetAxisY(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    
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

void JoltC_RMat44_SetAxisZ(
  JoltC_RMat44_t * self,
  const JoltC_Vec3_t * inV,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    
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

void JoltC_RMat44_SetTranslation(
  JoltC_RMat44_t * self,
  const JoltC_RVec3_t * inV,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    
    selfCpp->SetTranslation(
    *reinterpret_cast<RVec3 *>(inV->obj)
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_RMat44_SetColumn4(
  JoltC_RMat44_t * self,
  long inCol,
  const JoltC_Vec4_t * inV,
  char** outErrMsg
) {
  try {
    RMat44 * selfCpp = static_cast<RMat44 *>(self->obj);
    
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

