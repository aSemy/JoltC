#include "JoltC/JoltC_ObjectLayerPairFilterMask.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectLayerPairFilterMask_t * JoltC_ObjectLayerPairFilterMask_new(
  char** outErrMsg
) {
  try {
    JoltC_ObjectLayerPairFilterMask_t * cInstance = new JoltC_ObjectLayerPairFilterMask_t();
    ObjectLayerPairFilterMask * cppInstance = new ObjectLayerPairFilterMask();
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

unsigned long JoltC_ObjectLayerPairFilterMask_sGetObjectLayer(
  unsigned long inGroup,
  unsigned long inMask,
  char** outErrMsg
) {
  try {
    unsigned long result = ObjectLayerPairFilterMask::sGetObjectLayer(
    inGroup,
    inMask
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

unsigned long JoltC_ObjectLayerPairFilterMask_sGetGroup(
  unsigned long inObjectLayer,
  char** outErrMsg
) {
  try {
    unsigned long result = ObjectLayerPairFilterMask::sGetGroup(
    inObjectLayer
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

unsigned long JoltC_ObjectLayerPairFilterMask_sGetMask(
  unsigned long inObjectLayer,
  char** outErrMsg
) {
  try {
    unsigned long result = ObjectLayerPairFilterMask::sGetMask(
    inObjectLayer
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

bool JoltC_ObjectLayerPairFilterMask_ShouldCollide(
  JoltC_ObjectLayerPairFilterMask_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2,
  char** outErrMsg
) {
  try {
    ObjectLayerPairFilterMask * selfCpp = static_cast<ObjectLayerPairFilterMask *>(self->obj);
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

