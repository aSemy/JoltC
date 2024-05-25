#include "JoltC/JoltC_ScaledShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ScaledShape_t * JoltC_ScaledShape_new(
  JoltC_Shape_t * inShape,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    JoltC_ScaledShape_t * cInstance = new JoltC_ScaledShape_t();
    ScaledShape * cppInstance = new ScaledShape(
      reinterpret_cast<Shape *>(inShape->obj),
      *reinterpret_cast<Vec3 *>(inScale->obj)
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

JoltC_Vec3_t * JoltC_ScaledShape_GetScale(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
    Vec3 resultValue = selfCpp->GetScale();
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

const JoltC_Shape_t * JoltC_ScaledShape_GetInnerShape(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
    const Shape * result = selfCpp->GetInnerShape();
    return reinterpret_cast<const JoltC_Shape_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_ScaledShape_GetRefCount(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

void JoltC_ScaledShape_AddRef(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ScaledShape_Release(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EShapeType JoltC_ScaledShape_GetType(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

JoltC_EShapeSubType JoltC_ScaledShape_GetSubType(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

bool JoltC_ScaledShape_MustBeStatic(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

JoltC_AABox_t * JoltC_ScaledShape_GetLocalBounds(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

JoltC_AABox_t * JoltC_ScaledShape_GetWorldSpaceBounds(
  JoltC_ScaledShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_ScaledShape_GetCenterOfMass(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

unsigned long long int JoltC_ScaledShape_GetUserData(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

void JoltC_ScaledShape_SetUserData(
  JoltC_ScaledShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
    
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

unsigned long JoltC_ScaledShape_GetSubShapeIDBitsRecursive(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

float JoltC_ScaledShape_GetInnerRadius(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

JoltC_MassProperties_t * JoltC_ScaledShape_GetMassProperties(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

const JoltC_PhysicsMaterial_t * JoltC_ScaledShape_GetMaterial(
  JoltC_ScaledShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_ScaledShape_GetSurfaceNormal(
  JoltC_ScaledShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

unsigned long long int JoltC_ScaledShape_GetSubShapeUserData(
  JoltC_ScaledShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

JoltC_TransformedShape_t * JoltC_ScaledShape_GetSubShapeTransformedShape(
  JoltC_ScaledShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

float JoltC_ScaledShape_GetVolume(
  JoltC_ScaledShape_t * self,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

bool JoltC_ScaledShape_IsValidScale(
  JoltC_ScaledShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

JoltC_Shape_ShapeResult_t * JoltC_ScaledShape_ScaleShape(
  JoltC_ScaledShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

