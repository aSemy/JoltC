#include "JoltC/JPC_CylinderShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_CylinderShape_t * JPC_CylinderShape_new(
  float inHalfHeight,
  float inRadius,
  float inConvexRadius,
  const JPC_PhysicsMaterial_t * inMaterial
) {
  JPC_CylinderShape_t * cInstance = new JPC_CylinderShape_t();
  CylinderShape * cppInstance = new CylinderShape(
    inHalfHeight,
    inRadius,
    inConvexRadius,
    reinterpret_cast<PhysicsMaterial *>(inMaterial->obj)
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

float JPC_CylinderShape_GetRadius(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  float result = selfCpp->GetRadius();
  return result;
};

float JPC_CylinderShape_GetHalfHeight(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  float result = selfCpp->GetHalfHeight();
  return result;
};

float JPC_CylinderShape_GetDensity(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  float result = selfCpp->GetDensity();
  return result;
};

void JPC_CylinderShape_SetDensity(
  JPC_CylinderShape_t * self,
  float inDensity
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  
  selfCpp->SetDensity(
  inDensity
  );
};

unsigned long JPC_CylinderShape_GetRefCount(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  unsigned long result = selfCpp->GetRefCount();
  return result;
};

void JPC_CylinderShape_AddRef(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  
  selfCpp->AddRef();
};

void JPC_CylinderShape_Release(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  
  selfCpp->Release();
};

JPC_EShapeType JPC_CylinderShape_GetType(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JPC_EShapeType>(static_cast<int>(result));
};

JPC_EShapeSubType JPC_CylinderShape_GetSubType(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JPC_EShapeSubType>(static_cast<int>(result));
};

bool JPC_CylinderShape_MustBeStatic(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  bool result = selfCpp->MustBeStatic();
  return result;
};

JPC_AABox_t * JPC_CylinderShape_GetLocalBounds(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  AABox resultValue = selfCpp->GetLocalBounds();
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_AABox_t * JPC_CylinderShape_GetWorldSpaceBounds(
  JPC_CylinderShape_t * self,
  const JPC_Mat44_t * inCenterOfMassTransform,
  const JPC_Vec3_t * inScale
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  AABox resultValue = selfCpp->GetWorldSpaceBounds(
  *reinterpret_cast<Mat44 *>(inCenterOfMassTransform->obj),
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  AABox* result = new AABox(resultValue);
  return reinterpret_cast<JPC_AABox_t *>(result);
};

JPC_Vec3_t * JPC_CylinderShape_GetCenterOfMass(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetCenterOfMass();
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_CylinderShape_GetUserData(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  unsigned long long int result = selfCpp->GetUserData();
  return result;
};

void JPC_CylinderShape_SetUserData(
  JPC_CylinderShape_t * self,
  unsigned long long int inUserData
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  
  selfCpp->SetUserData(
  inUserData
  );
};

unsigned long JPC_CylinderShape_GetSubShapeIDBitsRecursive(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  unsigned long result = selfCpp->GetSubShapeIDBitsRecursive();
  return result;
};

float JPC_CylinderShape_GetInnerRadius(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  float result = selfCpp->GetInnerRadius();
  return result;
};

JPC_MassProperties_t * JPC_CylinderShape_GetMassProperties(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  MassProperties resultValue = selfCpp->GetMassProperties();
  MassProperties* result = new MassProperties(resultValue);
  return reinterpret_cast<JPC_MassProperties_t *>(result);
};

const JPC_PhysicsMaterial_t * JPC_CylinderShape_GetMaterial(
  JPC_CylinderShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  const PhysicsMaterial * result = selfCpp->GetMaterial(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return reinterpret_cast<const JPC_PhysicsMaterial_t *>(result);
};

JPC_Vec3_t * JPC_CylinderShape_GetSurfaceNormal(
  JPC_CylinderShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inLocalSurfacePosition
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  Vec3 resultValue = selfCpp->GetSurfaceNormal(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj),
  *reinterpret_cast<Vec3 *>(inLocalSurfacePosition->obj)
  );
  Vec3* result = new Vec3(resultValue);
  return reinterpret_cast<JPC_Vec3_t *>(result);
};

unsigned long long int JPC_CylinderShape_GetSubShapeUserData(
  JPC_CylinderShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  unsigned long long int result = selfCpp->GetSubShapeUserData(
  *reinterpret_cast<SubShapeID *>(inSubShapeID->obj)
  );
  return result;
};

JPC_TransformedShape_t * JPC_CylinderShape_GetSubShapeTransformedShape(
  JPC_CylinderShape_t * self,
  const JPC_SubShapeID_t * inSubShapeID,
  const JPC_Vec3_t * inPositionCOM,
  const JPC_Quat_t * inRotation,
  const JPC_Vec3_t * inScale,
  JPC_SubShapeID_t * outRemainder
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

float JPC_CylinderShape_GetVolume(
  JPC_CylinderShape_t * self
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  float result = selfCpp->GetVolume();
  return result;
};

bool JPC_CylinderShape_IsValidScale(
  JPC_CylinderShape_t * self,
  const JPC_Vec3_t * inScale
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
  bool result = selfCpp->IsValidScale(
  *reinterpret_cast<Vec3 *>(inScale->obj)
  );
  return result;
};

JPC_Shape_ShapeResult_t * JPC_CylinderShape_ScaleShape(
  JPC_CylinderShape_t * self,
  const JPC_Vec3_t * inScale
) {
  CylinderShape * selfCpp = static_cast<CylinderShape *>(self->obj);
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

