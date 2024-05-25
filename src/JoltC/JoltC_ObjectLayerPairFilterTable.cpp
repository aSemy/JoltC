#include "JoltC/JoltC_ObjectLayerPairFilterTable.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_ObjectLayerPairFilterTable_t * JoltC_ObjectLayerPairFilterTable_new(
  unsigned long inNumObjectLayers,
  char** outErrMsg
) {
  try {
    JoltC_ObjectLayerPairFilterTable_t * cInstance = new JoltC_ObjectLayerPairFilterTable_t();
    ObjectLayerPairFilterTable * cppInstance = new ObjectLayerPairFilterTable(
      inNumObjectLayers
    );
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

unsigned long JoltC_ObjectLayerPairFilterTable_GetNumObjectLayers(
  JoltC_ObjectLayerPairFilterTable_t * self,
  char** outErrMsg
) {
  try {
    ObjectLayerPairFilterTable * selfCpp = static_cast<ObjectLayerPairFilterTable *>(self->obj);
    unsigned long result = selfCpp->GetNumObjectLayers();
    return result;
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ObjectLayerPairFilterTable_DisableCollision(
  JoltC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2,
  char** outErrMsg
) {
  try {
    ObjectLayerPairFilterTable * selfCpp = static_cast<ObjectLayerPairFilterTable *>(self->obj);
    
    selfCpp->DisableCollision(
    inLayer1,
    inLayer2
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

void JoltC_ObjectLayerPairFilterTable_EnableCollision(
  JoltC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2,
  char** outErrMsg
) {
  try {
    ObjectLayerPairFilterTable * selfCpp = static_cast<ObjectLayerPairFilterTable *>(self->obj);
    
    selfCpp->EnableCollision(
    inLayer1,
    inLayer2
    );
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

bool JoltC_ObjectLayerPairFilterTable_ShouldCollide(
  JoltC_ObjectLayerPairFilterTable_t * self,
  unsigned long inLayer1,
  unsigned long inLayer2,
  char** outErrMsg
) {
  try {
    ObjectLayerPairFilterTable * selfCpp = static_cast<ObjectLayerPairFilterTable *>(self->obj);
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
