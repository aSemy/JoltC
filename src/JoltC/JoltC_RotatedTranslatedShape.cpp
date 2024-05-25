#include "JoltC/JoltC_RotatedTranslatedShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

JoltC_Quat_t * JoltC_RotatedTranslatedShape_GetRotation(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
    Quat resultValue = selfCpp->GetRotation();
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

JoltC_Vec3_t * JoltC_RotatedTranslatedShape_GetPosition(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
    Vec3 resultValue = selfCpp->GetPosition();
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

const JoltC_Shape_t * JoltC_RotatedTranslatedShape_GetInnerShape(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

unsigned long JoltC_RotatedTranslatedShape_GetRefCount(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

void JoltC_RotatedTranslatedShape_AddRef(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_RotatedTranslatedShape_Release(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EShapeType JoltC_RotatedTranslatedShape_GetType(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

JoltC_EShapeSubType JoltC_RotatedTranslatedShape_GetSubType(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

bool JoltC_RotatedTranslatedShape_MustBeStatic(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

JoltC_AABox_t * JoltC_RotatedTranslatedShape_GetLocalBounds(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

JoltC_AABox_t * JoltC_RotatedTranslatedShape_GetWorldSpaceBounds(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_RotatedTranslatedShape_GetCenterOfMass(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

unsigned long long int JoltC_RotatedTranslatedShape_GetUserData(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

void JoltC_RotatedTranslatedShape_SetUserData(
  JoltC_RotatedTranslatedShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
    
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

unsigned long JoltC_RotatedTranslatedShape_GetSubShapeIDBitsRecursive(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

float JoltC_RotatedTranslatedShape_GetInnerRadius(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

JoltC_MassProperties_t * JoltC_RotatedTranslatedShape_GetMassProperties(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

const JoltC_PhysicsMaterial_t * JoltC_RotatedTranslatedShape_GetMaterial(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_RotatedTranslatedShape_GetSurfaceNormal(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

unsigned long long int JoltC_RotatedTranslatedShape_GetSubShapeUserData(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

JoltC_TransformedShape_t * JoltC_RotatedTranslatedShape_GetSubShapeTransformedShape(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

float JoltC_RotatedTranslatedShape_GetVolume(
  JoltC_RotatedTranslatedShape_t * self,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

bool JoltC_RotatedTranslatedShape_IsValidScale(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

JoltC_Shape_ShapeResult_t * JoltC_RotatedTranslatedShape_ScaleShape(
  JoltC_RotatedTranslatedShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    RotatedTranslatedShape * selfCpp = static_cast<RotatedTranslatedShape *>(self->obj);
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

