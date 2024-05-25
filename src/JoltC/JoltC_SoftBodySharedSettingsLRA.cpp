#include "JoltC/JoltC_SoftBodySharedSettingsLRA.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsLRA_t * JoltC_SoftBodySharedSettingsLRA_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  float inMaxDistance,
  char** outErrMsg
) {
  try {
    JoltC_SoftBodySharedSettingsLRA_t * cInstance = new JoltC_SoftBodySharedSettingsLRA_t();
    SoftBodySharedSettingsLRA * cppInstance = new SoftBodySharedSettingsLRA(
      inVertex1,
      inVertex2,
      inMaxDistance
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

//region properties

size_t JoltC_SoftBodySharedSettingsLRA_mVertex_Get(
  JoltC_SoftBodySharedSettingsLRA_t * self,
  unsigned long * outValue,
  char** outErrMsg
) {
  SoftBodySharedSettingsLRA * selfCpp = static_cast<SoftBodySharedSettingsLRA *>(self->obj);
  size_t resultSize = std::size(selfCpp->mVertex);
  // TODO get result array...
  return resultSize;
};

void JoltC_SoftBodySharedSettingsLRA_mVertex_Set(
  JoltC_SoftBodySharedSettingsLRA_t * self,
  unsigned long * mVertex,
  size_t mVertexSize,
  char** outErrMsg
) {
  SoftBodySharedSettingsLRA * selfCpp = static_cast<SoftBodySharedSettingsLRA *>(self->obj);
  for (size_t i = 0; i < mVertexSize; i++) {
    selfCpp->mVertex[i] = mVertex[i];
  };
};

float JoltC_SoftBodySharedSettingsLRA_mMaxDistance_Get(
  JoltC_SoftBodySharedSettingsLRA_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsLRA * selfCpp = static_cast<SoftBodySharedSettingsLRA *>(self->obj);
  float result = selfCpp->mMaxDistance;
  return result;
};

void JoltC_SoftBodySharedSettingsLRA_mMaxDistance_Set(
  JoltC_SoftBodySharedSettingsLRA_t * self,
  float mMaxDistance,
  char** outErrMsg
) {
  SoftBodySharedSettingsLRA * selfCpp = static_cast<SoftBodySharedSettingsLRA *>(self->obj);
  selfCpp->mMaxDistance = mMaxDistance;
};

//endregion properties

#ifdef __cplusplus
}
#endif

