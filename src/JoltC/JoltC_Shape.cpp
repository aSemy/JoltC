#include "JoltC/JPC_Shape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_Shape_GetRefCount(
  JPC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_Shape_AddRef(
  JPC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_Shape_Release(
  JPC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_Shape_GetType(
  JPC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_Shape_GetSubType(
  JPC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_Shape_MustBeStatic(
  JPC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_Shape_GetLocalBounds(
  JPC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_Shape_GetWorldSpaceBounds(
  JPC_Shape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_Shape_GetCenterOfMass(
  JPC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_Shape_GetUserData(
  JPC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_Shape_SetUserData(
  JPC_Shape_t * self,
  unsigned long long int inUserData
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_Shape_GetSubShapeIDBitsRecursive(
  JPC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_Shape_GetInnerRadius(
  JPC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_Shape_GetMassProperties(
  JPC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_Shape_GetMaterial(
  JPC_Shape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_Shape_GetSurfaceNormal(
  JPC_Shape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_Shape_GetSubShapeUserData(
  JPC_Shape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_Shape_GetSubShapeTransformedShape(
  JPC_Shape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
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

float JPC_Shape_GetVolume(
  JPC_Shape_t * self
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_Shape_IsValidScale(
  JPC_Shape_t * self,
  const JPC_Vec3_t * inScale
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_Shape_ScaleShape(
  JPC_Shape_t * self,
  const JPC_Vec3_t * inScale
) {
  Shape * selfCpp = static_cast<Shape *>(self->obj);
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

