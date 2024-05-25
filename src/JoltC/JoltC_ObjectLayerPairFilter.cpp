#include "JoltC/JoltC_ObjectLayerPairFilter.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectLayerPairFilter_t * JoltC_ObjectLayerPairFilter_new(
  char** outErrMsg
) {
  try {
    JoltC_ObjectLayerPairFilter_t * cInstance = new JoltC_ObjectLayerPairFilter_t();
    ObjectLayerPairFilter * cppInstance = new ObjectLayerPairFilter();
    cInstance->obj = cppInstance;
    return cInstance;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region functions

bool JoltC_ObjectLayerPairFilter_ShouldCollide(
  JoltC_ObjectLayerPairFilter_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2,
  char** outErrMsg
) {
  try {
    ObjectLayerPairFilter * selfCpp = static_cast<ObjectLayerPairFilter *>(self->obj);
    bool result = selfCpp->ShouldCollide(
    inLayer1,
    inLayer2
    );
    return result;
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

