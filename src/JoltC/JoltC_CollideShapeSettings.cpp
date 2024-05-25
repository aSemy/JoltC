#include "JoltC/JPC_CollideShapeSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CollideShapeSettings_t * JPC_CollideShapeSettings_new() {
  JPC_CollideShapeSettings_t * cInstance = new JPC_CollideShapeSettings_t();
  CollideShapeSettings * cppInstance = new CollideShapeSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

float JPC_CollideShapeSettings_mMaxSeparationDistance_Get(
  JPC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  float result = selfCpp->mMaxSeparationDistance;
  return result;
};

void JPC_CollideShapeSettings_mMaxSeparationDistance_Set(
  JPC_CollideShapeSettings_t * self,
  float mMaxSeparationDistance
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mMaxSeparationDistance = mMaxSeparationDistance;
};

JPC_EBackFaceMode JPC_CollideShapeSettings_mBackFaceMode_Get(
  JPC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  EBackFaceMode result = selfCpp->mBackFaceMode;
  return static_cast<JPC_EBackFaceMode>(static_cast<int>(result));
};

void JPC_CollideShapeSettings_mBackFaceMode_Set(
  JPC_CollideShapeSettings_t * self,
  JPC_EBackFaceMode mBackFaceMode
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mBackFaceMode = static_cast<EBackFaceMode>(static_cast<int>(mBackFaceMode));
};

JPC_EActiveEdgeMode JPC_CollideShapeSettings_mActiveEdgeMode_Get(
  JPC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  EActiveEdgeMode result = selfCpp->mActiveEdgeMode;
  return static_cast<JPC_EActiveEdgeMode>(static_cast<int>(result));
};

void JPC_CollideShapeSettings_mActiveEdgeMode_Set(
  JPC_CollideShapeSettings_t * self,
  JPC_EActiveEdgeMode mActiveEdgeMode
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mActiveEdgeMode = static_cast<EActiveEdgeMode>(static_cast<int>(mActiveEdgeMode));
};

JPC_ECollectFacesMode JPC_CollideShapeSettings_mCollectFacesMode_Get(
  JPC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  ECollectFacesMode result = selfCpp->mCollectFacesMode;
  return static_cast<JPC_ECollectFacesMode>(static_cast<int>(result));
};

void JPC_CollideShapeSettings_mCollectFacesMode_Set(
  JPC_CollideShapeSettings_t * self,
  JPC_ECollectFacesMode mCollectFacesMode
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mCollectFacesMode = static_cast<ECollectFacesMode>(static_cast<int>(mCollectFacesMode));
};

float JPC_CollideShapeSettings_mCollisionTolerance_Get(
  JPC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  float result = selfCpp->mCollisionTolerance;
  return result;
};

void JPC_CollideShapeSettings_mCollisionTolerance_Set(
  JPC_CollideShapeSettings_t * self,
  float mCollisionTolerance
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mCollisionTolerance = mCollisionTolerance;
};

float JPC_CollideShapeSettings_mPenetrationTolerance_Get(
  JPC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  float result = selfCpp->mPenetrationTolerance;
  return result;
};

void JPC_CollideShapeSettings_mPenetrationTolerance_Set(
  JPC_CollideShapeSettings_t * self,
  float mPenetrationTolerance
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mPenetrationTolerance = mPenetrationTolerance;
};

JPC_Vec3_t * JPC_CollideShapeSettings_mActiveEdgeMovementDirection_Get(
  JPC_CollideShapeSettings_t * self
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  Vec3 resultValue = selfCpp->mActiveEdgeMovementDirection;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

void JPC_CollideShapeSettings_mActiveEdgeMovementDirection_Set(
  JPC_CollideShapeSettings_t * self,
  JPC_Vec3_t * mActiveEdgeMovementDirection
) {
  CollideShapeSettings * selfCpp = static_cast<CollideShapeSettings *>(self->obj);
  selfCpp->mActiveEdgeMovementDirection = *reinterpret_cast<Vec3 *>(mActiveEdgeMovementDirection->obj);
};

//endregion properties

#ifdef __cplusplus
}
#endif

