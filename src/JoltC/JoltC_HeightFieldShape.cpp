#include "JoltC/JoltC_HeightFieldShape.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region functions

long JoltC_HeightFieldShape_GetSampleCount(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  return selfCpp->GetSampleCount();
}

long JoltC_HeightFieldShape_GetBlockSize(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  return selfCpp->GetBlockSize();
}

JoltC_Vec3_t * JoltC_HeightFieldShape_GetPosition(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetPosition(
    inX,
    inY
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

bool JoltC_HeightFieldShape_IsNoCollision(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  return selfCpp->IsNoCollision(
    inX,
    inY
  );
}

float JoltC_HeightFieldShape_GetMinHeightValue(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  return selfCpp->GetMinHeightValue();
}

float JoltC_HeightFieldShape_GetMaxHeightValue(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  return selfCpp->GetMaxHeightValue();
}

void JoltC_HeightFieldShape_GetHeights(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_FloatMemRef_t * outHeights,
  long inHeightsStride
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  FloatMemRef * outHeightsCpp = static_cast<FloatMemRef *>(outHeights->obj);
  selfCpp->GetHeights(
    inX,
    inY,
    inSizeX,
    inSizeY,
    outHeightsCpp,
    inHeightsStride
  );
}

void JoltC_HeightFieldShape_SetHeights(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_FloatMemRef_t * inHeights,
  long inHeightsStride,
  JoltC_TempAllocator_t * inAllocator,
  float inActiveEdgeCosThresholdAngle
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  FloatMemRef * inHeightsCpp = static_cast<FloatMemRef *>(inHeights->obj);
  TempAllocator * inAllocatorCpp = static_cast<TempAllocator *>(inAllocator->obj);
  selfCpp->SetHeights(
    inX,
    inY,
    inSizeX,
    inSizeY,
    inHeightsCpp,
    inHeightsStride,
    *inAllocatorCpp,
    inActiveEdgeCosThresholdAngle
  );
}

void JoltC_HeightFieldShape_GetMaterials(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_Uint8MemRef_t * outMaterials,
  long inMaterialsStride
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  Uint8MemRef * outMaterialsCpp = static_cast<Uint8MemRef *>(outMaterials->obj);
  selfCpp->GetMaterials(
    inX,
    inY,
    inSizeX,
    inSizeY,
    outMaterialsCpp,
    inMaterialsStride
  );
}

bool JoltC_HeightFieldShape_SetMaterials(
  JoltC_HeightFieldShape_t * self,
  long inX,
  long inY,
  long inSizeX,
  long inSizeY,
  JoltC_Uint8MemRef_t * inMaterials,
  long inMaterialsStride,
  JoltC_PhysicsMaterialList_t * inMaterialList,
  JoltC_TempAllocator_t * inAllocator
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  Uint8MemRef * inMaterialsCpp = static_cast<Uint8MemRef *>(inMaterials->obj);
  PhysicsMaterialList * inMaterialListCpp = static_cast<PhysicsMaterialList *>(inMaterialList->obj);
  TempAllocator * inAllocatorCpp = static_cast<TempAllocator *>(inAllocator->obj);
  return selfCpp->SetMaterials(
    inX,
    inY,
    inSizeX,
    inSizeY,
    inMaterialsCpp,
    inMaterialsStride,
    inMaterialListCpp,
    *inAllocatorCpp
  );
}

unsigned long JoltC_HeightFieldShape_GetRefCount(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  return selfCpp->GetRefCount();
}

void JoltC_HeightFieldShape_AddRef(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  selfCpp->AddRef();
}

void JoltC_HeightFieldShape_Release(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  selfCpp->Release();
}

JoltC_EShapeType JoltC_HeightFieldShape_GetType(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  EShapeType result = selfCpp->GetType();
  return static_cast<JoltC_EShapeType>(static_cast<int>(result));
}

JoltC_EShapeSubType JoltC_HeightFieldShape_GetSubType(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  EShapeSubType result = selfCpp->GetSubType();
  return static_cast<JoltC_EShapeSubType>(static_cast<int>(result));
}

bool JoltC_HeightFieldShape_MustBeStatic(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  return selfCpp->MustBeStatic();
}

JoltC_AABox_t * JoltC_HeightFieldShape_GetLocalBounds(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetLocalBounds();
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_AABox_t * JoltC_HeightFieldShape_GetWorldSpaceBounds(
  JoltC_HeightFieldShape_t * self,
  JoltC_Mat44_t * inCenterOfMassTransform,
  JoltC_Vec3_t * inScale
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const Mat44 * inCenterOfMassTransformCpp = static_cast<const Mat44 *>(inCenterOfMassTransform->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  AABox * resultPtr = new AABox();
  *resultPtr = selfCpp->GetWorldSpaceBounds(
    *inCenterOfMassTransformCpp,
    *inScaleCpp
  );
  JoltC_AABox_t * result = new JoltC_AABox_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_Vec3_t * JoltC_HeightFieldShape_GetCenterOfMass(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetCenterOfMass();
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_HeightFieldShape_GetUserData(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  return selfCpp->GetUserData();
}

void JoltC_HeightFieldShape_SetUserData(
  JoltC_HeightFieldShape_t * self,
  unsigned long long int inUserData
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  selfCpp->SetUserData(
    inUserData
  );
}

unsigned long JoltC_HeightFieldShape_GetSubShapeIDBitsRecursive(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  return selfCpp->GetSubShapeIDBitsRecursive();
}

float JoltC_HeightFieldShape_GetInnerRadius(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  return selfCpp->GetInnerRadius();
}

JoltC_MassProperties_t * JoltC_HeightFieldShape_GetMassProperties(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  MassProperties * resultPtr = new MassProperties();
  *resultPtr = selfCpp->GetMassProperties();
  JoltC_MassProperties_t * result = new JoltC_MassProperties_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

JoltC_PhysicsMaterial_t * JoltC_HeightFieldShape_GetMaterial(
  JoltC_HeightFieldShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    *inSubShapeIDCpp
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

JoltC_Vec3_t * JoltC_HeightFieldShape_GetSurfaceNormal(
  JoltC_HeightFieldShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inLocalSurfacePosition
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const Vec3 * inLocalSurfacePositionCpp = static_cast<const Vec3 *>(inLocalSurfacePosition->obj);
  Vec3 * resultPtr = new Vec3();
  *resultPtr = selfCpp->GetSurfaceNormal(
    *inSubShapeIDCpp,
    *inLocalSurfacePositionCpp
  );
  JoltC_Vec3_t * result = new JoltC_Vec3_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

unsigned long long int JoltC_HeightFieldShape_GetSubShapeUserData(
  JoltC_HeightFieldShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  return selfCpp->GetSubShapeUserData(
    *inSubShapeIDCpp
  );
}

JoltC_TransformedShape_t * JoltC_HeightFieldShape_GetSubShapeTransformedShape(
  JoltC_HeightFieldShape_t * self,
  JoltC_SubShapeID_t * inSubShapeID,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale,
  JoltC_SubShapeID_t * outRemainder
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const SubShapeID * inSubShapeIDCpp = static_cast<const SubShapeID *>(inSubShapeID->obj);
  const Vec3 * inPositionCOMCpp = static_cast<const Vec3 *>(inPositionCOM->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  SubShapeID * outRemainderCpp = static_cast<SubShapeID *>(outRemainder->obj);
  TransformedShape * resultPtr = new TransformedShape();
  *resultPtr = selfCpp->GetSubShapeTransformedShape(
    *inSubShapeIDCpp,
    *inPositionCOMCpp,
    *inRotationCpp,
    *inScaleCpp,
    *outRemainderCpp
  );
  JoltC_TransformedShape_t * result = new JoltC_TransformedShape_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

float JoltC_HeightFieldShape_GetVolume(
  JoltC_HeightFieldShape_t * self
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  return selfCpp->GetVolume();
}

bool JoltC_HeightFieldShape_IsValidScale(
  JoltC_HeightFieldShape_t * self,
  JoltC_Vec3_t * inScale
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  return selfCpp->IsValidScale(
    *inScaleCpp
  );
}

JoltC_Shape_ShapeResult_t * JoltC_HeightFieldShape_ScaleShape(
  JoltC_HeightFieldShape_t * self,
  JoltC_Vec3_t * inScale
) {
  HeightFieldShape * selfCpp = static_cast<HeightFieldShape *>(self->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  Shape::ShapeResult * resultPtr = new Shape::ShapeResult();
  *resultPtr = selfCpp->ScaleShape(
    *inScaleCpp
  );
  JoltC_Shape_ShapeResult_t * result = new JoltC_Shape_ShapeResult_t();
  result->obj = reinterpret_cast<void *>(resultPtr);
  return result;
}

//endregion

#ifdef __cplusplus
}
#endif

