#include "JoltC/JoltC_CollideShapeResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `CollideShapeResult` instance.
 */
JoltC_CollideShapeResult_t * JoltC_CollideShapeResult_new() {
  JoltC_CollideShapeResult_t * cInstance = new JoltC_CollideShapeResult_t();
  CollideShapeResult * cppInstance = new CollideShapeResult();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_CollideShapeResult_destroy(
  JoltC_CollideShapeResult_t * self
){
  if (self == NULL) return;
  delete static_cast<CollideShapeResult *>(self->obj);
  free(self);
}

//endregion
//region converters

/**
 * Convert an instance of JoltC_ShapeCastResult_t into JoltC_CollideShapeResult_t.
 */
JoltC_CollideShapeResult_t * JoltC_CollideShapeResult_From_ShapeCastResult(
  JoltC_ShapeCastResult_t * subtype
) {
  return (JoltC_CollideShapeResult_t*) subtype;
};

//endregion

//region properties

JoltC_Vec3_t * JoltC_CollideShapeResult_mContactPointOn1_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mContactPointOn1;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollideShapeResult_mContactPointOn1_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_Vec3_t * mContactPointOn1
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mContactPointOn1 = *static_cast<Vec3 *>(mContactPointOn1->obj);
}

JoltC_Vec3_t * JoltC_CollideShapeResult_mContactPointOn2_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mContactPointOn2;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollideShapeResult_mContactPointOn2_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_Vec3_t * mContactPointOn2
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mContactPointOn2 = *static_cast<Vec3 *>(mContactPointOn2->obj);
}

JoltC_Vec3_t * JoltC_CollideShapeResult_mPenetrationAxis_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->mPenetrationAxis;
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollideShapeResult_mPenetrationAxis_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_Vec3_t * mPenetrationAxis
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mPenetrationAxis = *static_cast<Vec3 *>(mPenetrationAxis->obj);
}

float JoltC_CollideShapeResult_mPenetrationDepth_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  return selfCpp->mPenetrationDepth;
}

void JoltC_CollideShapeResult_mPenetrationDepth_Set(
  JoltC_CollideShapeResult_t * self,
  float mPenetrationDepth
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mPenetrationDepth = mPenetrationDepth;
}

JoltC_SubShapeID_t * JoltC_CollideShapeResult_mSubShapeID1_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  SubShapeID * resultPtr = new SubShapeID();
  *resultPtr = selfCpp->mSubShapeID1;
  JoltC_SubShapeID_t * result = new JoltC_SubShapeID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollideShapeResult_mSubShapeID1_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID1
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mSubShapeID1 = *static_cast<SubShapeID *>(mSubShapeID1->obj);
}

JoltC_SubShapeID_t * JoltC_CollideShapeResult_mSubShapeID2_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  SubShapeID * resultPtr = new SubShapeID();
  *resultPtr = selfCpp->mSubShapeID2;
  JoltC_SubShapeID_t * result = new JoltC_SubShapeID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollideShapeResult_mSubShapeID2_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mSubShapeID2 = *static_cast<SubShapeID *>(mSubShapeID2->obj);
}

JoltC_BodyID_t * JoltC_CollideShapeResult_mBodyID2_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  BodyID * resultPtr = new BodyID();
  *resultPtr = selfCpp->mBodyID2;
  JoltC_BodyID_t * result = new JoltC_BodyID_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollideShapeResult_mBodyID2_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_BodyID_t * mBodyID2
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mBodyID2 = *static_cast<BodyID *>(mBodyID2->obj);
}

JoltC_CollideShapeResultFace_t * JoltC_CollideShapeResult_mShape1Face_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  CollideShapeResultFace * resultPtr = new CollideShapeResultFace();
  *resultPtr = selfCpp->mShape1Face;
  JoltC_CollideShapeResultFace_t * result = new JoltC_CollideShapeResultFace_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollideShapeResult_mShape1Face_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_CollideShapeResultFace_t * mShape1Face
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mShape1Face = *static_cast<CollideShapeResultFace *>(mShape1Face->obj);
}

JoltC_CollideShapeResultFace_t * JoltC_CollideShapeResult_mShape2Face_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  CollideShapeResultFace * resultPtr = new CollideShapeResultFace();
  *resultPtr = selfCpp->mShape2Face;
  JoltC_CollideShapeResultFace_t * result = new JoltC_CollideShapeResultFace_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

void JoltC_CollideShapeResult_mShape2Face_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_CollideShapeResultFace_t * mShape2Face
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mShape2Face = *static_cast<CollideShapeResultFace *>(mShape2Face->obj);
}

//endregion


#ifdef __cplusplus
}
#endif
