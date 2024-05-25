#include "JoltC/JoltC_StaticCompoundShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JoltC_StaticCompoundShape_GetNumSubShapes(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
    long result = selfCpp->GetNumSubShapes();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_CompoundShapeSubShape_t * JoltC_StaticCompoundShape_GetSubShape(
  JoltC_StaticCompoundShape_t * self,
  long inIdx,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
    const CompoundShapeSubShape& resultRef = selfCpp->GetSubShape(
    inIdx
    );
    const CompoundShapeSubShape * result = &resultRef;
    return reinterpret_cast<const JoltC_CompoundShapeSubShape_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

unsigned long JoltC_StaticCompoundShape_GetRefCount(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

void JoltC_StaticCompoundShape_AddRef(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_StaticCompoundShape_Release(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EShapeType JoltC_StaticCompoundShape_GetType(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

JoltC_EShapeSubType JoltC_StaticCompoundShape_GetSubType(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

bool JoltC_StaticCompoundShape_MustBeStatic(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

JoltC_AABox_t * JoltC_StaticCompoundShape_GetLocalBounds(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

JoltC_AABox_t * JoltC_StaticCompoundShape_GetWorldSpaceBounds(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_StaticCompoundShape_GetCenterOfMass(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

unsigned long long int JoltC_StaticCompoundShape_GetUserData(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

void JoltC_StaticCompoundShape_SetUserData(
  JoltC_StaticCompoundShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
    
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

unsigned long JoltC_StaticCompoundShape_GetSubShapeIDBitsRecursive(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

float JoltC_StaticCompoundShape_GetInnerRadius(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

JoltC_MassProperties_t * JoltC_StaticCompoundShape_GetMassProperties(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

const JoltC_PhysicsMaterial_t * JoltC_StaticCompoundShape_GetMaterial(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_StaticCompoundShape_GetSurfaceNormal(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

unsigned long long int JoltC_StaticCompoundShape_GetSubShapeUserData(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

JoltC_TransformedShape_t * JoltC_StaticCompoundShape_GetSubShapeTransformedShape(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

float JoltC_StaticCompoundShape_GetVolume(
  JoltC_StaticCompoundShape_t * self,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

bool JoltC_StaticCompoundShape_IsValidScale(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

JoltC_Shape_ShapeResult_t * JoltC_StaticCompoundShape_ScaleShape(
  JoltC_StaticCompoundShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    StaticCompoundShape * selfCpp = static_cast<StaticCompoundShape *>(self->obj);
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

