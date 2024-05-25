#include "JoltC/JoltC_ShapeGetTriangles.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeGetTriangles_t * JoltC_ShapeGetTriangles_new(
  JoltC_Shape_t * inShape,
  const JoltC_AABox_t * inBox,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  char** outErrMsg
) {
  try {
    JoltC_ShapeGetTriangles_t * cInstance = new JoltC_ShapeGetTriangles_t();
    ShapeGetTriangles * cppInstance = new ShapeGetTriangles(
      reinterpret_cast<Shape *>(inShape->obj),
      *reinterpret_cast<AABox *>(inBox->obj),
      *reinterpret_cast<Vec3 *>(inPositionCOM->obj),
      *reinterpret_cast<Quat *>(inRotation->obj),
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

long JoltC_ShapeGetTriangles_GetNumTriangles(
  JoltC_ShapeGetTriangles_t * self,
  char** outErrMsg
) {
  try {
    ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
    long result = selfCpp->GetNumTriangles();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

long JoltC_ShapeGetTriangles_GetVerticesSize(
  JoltC_ShapeGetTriangles_t * self,
  char** outErrMsg
) {
  try {
    ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
    long result = selfCpp->GetVerticesSize();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const void* JoltC_ShapeGetTriangles_GetVerticesData(
  JoltC_ShapeGetTriangles_t * self,
  char** outErrMsg
) {
  try {
    ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
    const void* result = selfCpp->GetVerticesData();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_PhysicsMaterial_t * JoltC_ShapeGetTriangles_GetMaterial(
  JoltC_ShapeGetTriangles_t * self,
  long inTriangle,
  char** outErrMsg
) {
  try {
    ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
    const PhysicsMaterial * result = selfCpp->GetMaterial(
    inTriangle
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

//endregion functions

#ifdef __cplusplus
}
#endif

