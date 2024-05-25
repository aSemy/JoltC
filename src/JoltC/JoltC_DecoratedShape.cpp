#include "JoltC/JPC_DecoratedShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const JPC_Shape_t * JPC_DecoratedShape_GetInnerShape(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  const Shape * result = selfCpp->GetInnerShape();
  return reinterpret_cast<const JPC_Shape_t *>(result);
};

unsigned long JPC_DecoratedShape_GetRefCount(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_DecoratedShape_AddRef(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_DecoratedShape_Release(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_DecoratedShape_GetType(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_DecoratedShape_GetSubType(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_DecoratedShape_MustBeStatic(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_DecoratedShape_GetLocalBounds(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_DecoratedShape_GetWorldSpaceBounds(
  JPC_DecoratedShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_DecoratedShape_GetCenterOfMass(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_DecoratedShape_GetUserData(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_DecoratedShape_SetUserData(
  JPC_DecoratedShape_t * self,
  unsigned long long int inUserData
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_DecoratedShape_GetSubShapeIDBitsRecursive(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_DecoratedShape_GetInnerRadius(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_DecoratedShape_GetMassProperties(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_DecoratedShape_GetMaterial(
  JPC_DecoratedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_DecoratedShape_GetSurfaceNormal(
  JPC_DecoratedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_DecoratedShape_GetSubShapeUserData(
  JPC_DecoratedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_DecoratedShape_GetSubShapeTransformedShape(
  JPC_DecoratedShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
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

float JPC_DecoratedShape_GetVolume(
  JPC_DecoratedShape_t * self
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_DecoratedShape_IsValidScale(
  JPC_DecoratedShape_t * self,
  const JPC_Vec3_t * inScale
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_DecoratedShape_ScaleShape(
  JPC_DecoratedShape_t * self,
  const JPC_Vec3_t * inScale
) {
  DecoratedShape * selfCpp = static_cast<DecoratedShape *>(self->obj);
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

