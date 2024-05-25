#include "JoltC/JoltC_Shape_ShapeResult.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region functions

bool JoltC_Shape_ShapeResult_IsValid(
  JoltC_Shape_ShapeResult_t * self,
  char** outErrMsg
) {
  try {
    Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
    bool result = selfCpp->IsValid();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_Shape_ShapeResult_HasError(
  JoltC_Shape_ShapeResult_t * self,
  char** outErrMsg
) {
  try {
    Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
    bool result = selfCpp->HasError();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

const JoltC_JPHString_t * JoltC_Shape_ShapeResult_GetError(
  JoltC_Shape_ShapeResult_t * self,
  char** outErrMsg
) {
  try {
    Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
    const JPHString& resultRef = selfCpp->GetError();
    const JPHString * result = &resultRef;
    return reinterpret_cast<const JoltC_JPHString_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

JoltC_Shape_t * JoltC_Shape_ShapeResult_Get(
  JoltC_Shape_ShapeResult_t * self,
  char** outErrMsg
) {
  try {
    Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
    Shape * result = selfCpp->Get();
    return reinterpret_cast<JoltC_Shape_t *>(result);
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_Shape_ShapeResult_Clear(
  JoltC_Shape_ShapeResult_t * self,
  char** outErrMsg
) {
  try {
    Shape::ShapeResult * selfCpp = static_cast<Shape::ShapeResult *>(self->obj);
    
    selfCpp->Clear();
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion functions

#ifdef __cplusplus
}
#endif

