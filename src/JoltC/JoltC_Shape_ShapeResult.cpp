#include "JoltC/JoltC_Shape_ShapeResult.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region destructor

void JoltC_Shape_ShapeResult_destroy(
  JoltC_Shape_ShapeResult_t * self
){
  if (self == NULL) return;
  delete static_cast<Shape::ShapeResult *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_Shape_ShapeResult_IsValid(
  JoltC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  return selfCpp->IsValid();
}

bool JoltC_Shape_ShapeResult_HasError(
  JoltC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  return selfCpp->HasError();
}

JoltC_JPHString_t * JoltC_Shape_ShapeResult_GetError(
  JoltC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  const JPHString* resultRef = &selfCpp->GetError();
  JoltC_JPHString_t* result = new JoltC_JPHString_t();
  const void * resultConstPtr = reinterpret_cast<const void*>(resultRef);
  void * resultPtr = const_cast<void*>(resultConstPtr);
  result->obj = resultPtr;
  return result;
}

JoltC_Shape_t * JoltC_Shape_ShapeResult_Get(
  JoltC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  const Shape * resultPtr = selfCpp->Get();
  JoltC_Shape_t * result = new JoltC_Shape_t();
  result->obj = const_cast<void *>(reinterpret_cast<const void *>(resultPtr));
  return result;
}

void JoltC_Shape_ShapeResult_Clear(
  JoltC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  selfCpp->Clear();
}

//endregion


#ifdef __cplusplus
}
#endif
