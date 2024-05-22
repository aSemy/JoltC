#include "JoltC/JPC_ShapeCastSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ShapeCastSettings_t * JPC_ShapeCastSettings_new() {
  JPC_ShapeCastSettings_t * cInstance = new JPC_ShapeCastSettings_t();
  ShapeCastSettings * cppInstance = new ShapeCastSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

JPC_EBackFaceMode JPC_ShapeCastSettings_mBackFaceModeTriangles_Get(
  JPC_ShapeCastSettings_t * self
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  EBackFaceMode result = selfCpp->mBackFaceModeTriangles;
  return static_cast<JPC_EBackFaceMode>(static_cast<int>(result));
};

void JPC_ShapeCastSettings_mBackFaceModeTriangles_Set(
  JPC_ShapeCastSettings_t * self,
  JPC_EBackFaceMode mBackFaceModeTriangles
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mBackFaceModeTriangles = static_cast<EBackFaceMode>(static_cast<int>(mBackFaceModeTriangles));
};

JPC_EBackFaceMode JPC_ShapeCastSettings_mBackFaceModeConvex_Get(
  JPC_ShapeCastSettings_t * self
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  EBackFaceMode result = selfCpp->mBackFaceModeConvex;
  return static_cast<JPC_EBackFaceMode>(static_cast<int>(result));
};

void JPC_ShapeCastSettings_mBackFaceModeConvex_Set(
  JPC_ShapeCastSettings_t * self,
  JPC_EBackFaceMode mBackFaceModeConvex
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mBackFaceModeConvex = static_cast<EBackFaceMode>(static_cast<int>(mBackFaceModeConvex));
};

bool JPC_ShapeCastSettings_mUseShrunkenShapeAndConvexRadius_Get(
  JPC_ShapeCastSettings_t * self
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  bool result = selfCpp->mUseShrunkenShapeAndConvexRadius;
  return result;
};

void JPC_ShapeCastSettings_mUseShrunkenShapeAndConvexRadius_Set(
  JPC_ShapeCastSettings_t * self,
  bool mUseShrunkenShapeAndConvexRadius
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mUseShrunkenShapeAndConvexRadius = mUseShrunkenShapeAndConvexRadius;
};

bool JPC_ShapeCastSettings_mReturnDeepestPoint_Get(
  JPC_ShapeCastSettings_t * self
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  bool result = selfCpp->mReturnDeepestPoint;
  return result;
};

void JPC_ShapeCastSettings_mReturnDeepestPoint_Set(
  JPC_ShapeCastSettings_t * self,
  bool mReturnDeepestPoint
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mReturnDeepestPoint = mReturnDeepestPoint;
};

JPC_EActiveEdgeMode JPC_ShapeCastSettings_mActiveEdgeMode_Get(
  JPC_ShapeCastSettings_t * self
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  EActiveEdgeMode result = selfCpp->mActiveEdgeMode;
  return static_cast<JPC_EActiveEdgeMode>(static_cast<int>(result));
};

void JPC_ShapeCastSettings_mActiveEdgeMode_Set(
  JPC_ShapeCastSettings_t * self,
  JPC_EActiveEdgeMode mActiveEdgeMode
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mActiveEdgeMode = static_cast<EActiveEdgeMode>(static_cast<int>(mActiveEdgeMode));
};

JPC_ECollectFacesMode JPC_ShapeCastSettings_mCollectFacesMode_Get(
  JPC_ShapeCastSettings_t * self
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  ECollectFacesMode result = selfCpp->mCollectFacesMode;
  return static_cast<JPC_ECollectFacesMode>(static_cast<int>(result));
};

void JPC_ShapeCastSettings_mCollectFacesMode_Set(
  JPC_ShapeCastSettings_t * self,
  JPC_ECollectFacesMode mCollectFacesMode
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mCollectFacesMode = static_cast<ECollectFacesMode>(static_cast<int>(mCollectFacesMode));
};

float JPC_ShapeCastSettings_mCollisionTolerance_Get(
  JPC_ShapeCastSettings_t * self
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  float result = selfCpp->mCollisionTolerance;
  return result;
};

void JPC_ShapeCastSettings_mCollisionTolerance_Set(
  JPC_ShapeCastSettings_t * self,
  float mCollisionTolerance
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mCollisionTolerance = mCollisionTolerance;
};

float JPC_ShapeCastSettings_mPenetrationTolerance_Get(
  JPC_ShapeCastSettings_t * self
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  float result = selfCpp->mPenetrationTolerance;
  return result;
};

void JPC_ShapeCastSettings_mPenetrationTolerance_Set(
  JPC_ShapeCastSettings_t * self,
  float mPenetrationTolerance
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mPenetrationTolerance = mPenetrationTolerance;
};

JPC_Vec3_t * JPC_ShapeCastSettings_mActiveEdgeMovementDirection_Get(
  JPC_ShapeCastSettings_t * self
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mActiveEdgeMovementDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_ShapeCastSettings_mActiveEdgeMovementDirection_Set(
  JPC_ShapeCastSettings_t * self,
  JPC_Vec3_t * mActiveEdgeMovementDirection
) {
  ShapeCastSettings * selfCpp = static_cast<ShapeCastSettings *>(self->obj);
  selfCpp->mActiveEdgeMovementDirection = *reinterpret_cast<Vec3 *>(mActiveEdgeMovementDirection->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

