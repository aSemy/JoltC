#include "JoltC/JoltC_MeshShape.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

unsigned long JoltC_MeshShape_GetRefCount(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JoltC_MeshShape_AddRef(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JoltC_MeshShape_Release(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  
  selfCpp->Release();
};

JoltC_EShapeType JoltC_MeshShape_GetType(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
};

JoltC_EShapeSubType JoltC_MeshShape_GetSubType(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
};

bool JoltC_MeshShape_MustBeStatic(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JoltC_AABox_t * JoltC_MeshShape_GetLocalBounds(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_AABox_t * JoltC_MeshShape_GetWorldSpaceBounds(
  JoltC_MeshShape_t * self,
  const JoltC_Mat44_t * inCenterOfMassTransform,
  const JoltC_Vec3_t * inScale
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JoltC_AABox_t *>(result);
};

JoltC_Vec3_t * JoltC_MeshShape_GetCenterOfMass(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_MeshShape_GetUserData(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JoltC_MeshShape_SetUserData(
  JoltC_MeshShape_t * self,
  unsigned long long int inUserData
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JoltC_MeshShape_GetSubShapeIDBitsRecursive(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JoltC_MeshShape_GetInnerRadius(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JoltC_MassProperties_t * JoltC_MeshShape_GetMassProperties(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JoltC_MassProperties_t *>(result);
};

const JoltC_PhysicsMaterial_t * JoltC_MeshShape_GetMaterial(
  JoltC_MeshShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JoltC_PhysicsMaterial_t *>(result);
};

JoltC_Vec3_t * JoltC_MeshShape_GetSurfaceNormal(
  JoltC_MeshShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inLocalSurfacePosition
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JoltC_Vec3_t *>(result);
};

unsigned long long int JoltC_MeshShape_GetSubShapeUserData(
  JoltC_MeshShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JoltC_TransformedShape_t * JoltC_MeshShape_GetSubShapeTransformedShape(
  JoltC_MeshShape_t * self,
  const JoltC_SubShapeID_t * inSubShapeID,
  const JoltC_Vec3_t * inPositionCOM,
  const JoltC_Quat_t * inRotation,
  const JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
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
  return reinterpret_cast<JoltC_TransformedShape_t *>(result);
};

float JoltC_MeshShape_GetVolume(
  JoltC_MeshShape_t * self
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JoltC_MeshShape_IsValidScale(
  JoltC_MeshShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JoltC_Shape_ShapeResult_t * JoltC_MeshShape_ScaleShape(
  JoltC_MeshShape_t * self,
  const JoltC_Vec3_t * inScale
) {
  MeshShape * selfCpp = static_cast<MeshShape *>(self->obj);
  Shape::ShapeResult resultValue = selfCpp->ScaleShape(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  Shape::ShapeResult* result = new Shape::ShapeResult(resultValue);
  return reinterpret_cast<JoltC_Shape_ShapeResult_t *>(result);
};

//endregion

#ifdef __cplusplus
}
#endif

