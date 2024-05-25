#include "JoltC/JoltC_SoftBodySharedSettingsVolume.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsVolume_t * JoltC_SoftBodySharedSettingsVolume_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  unsigned long inVertex3,
  unsigned long inVertex4,
  float inCompliance,
  char** outErrMsg
) {
  try {
    JoltC_SoftBodySharedSettingsVolume_t * cInstance = new JoltC_SoftBodySharedSettingsVolume_t();
    SoftBodySharedSettingsVolume * cppInstance = new SoftBodySharedSettingsVolume(
      inVertex1,
      inVertex2,
      inVertex3,
      inVertex4,
      inCompliance
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

size_t JoltC_SoftBodySharedSettingsVolume_mVertex_Get(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  unsigned long * outValue,
  char** outErrMsg
) {
  SoftBodySharedSettingsVolume * selfCpp = static_cast<SoftBodySharedSettingsVolume *>(self->obj);
  size_t resultSize = std::size(selfCpp->mVertex);
  // TODO get result array...
  return resultSize;
};

void JoltC_SoftBodySharedSettingsVolume_mVertex_Set(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  unsigned long * mVertex,
  size_t mVertexSize,
  char** outErrMsg
) {
  SoftBodySharedSettingsVolume * selfCpp = static_cast<SoftBodySharedSettingsVolume *>(self->obj);
  for (size_t i = 0; i < mVertexSize; i++) {
    selfCpp->mVertex[i] = mVertex[i];
  };
};

float JoltC_SoftBodySharedSettingsVolume_mSixRestVolume_Get(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsVolume * selfCpp = static_cast<SoftBodySharedSettingsVolume *>(self->obj);
  float result = selfCpp->mSixRestVolume;
  return result;
};

void JoltC_SoftBodySharedSettingsVolume_mSixRestVolume_Set(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  float mSixRestVolume,
  char** outErrMsg
) {
  SoftBodySharedSettingsVolume * selfCpp = static_cast<SoftBodySharedSettingsVolume *>(self->obj);
  selfCpp->mSixRestVolume = mSixRestVolume;
};

float JoltC_SoftBodySharedSettingsVolume_mCompliance_Get(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsVolume * selfCpp = static_cast<SoftBodySharedSettingsVolume *>(self->obj);
  float result = selfCpp->mCompliance;
  return result;
};

void JoltC_SoftBodySharedSettingsVolume_mCompliance_Set(
  JoltC_SoftBodySharedSettingsVolume_t * self,
  float mCompliance,
  char** outErrMsg
) {
  SoftBodySharedSettingsVolume * selfCpp = static_cast<SoftBodySharedSettingsVolume *>(self->obj);
  selfCpp->mCompliance = mCompliance;
};

//endregion properties

#ifdef __cplusplus
}
#endif

