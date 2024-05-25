#include "JoltC/JPC_ConvexShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

float JPC_ConvexShape_GetDensity(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  float result = selfCpp->GetDensity();
  return result;
};

void JPC_ConvexShape_SetDensity(
  JPC_ConvexShape_t * self,
  float inDensity
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  
  selfCpp->SetDensity(
  inDensity
  );
};

unsigned long JPC_ConvexShape_GetRefCount(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_ConvexShape_AddRef(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_ConvexShape_Release(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_ConvexShape_GetType(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_ConvexShape_GetSubType(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_ConvexShape_MustBeStatic(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_ConvexShape_GetLocalBounds(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_ConvexShape_GetWorldSpaceBounds(
  JPC_ConvexShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_ConvexShape_GetCenterOfMass(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_ConvexShape_GetUserData(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_ConvexShape_SetUserData(
  JPC_ConvexShape_t * self,
  unsigned long long int inUserData
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_ConvexShape_GetSubShapeIDBitsRecursive(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_ConvexShape_GetInnerRadius(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_ConvexShape_GetMassProperties(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_ConvexShape_GetMaterial(
  JPC_ConvexShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_ConvexShape_GetSurfaceNormal(
  JPC_ConvexShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_ConvexShape_GetSubShapeUserData(
  JPC_ConvexShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_ConvexShape_GetSubShapeTransformedShape(
  JPC_ConvexShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
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

float JPC_ConvexShape_GetVolume(
  JPC_ConvexShape_t * self
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_ConvexShape_IsValidScale(
  JPC_ConvexShape_t * self,
  const JPC_Vec3_t * inScale
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_ConvexShape_ScaleShape(
  JPC_ConvexShape_t * self,
  const JPC_Vec3_t * inScale
) {
  ConvexShape * selfCpp = static_cast<ConvexShape *>(self->obj);
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

