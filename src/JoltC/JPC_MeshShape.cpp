#include "JoltC/JPC_MeshShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JPC_MeshShape_GetRefCount(
  JPC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_MeshShape_AddRef(
  JPC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_MeshShape_Release(
  JPC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_MeshShape_GetType(
  JPC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_MeshShape_GetSubType(
  JPC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_MeshShape_MustBeStatic(
  JPC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_MeshShape_GetLocalBounds(
  JPC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_MeshShape_GetWorldSpaceBounds(
  JPC_MeshShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_MeshShape_GetCenterOfMass(
  JPC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_MeshShape_GetUserData(
  JPC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_MeshShape_SetUserData(
  JPC_MeshShape_t * self,
  unsigned long long int inUserData
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_MeshShape_GetSubShapeIDBitsRecursive(
  JPC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_MeshShape_GetInnerRadius(
  JPC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_MeshShape_GetMassProperties(
  JPC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_MeshShape_GetMaterial(
  JPC_MeshShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_MeshShape_GetSurfaceNormal(
  JPC_MeshShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_MeshShape_GetSubShapeUserData(
  JPC_MeshShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_MeshShape_GetSubShapeTransformedShape(
  JPC_MeshShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
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

float JPC_MeshShape_GetVolume(
  JPC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_MeshShape_IsValidScale(
  JPC_MeshShape_t * self,
  const JPC_Vec3_t * inScale
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_MeshShape_ScaleShape(
  JPC_MeshShape_t * self,
  const JPC_Vec3_t * inScale
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
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

