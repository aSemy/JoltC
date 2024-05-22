#include "JoltC/JPC_SphereShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SphereShape_t * JPC_SphereShape_new(
  float inRadius,
  const JPC_PhysicsMaterial_t * inMaterial
) {
  JPC_SphereShape_t * cInstance = new JPC_SphereShape_t();
  SphereShape * cppInstance = new SphereShape(
    inRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

float JPC_SphereShape_GetRadius(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  float result = selfCpp->GetRadius();
  return result;
};

float JPC_SphereShape_GetDensity(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  float result = selfCpp->GetDensity();
  return result;
};

void JPC_SphereShape_SetDensity(
  JPC_SphereShape_t * self,
  float inDensity
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  
  selfCpp->SetDensity(
  inDensity
  );
};

unsigned long JPC_SphereShape_GetRefCount(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_SphereShape_AddRef(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_SphereShape_Release(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_SphereShape_GetType(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_SphereShape_GetSubType(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_SphereShape_MustBeStatic(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_SphereShape_GetLocalBounds(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_SphereShape_GetWorldSpaceBounds(
  JPC_SphereShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_SphereShape_GetCenterOfMass(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_SphereShape_GetUserData(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_SphereShape_SetUserData(
  JPC_SphereShape_t * self,
  unsigned long long int inUserData
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_SphereShape_GetSubShapeIDBitsRecursive(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_SphereShape_GetInnerRadius(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_SphereShape_GetMassProperties(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_SphereShape_GetMaterial(
  JPC_SphereShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_SphereShape_GetSurfaceNormal(
  JPC_SphereShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_SphereShape_GetSubShapeUserData(
  JPC_SphereShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_SphereShape_GetSubShapeTransformedShape(
  JPC_SphereShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
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

float JPC_SphereShape_GetVolume(
  JPC_SphereShape_t * self
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_SphereShape_IsValidScale(
  JPC_SphereShape_t * self,
  const JPC_Vec3_t * inScale
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_SphereShape_ScaleShape(
  JPC_SphereShape_t * self,
  const JPC_Vec3_t * inScale
) {
  SphereShape * selfCpp = static_cast<SphereShape *>(self->obj);
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

