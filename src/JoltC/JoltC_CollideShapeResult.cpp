#include "JoltC/JoltC_CollideShapeResult.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_CollideShapeResult_t * JoltC_CollideShapeResult_new() {
  JoltC_CollideShapeResult_t * cInstance = new JoltC_CollideShapeResult_t();
  CollideShapeResult * cppInstance = new CollideShapeResult();
  cInstance->obj = cppInstance;
  return cInstance;
};

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
  Vec3 resultValue = selfCpp->mContactPointOn1;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CollideShapeResult_mContactPointOn1_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_Vec3_t * mContactPointOn1
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mContactPointOn1 = *reinterpret_cast<Vec3 *>(mContactPointOn1->obj);
};

JoltC_Vec3_t * JoltC_CollideShapeResult_mContactPointOn2_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  Vec3 resultValue = selfCpp->mContactPointOn2;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CollideShapeResult_mContactPointOn2_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_Vec3_t * mContactPointOn2
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mContactPointOn2 = *reinterpret_cast<Vec3 *>(mContactPointOn2->obj);
};

JoltC_Vec3_t * JoltC_CollideShapeResult_mPenetrationAxis_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  Vec3 resultValue = selfCpp->mPenetrationAxis;
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

void JoltC_CollideShapeResult_mPenetrationAxis_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_Vec3_t * mPenetrationAxis
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mPenetrationAxis = *reinterpret_cast<Vec3 *>(mPenetrationAxis->obj);
};

float JoltC_CollideShapeResult_mPenetrationDepth_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  float result = selfCpp->mPenetrationDepth;
  return result;
};

void JoltC_CollideShapeResult_mPenetrationDepth_Set(
  JoltC_CollideShapeResult_t * self,
  float mPenetrationDepth
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mPenetrationDepth = mPenetrationDepth;
};

JoltC_SubShapeID_t * JoltC_CollideShapeResult_mSubShapeID1_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID1;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JoltC_SubShapeID_t *>(result);
};

void JoltC_CollideShapeResult_mSubShapeID1_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID1
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mSubShapeID1 = *reinterpret_cast<SubShapeID *>(mSubShapeID1->obj);
};

JoltC_SubShapeID_t * JoltC_CollideShapeResult_mSubShapeID2_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  SubShapeID resultValue = selfCpp->mSubShapeID2;
  SubShapeID* result = new SubShapeID(resultValue);
  return reinterpret_cast<JoltC_SubShapeID_t *>(result);
};

void JoltC_CollideShapeResult_mSubShapeID2_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_SubShapeID_t * mSubShapeID2
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mSubShapeID2 = *reinterpret_cast<SubShapeID *>(mSubShapeID2->obj);
};

JoltC_BodyID_t * JoltC_CollideShapeResult_mBodyID2_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  BodyID resultValue = selfCpp->mBodyID2;
  BodyID* result = new BodyID(resultValue);
  return reinterpret_cast<JoltC_BodyID_t *>(result);
};

void JoltC_CollideShapeResult_mBodyID2_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_BodyID_t * mBodyID2
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mBodyID2 = *reinterpret_cast<BodyID *>(mBodyID2->obj);
};

JoltC_CollideShapeResultFace_t * JoltC_CollideShapeResult_mShape1Face_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  CollideShapeResultFace resultValue = selfCpp->mShape1Face;
  CollideShapeResultFace* result = new CollideShapeResultFace(resultValue);
  return reinterpret_cast<JoltC_CollideShapeResultFace_t *>(result);
};

void JoltC_CollideShapeResult_mShape1Face_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_CollideShapeResultFace_t * mShape1Face
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mShape1Face = *reinterpret_cast<CollideShapeResultFace *>(mShape1Face->obj);
};

JoltC_CollideShapeResultFace_t * JoltC_CollideShapeResult_mShape2Face_Get(
  JoltC_CollideShapeResult_t * self
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  CollideShapeResultFace resultValue = selfCpp->mShape2Face;
  CollideShapeResultFace* result = new CollideShapeResultFace(resultValue);
  return reinterpret_cast<JoltC_CollideShapeResultFace_t *>(result);
};

void JoltC_CollideShapeResult_mShape2Face_Set(
  JoltC_CollideShapeResult_t * self,
  JoltC_CollideShapeResultFace_t * mShape2Face
) {
  CollideShapeResult * selfCpp = static_cast<CollideShapeResult *>(self->obj);
  selfCpp->mShape2Face = *reinterpret_cast<CollideShapeResultFace *>(mShape2Face->obj);
};

//endregion

#ifdef __cplusplus
}
#endif

