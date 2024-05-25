#include "JoltC/JoltC_TaperedCapsuleShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JoltC_TaperedCapsuleShape_GetDensity(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    float result = selfCpp->GetDensity();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_TaperedCapsuleShape_SetDensity(
  JoltC_TaperedCapsuleShape_t * self,
  float inDensity,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    
    selfCpp->SetDensity(
    inDensity
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_TaperedCapsuleShape_GetRefCount(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    unsigned long result = selfCpp->GetRefCount();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_TaperedCapsuleShape_AddRef(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_TaperedCapsuleShape_Release(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EShapeType JoltC_TaperedCapsuleShape_GetType(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    EShapeType result = selfCpp->GetType();
    return static_cast<JoltC_EShapeType>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EShapeSubType JoltC_TaperedCapsuleShape_GetSubType(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    EShapeSubType result = selfCpp->GetSubType();
    return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_TaperedCapsuleShape_MustBeStatic(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    bool result = selfCpp->MustBeStatic();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_AABox_t * JoltC_TaperedCapsuleShape_GetLocalBounds(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    AABox resultValue = selfCpp->GetLocalBounds();
    AABox* result = new AABox(resultValue);
    return reinterpret_cast<JoltC_AABox_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_AABox_t * JoltC_TaperedCapsuleShape_GetWorldSpaceBounds(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    AABox resultValue = selfCpp->GetWorldSpaceBounds(
    *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
    );
    AABox* result = new AABox(resultValue);
    return reinterpret_cast<JoltC_AABox_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_TaperedCapsuleShape_GetCenterOfMass(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    Vec3 resultValue = selfCpp->GetCenterOfMass();
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

unsigned long long int JoltC_TaperedCapsuleShape_GetUserData(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    unsigned long long int result = selfCpp->GetUserData();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_TaperedCapsuleShape_SetUserData(
  JoltC_TaperedCapsuleShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    
    selfCpp->SetUserData(
    inUserData
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_TaperedCapsuleShape_GetSubShapeIDBitsRecursive(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_TaperedCapsuleShape_GetInnerRadius(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    float result = selfCpp->GetInnerRadius();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_MassProperties_t * JoltC_TaperedCapsuleShape_GetMassProperties(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    MassProperties resultValue = selfCpp->GetMassProperties();
    MassProperties* result = new MassProperties(resultValue);
    return reinterpret_cast<JoltC_MassProperties_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_PhysicsMaterial_t * JoltC_TaperedCapsuleShape_GetMaterial(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    const PhysicsMaterial * result = selfCpp->GetMaterial(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
    );
    return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Vec3_t * JoltC_TaperedCapsuleShape_GetSurfaceNormal(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    Vec3 resultValue = selfCpp->GetSurfaceNormal(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
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

unsigned long long int JoltC_TaperedCapsuleShape_GetSubShapeUserData(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    unsigned long long int result = selfCpp->GetSubShapeUserData(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
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

JoltC_TransformedShape_t * JoltC_TaperedCapsuleShape_GetSubShapeTransformedShape(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    TransformedShape resultValue = selfCpp->GetSubShapeTransformedShape(
    *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
    *reinterpret_cast<Vec3 *>(inPositionCOM->obj),
    *reinterpret_cast<Quat *>(inRotation->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj),
    *reinterpret_cast<SubShapeID *>(outRemainder->obj)
    );
    TransformedShape* result = new TransformedShape(resultValue);
    return reinterpret_cast<JoltC_TransformedShape_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_TaperedCapsuleShape_GetVolume(
  JoltC_TaperedCapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    float result = selfCpp->GetVolume();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_TaperedCapsuleShape_IsValidScale(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    bool result = selfCpp->IsValidScale(
    *reinterpret_cast<Vec3 *>(inScale->obj)
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

JoltC_Shape_ShapeResult_t * JoltC_TaperedCapsuleShape_ScaleShape(
  JoltC_TaperedCapsuleShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    TaperedCapsuleShape * selfCpp = static_cast<TaperedCapsuleShape *>(self->obj);
    Shape::ShapeResult resultValue = selfCpp->ScaleShape(
    *reinterpret_cast<Vec3 *>(inScale->obj)
    );
    Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
    return reinterpret_cast<JoltC_Shape_ShapeResult_t *>(result);
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

