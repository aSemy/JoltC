#include "JoltC/JoltC_ShapeCastResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ShapeCastResult` instance.
 */
JoltC_ShapeCastResult_t * JoltC_ShapeCastResult_new() {
  JoltC_ShapeCastResult_t * cInstance = new JoltC_ShapeCastResult_t();
  ShapeCastResult * cppInstance = new ShapeCastResult();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_ShapeCastResult_destroy(
  JoltC_ShapeCastResult_t * self
){
  if (self == NULL) return;
  delete static_cast<ShapeCastResult *>(self->obj);
  free(self);
}

//endregion
//region properties

float JoltC_ShapeCastResult_mFraction_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  return selfCpp->mFraction;
}

void JoltC_ShapeCastResult_mFraction_Set(
  JoltC_ShapeCastResult_t * self,
  float mFraction
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mFraction = mFraction;
}

bool JoltC_ShapeCastResult_mIsBackFaceHit_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  return selfCpp->mIsBackFaceHit;
}

void JoltC_ShapeCastResult_mIsBackFaceHit_Set(
  JoltC_ShapeCastResult_t * self,
  bool mIsBackFaceHit
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mIsBackFaceHit = mIsBackFaceHit;
}

JoltC_Vec3_t * JoltC_ShapeCastResult_mContactPointOn1_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mContactPointOn1;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ShapeCastResult_mContactPointOn1_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_Vec3_t * mContactPointOn1
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mContactPointOn1 = *static_cast<Vec3 *>(mContactPointOn1->obj);
}

JoltC_Vec3_t * JoltC_ShapeCastResult_mContactPointOn2_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mContactPointOn2;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ShapeCastResult_mContactPointOn2_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_Vec3_t * mContactPointOn2
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mContactPointOn2 = *static_cast<Vec3 *>(mContactPointOn2->obj);
}

JoltC_Vec3_t * JoltC_ShapeCastResult_mPenetrationAxis_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mPenetrationAxis;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ShapeCastResult_mPenetrationAxis_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_Vec3_t * mPenetrationAxis
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mPenetrationAxis = *static_cast<Vec3 *>(mPenetrationAxis->obj);
}

float JoltC_ShapeCastResult_mPenetrationDepth_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  return selfCpp->mPenetrationDepth;
}

void JoltC_ShapeCastResult_mPenetrationDepth_Set(
  JoltC_ShapeCastResult_t * self,
  float mPenetrationDepth
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mPenetrationDepth = mPenetrationDepth;
}

JoltC_SubShapeID_t * JoltC_ShapeCastResult_mSubShapeID1_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  SubShapeID * resultPtr = new SubShapeID();
  *resultPtr = selfCpp->mSubShapeID1;
  JoltC_SubShapeID_t * result = new JoltC_SubShapeID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ShapeCastResult_mSubShapeID1_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID1
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mSubShapeID1 = *static_cast<SubShapeID *>(mSubShapeID1->obj);
}

JoltC_SubShapeID_t * JoltC_ShapeCastResult_mSubShapeID2_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  SubShapeID * resultPtr = new SubShapeID();
  *resultPtr = selfCpp->mSubShapeID2;
  JoltC_SubShapeID_t * result = new JoltC_SubShapeID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ShapeCastResult_mSubShapeID2_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mSubShapeID2 = *static_cast<SubShapeID *>(mSubShapeID2->obj);
}

JoltC_BodyID_t * JoltC_ShapeCastResult_mBodyID2_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->mBodyID2;
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ShapeCastResult_mBodyID2_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_BodyID_t * mBodyID2
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mBodyID2 = *static_cast<BodyID *>(mBodyID2->obj);
}

JoltC_CollideShapeResultFace_t * JoltC_ShapeCastResult_mShape1Face_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  CollideShapeResultFace * resultPtr = new CollideShapeResultFace();
  *resultPtr = selfCpp->mShape1Face;
  JoltC_CollideShapeResultFace_t * result = new JoltC_CollideShapeResultFace_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ShapeCastResult_mShape1Face_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_CollideShapeResultFace_t * mShape1Face
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mShape1Face = *static_cast<CollideShapeResultFace *>(mShape1Face->obj);
}

JoltC_CollideShapeResultFace_t * JoltC_ShapeCastResult_mShape2Face_Get(
  JoltC_ShapeCastResult_t * self
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  CollideShapeResultFace * resultPtr = new CollideShapeResultFace();
  *resultPtr = selfCpp->mShape2Face;
  JoltC_CollideShapeResultFace_t * result = new JoltC_CollideShapeResultFace_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_ShapeCastResult_mShape2Face_Set(
  JoltC_ShapeCastResult_t * self,
  JoltC_CollideShapeResultFace_t * mShape2Face
) {
  ShapeCastResult * selfCpp = static_cast<ShapeCastResult *>(self->obj);
  selfCpp->mShape2Face = *static_cast<CollideShapeResultFace *>(mShape2Face->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
