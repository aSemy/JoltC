#include "JoltC/JoltC_Shape_ShapeResult.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_Shape_ShapeResult_IsValid(
  JoltC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  bool result = selfCpp->IsValid();
  return result;
};

bool JoltC_Shape_ShapeResult_HasError(
  JoltC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  bool result = selfCpp->HasError();
  return result;
};

const JoltC_JPHString_t * JoltC_Shape_ShapeResult_GetError(
  JoltC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  const JPHString& resultRef = selfCpp->GetError();
  const JPHString * result = &resultRef;
  return reinterpret_cast<const JoltC_JPHString_t *>(result);
};

JoltC_Shape_t * JoltC_Shape_ShapeResult_Get(
  JoltC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  Shape * result = selfCpp->Get();
  return reinterpret_cast<JoltC_Shape_t *>(result);
};

void JoltC_Shape_ShapeResult_Clear(
  JoltC_Shape_ShapeResult_t * self
) {
  Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
  
  selfCpp->Clear();
};

//endregion

#ifdef __cplusplus
}
#endif

