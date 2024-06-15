#include "JoltC/JoltC_ShapeGetTriangles.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `ShapeGetTriangles` instance.
 */
JoltC_ShapeGetTriangles_t * JoltC_ShapeGetTriangles_new(
  JoltC_Shape_t * inShape,
  JoltC_AABox_t * inBox,
  JoltC_Vec3_t * inPositionCOM,
  JoltC_Quat_t * inRotation,
  JoltC_Vec3_t * inScale
) {
  Shape * inShapeCpp = static_cast<Shape *>(inShape->obj);
  const AABox * inBoxCpp = static_cast<const AABox *>(inBox->obj);
  const Vec3 * inPositionCOMCpp = static_cast<const Vec3 *>(inPositionCOM->obj);
  const Quat * inRotationCpp = static_cast<const Quat *>(inRotation->obj);
  const Vec3 * inScaleCpp = static_cast<const Vec3 *>(inScale->obj);
  JoltC_ShapeGetTriangles_t * cInstance = new JoltC_ShapeGetTriangles_t();
  ShapeGetTriangles * cppInstance = new ShapeGetTriangles(
    inShapeCpp,
    *inBoxCpp,
    *inPositionCOMCpp,
    *inRotationCpp,
    *inScaleCpp
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_ShapeGetTriangles_destroy(
  JoltC_ShapeGetTriangles_t * self
){
  if (self == NULL) return;
  delete static_cast<ShapeGetTriangles *>(self->obj);
  free(self);
}

//endregion
//region functions

long JoltC_ShapeGetTriangles_GetNumTriangles(
  JoltC_ShapeGetTriangles_t * self
) {
  ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
  return selfCpp->GetNumTriangles();
}

long JoltC_ShapeGetTriangles_GetVerticesSize(
  JoltC_ShapeGetTriangles_t * self
) {
  ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
  return selfCpp->GetVerticesSize();
}

const void* JoltC_ShapeGetTriangles_GetVerticesData(
  JoltC_ShapeGetTriangles_t * self
) {
  ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
  return selfCpp->GetVerticesData();
}

JoltC_PhysicsMaterial_t * JoltC_ShapeGetTriangles_GetMaterial(
  JoltC_ShapeGetTriangles_t * self,
  long inTriangle
) {
  ShapeGetTriangles * selfCpp = static_cast<ShapeGetTriangles *>(self->obj);
  const PhysicsMaterial * resultPtr = selfCpp->GetMaterial(
    inTriangle
  );
  JoltC_PhysicsMaterial_t * result = new JoltC_PhysicsMaterial_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

//endregion


#ifdef __cplusplus
}
#endif
