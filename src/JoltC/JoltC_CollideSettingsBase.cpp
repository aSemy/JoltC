#include "JoltC/JoltC_CollideSettingsBase.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_CollideSettingsBase_destroy(
  JoltC_CollideSettingsBase_t * self
){
  if (self == NULL) return;
  delete static_cast<CollideSettingsBase *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_CollideShapeSettings_t into JoltC_CollideSettingsBase_t.
 */
JoltC_CollideSettingsBase_t * JoltC_CollideSettingsBase_From_CollideShapeSettings(
  JoltC_CollideShapeSettings_t * subtype
) {
  return (JoltC_CollideSettingsBase_t*) subtype;
};

/**
 * Convert an instance of JoltC_ShapeCastSettings_t into JoltC_CollideSettingsBase_t.
 */
JoltC_CollideSettingsBase_t * JoltC_CollideSettingsBase_From_ShapeCastSettings(
  JoltC_ShapeCastSettings_t * subtype
) {
  return (JoltC_CollideSettingsBase_t*) subtype;
};

//endregion

//region properties

JoltC_EActiveEdgeMode JoltC_CollideSettingsBase_mActiveEdgeMode_Get(
  JoltC_CollideSettingsBase_t * self
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  EActiveEdgeMode result = selfCpp->mActiveEdgeMode;
  return static_cast<JoltC_EActiveEdgeMode>(static_cast<int>(result));
}

void JoltC_CollideSettingsBase_mActiveEdgeMode_Set(
  JoltC_CollideSettingsBase_t * self,
  JoltC_EActiveEdgeMode mActiveEdgeMode
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mActiveEdgeMode = static_cast<EActiveEdgeMode>(static_cast<int>(mActiveEdgeMode));
}

JoltC_ECollectFacesMode JoltC_CollideSettingsBase_mCollectFacesMode_Get(
  JoltC_CollideSettingsBase_t * self
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  ECollectFacesMode result = selfCpp->mCollectFacesMode;
  return static_cast<JoltC_ECollectFacesMode>(static_cast<int>(result));
}

void JoltC_CollideSettingsBase_mCollectFacesMode_Set(
  JoltC_CollideSettingsBase_t * self,
  JoltC_ECollectFacesMode mCollectFacesMode
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mCollectFacesMode = static_cast<ECollectFacesMode>(static_cast<int>(mCollectFacesMode));
}

float JoltC_CollideSettingsBase_mCollisionTolerance_Get(
  JoltC_CollideSettingsBase_t * self
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  return selfCpp->mCollisionTolerance;
}

void JoltC_CollideSettingsBase_mCollisionTolerance_Set(
  JoltC_CollideSettingsBase_t * self,
  float mCollisionTolerance
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mCollisionTolerance = mCollisionTolerance;
}

float JoltC_CollideSettingsBase_mPenetrationTolerance_Get(
  JoltC_CollideSettingsBase_t * self
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  return selfCpp->mPenetrationTolerance;
}

void JoltC_CollideSettingsBase_mPenetrationTolerance_Set(
  JoltC_CollideSettingsBase_t * self,
  float mPenetrationTolerance
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mPenetrationTolerance = mPenetrationTolerance;
}

JoltC_Vec3_t * JoltC_CollideSettingsBase_mActiveEdgeMovementDirection_Get(
  JoltC_CollideSettingsBase_t * self
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mActiveEdgeMovementDirection;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollideSettingsBase_mActiveEdgeMovementDirection_Set(
  JoltC_CollideSettingsBase_t * self,
  JoltC_Vec3_t * mActiveEdgeMovementDirection
) {
  CollideSettingsBase * selfCpp = static_cast<CollideSettingsBase *>(self->obj);
  selfCpp->mActiveEdgeMovementDirection = *static_cast<Vec3 *>(mActiveEdgeMovementDirection->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
