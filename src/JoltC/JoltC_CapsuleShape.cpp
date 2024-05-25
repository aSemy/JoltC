#include "JoltC/JoltC_CapsuleShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CapsuleShape_t * JoltC_CapsuleShape_new(
  float inHalfHeight,
  float inRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
) {
  try {
    JoltC_CapsuleShape_t * cInstance = new JoltC_CapsuleShape_t();
    CapsuleShape * cppInstance = new CapsuleShape(
      inHalfHeight,
      inRadius,
      reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
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

float JoltC_CapsuleShape_GetRadius(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
    float result = selfCpp->GetRadius();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_CapsuleShape_GetHalfHeightOfCylinder(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
    float result = selfCpp->GetHalfHeightOfCylinder();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_CapsuleShape_GetDensity(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

void JoltC_CapsuleShape_SetDensity(
  JoltC_CapsuleShape_t * self,
  float inDensity,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
    
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

unsigned long JoltC_CapsuleShape_GetRefCount(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

void JoltC_CapsuleShape_AddRef(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CapsuleShape_Release(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EShapeType JoltC_CapsuleShape_GetType(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

JoltC_EShapeSubType JoltC_CapsuleShape_GetSubType(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

bool JoltC_CapsuleShape_MustBeStatic(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

JoltC_AABox_t * JoltC_CapsuleShape_GetLocalBounds(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

JoltC_AABox_t * JoltC_CapsuleShape_GetWorldSpaceBounds(
  JoltC_CapsuleShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_CapsuleShape_GetCenterOfMass(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

unsigned long long int JoltC_CapsuleShape_GetUserData(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

void JoltC_CapsuleShape_SetUserData(
  JoltC_CapsuleShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
    
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

unsigned long JoltC_CapsuleShape_GetSubShapeIDBitsRecursive(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

float JoltC_CapsuleShape_GetInnerRadius(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

JoltC_MassProperties_t * JoltC_CapsuleShape_GetMassProperties(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

const JoltC_PhysicsMaterial_t * JoltC_CapsuleShape_GetMaterial(
  JoltC_CapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_CapsuleShape_GetSurfaceNormal(
  JoltC_CapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

unsigned long long int JoltC_CapsuleShape_GetSubShapeUserData(
  JoltC_CapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

JoltC_TransformedShape_t * JoltC_CapsuleShape_GetSubShapeTransformedShape(
  JoltC_CapsuleShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

float JoltC_CapsuleShape_GetVolume(
  JoltC_CapsuleShape_t * self,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

bool JoltC_CapsuleShape_IsValidScale(
  JoltC_CapsuleShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

JoltC_Shape_ShapeResult_t * JoltC_CapsuleShape_ScaleShape(
  JoltC_CapsuleShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

