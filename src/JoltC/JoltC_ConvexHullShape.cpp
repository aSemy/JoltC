#include "JoltC/JoltC_ConvexHullShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JoltC_ConvexHullShape_GetDensity(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

void JoltC_ConvexHullShape_SetDensity(
  JoltC_ConvexHullShape_t * self,
  float inDensity,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
    
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

unsigned long JoltC_ConvexHullShape_GetRefCount(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

void JoltC_ConvexHullShape_AddRef(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
    
    selfCpp->AddRef();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ConvexHullShape_Release(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
    
    selfCpp->Release();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_EShapeType JoltC_ConvexHullShape_GetType(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

JoltC_EShapeSubType JoltC_ConvexHullShape_GetSubType(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

bool JoltC_ConvexHullShape_MustBeStatic(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

JoltC_AABox_t * JoltC_ConvexHullShape_GetLocalBounds(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

JoltC_AABox_t * JoltC_ConvexHullShape_GetWorldSpaceBounds(
  JoltC_ConvexHullShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_ConvexHullShape_GetCenterOfMass(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

unsigned long long int JoltC_ConvexHullShape_GetUserData(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

void JoltC_ConvexHullShape_SetUserData(
  JoltC_ConvexHullShape_t * self,
  unsigned long long int inUserData,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
    
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

unsigned long JoltC_ConvexHullShape_GetSubShapeIDBitsRecursive(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

float JoltC_ConvexHullShape_GetInnerRadius(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

JoltC_MassProperties_t * JoltC_ConvexHullShape_GetMassProperties(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

const JoltC_PhysicsMaterial_t * JoltC_ConvexHullShape_GetMaterial(
  JoltC_ConvexHullShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

JoltC_Vec3_t * JoltC_ConvexHullShape_GetSurfaceNormal(
  JoltC_ConvexHullShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

unsigned long long int JoltC_ConvexHullShape_GetSubShapeUserData(
  JoltC_ConvexHullShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

JoltC_TransformedShape_t * JoltC_ConvexHullShape_GetSubShapeTransformedShape(
  JoltC_ConvexHullShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

float JoltC_ConvexHullShape_GetVolume(
  JoltC_ConvexHullShape_t * self,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

bool JoltC_ConvexHullShape_IsValidScale(
  JoltC_ConvexHullShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

JoltC_Shape_ShapeResult_t * JoltC_ConvexHullShape_ScaleShape(
  JoltC_ConvexHullShape_t * self,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
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

