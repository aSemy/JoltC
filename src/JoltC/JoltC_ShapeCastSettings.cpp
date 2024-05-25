#include "JoltC/JoltC_ShapeCastSettings.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ShapeCastSettings_t * JoltC_ShapeCastSettings_new(
  char** outErrMsg
) {
  try {
    JoltC_ShapeCastSettings_t * cInstance = new JoltC_ShapeCastSettings_t();
    ShapeCastSettings * cppInstance = new ShapeCastSettings();
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

//region properties

JoltC_EBackFaceMode JoltC_ShapeCastSettings_mBackFaceModeTriangles_Get(
  JoltC_ShapeCastSettings_t * self,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  EBackFaceMode result = selfCpp->mBackFaceModeTriangles;
  return static_cast<JoltC_EBackFaceMode>(static_cast<int>(result));
};

void JoltC_ShapeCastSettings_mBackFaceModeTriangles_Set(
  JoltC_ShapeCastSettings_t * self,
  JoltC_EBackFaceMode mBackFaceModeTriangles,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mBackFaceModeTriangles = static_cast<EBackFaceMode>(static_cast<int>(mBackFaceModeTriangles));
};

JoltC_EBackFaceMode JoltC_ShapeCastSettings_mBackFaceModeConvex_Get(
  JoltC_ShapeCastSettings_t * self,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  EBackFaceMode result = selfCpp->mBackFaceModeConvex;
  return static_cast<JoltC_EBackFaceMode>(static_cast<int>(result));
};

void JoltC_ShapeCastSettings_mBackFaceModeConvex_Set(
  JoltC_ShapeCastSettings_t * self,
  JoltC_EBackFaceMode mBackFaceModeConvex,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mBackFaceModeConvex = static_cast<EBackFaceMode>(static_cast<int>(mBackFaceModeConvex));
};

bool JoltC_ShapeCastSettings_mUseShrunkenShapeAndConvexRadius_Get(
  JoltC_ShapeCastSettings_t * self,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  bool result = selfCpp->mUseShrunkenShapeAndConvexRadius;
  return result;
};

void JoltC_ShapeCastSettings_mUseShrunkenShapeAndConvexRadius_Set(
  JoltC_ShapeCastSettings_t * self,
  bool mUseShrunkenShapeAndConvexRadius,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mUseShrunkenShapeAndConvexRadius = mUseShrunkenShapeAndConvexRadius;
};

bool JoltC_ShapeCastSettings_mReturnDeepestPoint_Get(
  JoltC_ShapeCastSettings_t * self,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  bool result = selfCpp->mReturnDeepestPoint;
  return result;
};

void JoltC_ShapeCastSettings_mReturnDeepestPoint_Set(
  JoltC_ShapeCastSettings_t * self,
  bool mReturnDeepestPoint,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mReturnDeepestPoint = mReturnDeepestPoint;
};

JoltC_EActiveEdgeMode JoltC_ShapeCastSettings_mActiveEdgeMode_Get(
  JoltC_ShapeCastSettings_t * self,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  EActiveEdgeMode result = selfCpp->mActiveEdgeMode;
  return static_cast<JoltC_EActiveEdgeMode>(static_cast<int>(result));
};

void JoltC_ShapeCastSettings_mActiveEdgeMode_Set(
  JoltC_ShapeCastSettings_t * self,
  JoltC_EActiveEdgeMode mActiveEdgeMode,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mActiveEdgeMode = static_cast<EActiveEdgeMode>(static_cast<int>(mActiveEdgeMode));
};

JoltC_ECollectFacesMode JoltC_ShapeCastSettings_mCollectFacesMode_Get(
  JoltC_ShapeCastSettings_t * self,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  ECollectFacesMode result = selfCpp->mCollectFacesMode;
  return static_cast<JoltC_ECollectFacesMode>(static_cast<int>(result));
};

void JoltC_ShapeCastSettings_mCollectFacesMode_Set(
  JoltC_ShapeCastSettings_t * self,
  JoltC_ECollectFacesMode mCollectFacesMode,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mCollectFacesMode = static_cast<ECollectFacesMode>(static_cast<int>(mCollectFacesMode));
};

float JoltC_ShapeCastSettings_mCollisionTolerance_Get(
  JoltC_ShapeCastSettings_t * self,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  float result = selfCpp->mCollisionTolerance;
  return result;
};

void JoltC_ShapeCastSettings_mCollisionTolerance_Set(
  JoltC_ShapeCastSettings_t * self,
  float mCollisionTolerance,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mCollisionTolerance = mCollisionTolerance;
};

float JoltC_ShapeCastSettings_mPenetrationTolerance_Get(
  JoltC_ShapeCastSettings_t * self,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  float result = selfCpp->mPenetrationTolerance;
  return result;
};

void JoltC_ShapeCastSettings_mPenetrationTolerance_Set(
  JoltC_ShapeCastSettings_t * self,
  float mPenetrationTolerance,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mPenetrationTolerance = mPenetrationTolerance;
};

JoltC_Vec3_t * JoltC_ShapeCastSettings_mActiveEdgeMovementDirection_Get(
  JoltC_ShapeCastSettings_t * self,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mActiveEdgeMovementDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_ShapeCastSettings_mActiveEdgeMovementDirection_Set(
  JoltC_ShapeCastSettings_t * self,
  JoltC_Vec3_t * mActiveEdgeMovementDirection,
  char** outErrMsg
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mActiveEdgeMovementDirection = *reinterpret_cast<Vec3 *>(mActiveEdgeMovementDirection->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

