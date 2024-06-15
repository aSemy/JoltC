#include "JoltC/JoltC_ContactManifold.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ContactManifold` instance.
 */
JoltC_ContactManifold_t * JoltC_ContactManifold_new() {
  JoltC_ContactManifold_t * cInstance = new JoltC_ContactManifold_t();
  ContactManifold * cppInstance = new ContactManifold();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_ContactManifold_destroy(
  JoltC_ContactManifold_t * self
){
  if (self == NULL) return;
  delete static_cast<ContactManifold *>(self->obj);
  free(self);
}

//endregion
//region functions

JoltC_ContactManifold_t * JoltC_ContactManifold_SwapShapes(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  ContactManifold * resultPtr = new ContactManifold();
  *resultPtr = selfCpp->SwapShapes();
  JoltC_ContactManifold_t * result = new JoltC_ContactManifold_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_ContactManifold_GetWorldSpaceContactPointOn1(
  JoltC_ContactManifold_t * self,
  unsigned long inIndex
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetWorldSpaceContactPointOn1(
    inIndex
  );
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_RVec3_t * JoltC_ContactManifold_GetWorldSpaceContactPointOn2(
  JoltC_ContactManifold_t * self,
  unsigned long inIndex
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->GetWorldSpaceContactPointOn2(
    inIndex
  );
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

//region properties

JoltC_RVec3_t * JoltC_ContactManifold_mBaseOffset_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  RVec3 * resultPtr = new RVec3();
  *resultPtr = selfCpp->mBaseOffset;
  JoltC_RVec3_t * result = new JoltC_RVec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ContactManifold_mBaseOffset_Set(
  JoltC_ContactManifold_t * self,
  JoltC_RVec3_t * mBaseOffset
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mBaseOffset = *static_cast<RVec3 *>(mBaseOffset->obj);
}

JoltC_Vec3_t * JoltC_ContactManifold_mWorldSpaceNormal_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mWorldSpaceNormal;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ContactManifold_mWorldSpaceNormal_Set(
  JoltC_ContactManifold_t * self,
  JoltC_Vec3_t * mWorldSpaceNormal
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mWorldSpaceNormal = *static_cast<Vec3 *>(mWorldSpaceNormal->obj);
}

float JoltC_ContactManifold_mPenetrationDepth_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  return selfCpp->mPenetrationDepth;
}

void JoltC_ContactManifold_mPenetrationDepth_Set(
  JoltC_ContactManifold_t * self,
  float mPenetrationDepth
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mPenetrationDepth = mPenetrationDepth;
}

JoltC_SubShapeID_t * JoltC_ContactManifold_mSubShapeID1_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  SubShapeID * resultPtr = new SubShapeID();
  *resultPtr = selfCpp->mSubShapeID1;
  JoltC_SubShapeID_t * result = new JoltC_SubShapeID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ContactManifold_mSubShapeID1_Set(
  JoltC_ContactManifold_t * self,
  JoltC_SubShapeID_t * mSubShapeID1
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mSubShapeID1 = *static_cast<SubShapeID *>(mSubShapeID1->obj);
}

JoltC_SubShapeID_t * JoltC_ContactManifold_mSubShapeID2_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  SubShapeID * resultPtr = new SubShapeID();
  *resultPtr = selfCpp->mSubShapeID2;
  JoltC_SubShapeID_t * result = new JoltC_SubShapeID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ContactManifold_mSubShapeID2_Set(
  JoltC_ContactManifold_t * self,
  JoltC_SubShapeID_t * mSubShapeID2
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mSubShapeID2 = *static_cast<SubShapeID *>(mSubShapeID2->obj);
}

JoltC_ContactPoints_t * JoltC_ContactManifold_mRelativeContactPointsOn1_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  ContactPoints * resultPtr = new ContactPoints();
  *resultPtr = selfCpp->mRelativeContactPointsOn1;
  JoltC_ContactPoints_t * result = new JoltC_ContactPoints_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ContactManifold_mRelativeContactPointsOn1_Set(
  JoltC_ContactManifold_t * self,
  JoltC_ContactPoints_t * mRelativeContactPointsOn1
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mRelativeContactPointsOn1 = *static_cast<ContactPoints *>(mRelativeContactPointsOn1->obj);
}

JoltC_ContactPoints_t * JoltC_ContactManifold_mRelativeContactPointsOn2_Get(
  JoltC_ContactManifold_t * self
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  ContactPoints * resultPtr = new ContactPoints();
  *resultPtr = selfCpp->mRelativeContactPointsOn2;
  JoltC_ContactPoints_t * result = new JoltC_ContactPoints_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ContactManifold_mRelativeContactPointsOn2_Set(
  JoltC_ContactManifold_t * self,
  JoltC_ContactPoints_t * mRelativeContactPointsOn2
) {
  ContactManifold * selfCpp = static_cast<ContactManifold *>(self->obj);
  selfCpp->mRelativeContactPointsOn2 = *static_cast<ContactPoints *>(mRelativeContactPointsOn2->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
