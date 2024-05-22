#include "JoltC/JPC_CapsuleShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CapsuleShape_t * JPC_CapsuleShape_new(
  float inHalfHeight,
  float inRadius,
  const JPC_PhysicsMaterial_t * inMaterial
) {
  JPC_CapsuleShape_t * cInstance = new JPC_CapsuleShape_t();
  CapsuleShape * cppInstance = new CapsuleShape(
    inHalfHeight,
    inRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

float JPC_CapsuleShape_GetRadius(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  float result = selfCpp->GetRadius();
  return result;
};

float JPC_CapsuleShape_GetHalfHeightOfCylinder(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  float result = selfCpp->GetHalfHeightOfCylinder();
  return result;
};

float JPC_CapsuleShape_GetDensity(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  float result = selfCpp->GetDensity();
  return result;
};

void JPC_CapsuleShape_SetDensity(
  JPC_CapsuleShape_t * self,
  float inDensity
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  
  selfCpp->SetDensity(
  inDensity
  );
};

unsigned long JPC_CapsuleShape_GetRefCount(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_CapsuleShape_AddRef(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_CapsuleShape_Release(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_CapsuleShape_GetType(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_CapsuleShape_GetSubType(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_CapsuleShape_MustBeStatic(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_CapsuleShape_GetLocalBounds(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_CapsuleShape_GetWorldSpaceBounds(
  JPC_CapsuleShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_CapsuleShape_GetCenterOfMass(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_CapsuleShape_GetUserData(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_CapsuleShape_SetUserData(
  JPC_CapsuleShape_t * self,
  unsigned long long int inUserData
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_CapsuleShape_GetSubShapeIDBitsRecursive(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_CapsuleShape_GetInnerRadius(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_CapsuleShape_GetMassProperties(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_CapsuleShape_GetMaterial(
  JPC_CapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_CapsuleShape_GetSurfaceNormal(
  JPC_CapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_CapsuleShape_GetSubShapeUserData(
  JPC_CapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_CapsuleShape_GetSubShapeTransformedShape(
  JPC_CapsuleShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

float JPC_CapsuleShape_GetVolume(
  JPC_CapsuleShape_t * self
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_CapsuleShape_IsValidScale(
  JPC_CapsuleShape_t * self,
  const JPC_Vec3_t * inScale
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_CapsuleShape_ScaleShape(
  JPC_CapsuleShape_t * self,
  const JPC_Vec3_t * inScale
) {
  CapsuleShape * selfCpp = static_cast<CapsuleShape *>(self->obj);
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

