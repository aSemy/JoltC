#include "JoltC/JoltC_CylinderShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CylinderShape_t * JoltC_CylinderShape_new(
  float inHalfHeight,
  float inRadius,
  float inConvexRadius,
  const JoltC_PhysicsMaterial_t * inMaterial,
  char** outErrMsg
) {
  try {
    JoltC_CylinderShape_t * cInstance = new JoltC_CylinderShape_t();
    CylinderShape * cppInstance = new CylinderShape(
      inHalfHeight,
      inRadius,
      inConvexRadius,
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

float JoltC_CylinderShape_GetRadius(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

float JoltC_CylinderShape_GetHalfHeight(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
    float result = selfCpp->GetHalfHeight();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

float JoltC_CylinderShape_GetDensity(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

void JoltC_CylinderShape_SetDensity(
  JoltC_CylinderShape_t * self,
  float inDensity,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
    
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

unsigned long JoltC_CylinderShape_GetRefCount(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

void JoltC_CylinderShape_AddRef(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_CylinderShape_Release(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EShapeType JoltC_CylinderShape_GetType(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

JoltC_EShapeSubType JoltC_CylinderShape_GetSubType(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

bool JoltC_CylinderShape_MustBeStatic(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

JoltC_AABox_t * JoltC_CylinderShape_GetLocalBounds(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

JoltC_AABox_t * JoltC_CylinderShape_GetWorldSpaceBounds(
  JoltC_CylinderShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_CylinderShape_GetCenterOfMass(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

unsigned long long int JoltC_CylinderShape_GetUserData(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

void JoltC_CylinderShape_SetUserData(
  JoltC_CylinderShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
    
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

unsigned long JoltC_CylinderShape_GetSubShapeIDBitsRecursive(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

float JoltC_CylinderShape_GetInnerRadius(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

JoltC_MassProperties_t * JoltC_CylinderShape_GetMassProperties(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

const JoltC_PhysicsMaterial_t * JoltC_CylinderShape_GetMaterial(
  JoltC_CylinderShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_CylinderShape_GetSurfaceNormal(
  JoltC_CylinderShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

unsigned long long int JoltC_CylinderShape_GetSubShapeUserData(
  JoltC_CylinderShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

JoltC_TransformedShape_t * JoltC_CylinderShape_GetSubShapeTransformedShape(
  JoltC_CylinderShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

float JoltC_CylinderShape_GetVolume(
  JoltC_CylinderShape_t * self,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

bool JoltC_CylinderShape_IsValidScale(
  JoltC_CylinderShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

JoltC_Shape_ShapeResult_t * JoltC_CylinderShape_ScaleShape(
  JoltC_CylinderShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

