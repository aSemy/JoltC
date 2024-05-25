#include "JoltC/JPC_SoftBodyShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

const unsigned long JPC_SoftBodyShape_GetSubShapeIDBits(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  const unsigned long result = selfCpp->GetSubShapeIDBits();
  return result;
};

const unsigned long JPC_SoftBodyShape_GetFaceIndex(
  JPC_SoftBodyShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  const unsigned long result = selfCpp->GetFaceIndex(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

unsigned long JPC_SoftBodyShape_GetRefCount(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_SoftBodyShape_AddRef(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_SoftBodyShape_Release(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_SoftBodyShape_GetType(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_SoftBodyShape_GetSubType(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_SoftBodyShape_MustBeStatic(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_SoftBodyShape_GetLocalBounds(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_SoftBodyShape_GetWorldSpaceBounds(
  JPC_SoftBodyShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_SoftBodyShape_GetCenterOfMass(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_SoftBodyShape_GetUserData(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_SoftBodyShape_SetUserData(
  JPC_SoftBodyShape_t * self,
  unsigned long long int inUserData
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_SoftBodyShape_GetSubShapeIDBitsRecursive(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_SoftBodyShape_GetInnerRadius(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_SoftBodyShape_GetMassProperties(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_SoftBodyShape_GetMaterial(
  JPC_SoftBodyShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_SoftBodyShape_GetSurfaceNormal(
  JPC_SoftBodyShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_SoftBodyShape_GetSubShapeUserData(
  JPC_SoftBodyShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_SoftBodyShape_GetSubShapeTransformedShape(
  JPC_SoftBodyShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
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

float JPC_SoftBodyShape_GetVolume(
  JPC_SoftBodyShape_t * self
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_SoftBodyShape_IsValidScale(
  JPC_SoftBodyShape_t * self,
  const JPC_Vec3_t * inScale
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_SoftBodyShape_ScaleShape(
  JPC_SoftBodyShape_t * self,
  const JPC_Vec3_t * inScale
) {
  SoftBodyShape * selfCpp = static_cast<SoftBodyShape *>(self->obj);
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

