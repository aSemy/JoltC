#include "JoltC/JPC_ScaledShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_ScaledShape_t * JPC_ScaledShape_new(
  JPC_Shape_t * inShape,
  const JPC_Vec3_t * inScale
) {
  JPC_ScaledShape_t * cInstance = new JPC_ScaledShape_t();
  ScaledShape * cppInstance = new ScaledShape(
    reinterpret_cast<Shape *>(inShape->obj),
    *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

JPC_Vec3_t * JPC_ScaledShape_GetScale(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetScale();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

const JPC_Shape_t * JPC_ScaledShape_GetInnerShape(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  const Shape * result = selfCpp->GetInnerShape();
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

unsigned long JPC_ScaledShape_GetRefCount(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_ScaledShape_AddRef(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_ScaledShape_Release(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_ScaledShape_GetType(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_ScaledShape_GetSubType(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_ScaledShape_MustBeStatic(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_ScaledShape_GetLocalBounds(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_ScaledShape_GetWorldSpaceBounds(
  JPC_ScaledShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_ScaledShape_GetCenterOfMass(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_ScaledShape_GetUserData(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_ScaledShape_SetUserData(
  JPC_ScaledShape_t * self,
  unsigned long long int inUserData
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_ScaledShape_GetSubShapeIDBitsRecursive(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_ScaledShape_GetInnerRadius(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_ScaledShape_GetMassProperties(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_ScaledShape_GetMaterial(
  JPC_ScaledShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_ScaledShape_GetSurfaceNormal(
  JPC_ScaledShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_ScaledShape_GetSubShapeUserData(
  JPC_ScaledShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_ScaledShape_GetSubShapeTransformedShape(
  JPC_ScaledShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

float JPC_ScaledShape_GetVolume(
  JPC_ScaledShape_t * self
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_ScaledShape_IsValidScale(
  JPC_ScaledShape_t * self,
  const JPC_Vec3_t * inScale
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_ScaledShape_ScaleShape(
  JPC_ScaledShape_t * self,
  const JPC_Vec3_t * inScale
) {
  ScaledShape * selfCpp = static_cast<ScaledShape *>(self->obj);
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

