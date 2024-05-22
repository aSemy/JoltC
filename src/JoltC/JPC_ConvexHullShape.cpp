#include "JoltC/JPC_ConvexHullShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JPC_ConvexHullShape_GetDensity(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  float result = selfCpp->GetDensity();
  return result;
};

void JPC_ConvexHullShape_SetDensity(
  JPC_ConvexHullShape_t * self,
  float inDensity
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  
  selfCpp->SetDensity(
  inDensity
  );
};

unsigned long JPC_ConvexHullShape_GetRefCount(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_ConvexHullShape_AddRef(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_ConvexHullShape_Release(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_ConvexHullShape_GetType(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_ConvexHullShape_GetSubType(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_ConvexHullShape_MustBeStatic(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_ConvexHullShape_GetLocalBounds(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_ConvexHullShape_GetWorldSpaceBounds(
  JPC_ConvexHullShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_ConvexHullShape_GetCenterOfMass(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_ConvexHullShape_GetUserData(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_ConvexHullShape_SetUserData(
  JPC_ConvexHullShape_t * self,
  unsigned long long int inUserData
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_ConvexHullShape_GetSubShapeIDBitsRecursive(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_ConvexHullShape_GetInnerRadius(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_ConvexHullShape_GetMassProperties(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_ConvexHullShape_GetMaterial(
  JPC_ConvexHullShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_ConvexHullShape_GetSurfaceNormal(
  JPC_ConvexHullShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_ConvexHullShape_GetSubShapeUserData(
  JPC_ConvexHullShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_ConvexHullShape_GetSubShapeTransformedShape(
  JPC_ConvexHullShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  TransformedShape resultValue = selfCpp->GetSubShapeTransformedShape(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inPositionCOM->obj),
  *reinterpret_cast<Quat *>(inRotation->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj),
  *reinterpret_cast<SubShapeID *>(outRemainder->obj)
  );
  TransformedShape* result = new TransformedShape(resultValue);
  return reinterpret_cast<JPC_TransformedShape_t *>(result);
};

float JPC_ConvexHullShape_GetVolume(
  JPC_ConvexHullShape_t * self
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_ConvexHullShape_IsValidScale(
  JPC_ConvexHullShape_t * self,
  const JPC_Vec3_t * inScale
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_ConvexHullShape_ScaleShape(
  JPC_ConvexHullShape_t * self,
  const JPC_Vec3_t * inScale
) {
  ConvexHullShape * selfCpp = static_cast<ConvexHullShape *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->ScaleShape(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JPC_Shape_ShapeResult_t *>(result);
};

//endregion functions

#ifdef __cplusplus
}
#endif

