#include "JoltC/JPC_SoftBodySharedSettingsVolume.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettingsVolume_t * JPC_SoftBodySharedSettingsVolume_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  unsigned long inVertex3,
  unsigned long inVertex4,
  float inCompliance
) {
  JPC_SoftBodySharedSettingsVolume_t * cInstance = new JPC_SoftBodySharedSettingsVolume_t();
  SoftBodySharedSettingsVolume * cppInstance = new SoftBodySharedSettingsVolume(
    inVertex1,
    inVertex2,
    inVertex3,
    inVertex4,
    inCompliance
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

size_t JPC_SoftBodySharedSettingsVolume_mVertex_Get(
  JPC_SoftBodySharedSettingsVolume_t * self,
  unsigned long * outValue
) {
  SoftBodySharedSettingsVolume * selfCpp = static_cast<SoftBodySharedSettingsVolume *>(self->obj);
  size_t resultSize = std::size(selfCpp->mVertex);
  // TODO get result array...
  return resultSize;
};

void JPC_SoftBodySharedSettingsVolume_mVertex_Set(
  JPC_SoftBodySharedSettingsVolume_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
) {
  SoftBodySharedSettingsVolume * selfCpp = static_cast<SoftBodySharedSettingsVolume *>(self->obj);
  for (size_t i = 0; i < mVertexSize; i++) {
    selfCpp->mVertex[i] = mVertex[i];
  };
};

float JPC_SoftBodySharedSettingsVolume_mSixRestVolume_Get(
  JPC_SoftBodySharedSettingsVolume_t * self
) {
  SoftBodySharedSettingsVolume * selfCpp = static_cast<SoftBodySharedSettingsVolume *>(self->obj);
  float result = selfCpp->mSixRestVolume;
  return result;
};

void JPC_SoftBodySharedSettingsVolume_mSixRestVolume_Set(
  JPC_SoftBodySharedSettingsVolume_t * self,
  float mSixRestVolume
) {
  SoftBodySharedSettingsVolume * selfCpp = static_cast<SoftBodySharedSettingsVolume *>(self->obj);
  selfCpp->mSixRestVolume = mSixRestVolume;
};

float JPC_SoftBodySharedSettingsVolume_mCompliance_Get(
  JPC_SoftBodySharedSettingsVolume_t * self
) {
  SoftBodySharedSettingsVolume * selfCpp = static_cast<SoftBodySharedSettingsVolume *>(self->obj);
  float result = selfCpp->mCompliance;
  return result;
};

void JPC_SoftBodySharedSettingsVolume_mCompliance_Set(
  JPC_SoftBodySharedSettingsVolume_t * self,
  float mCompliance
) {
  SoftBodySharedSettingsVolume * selfCpp = static_cast<SoftBodySharedSettingsVolume *>(self->obj);
  selfCpp->mCompliance = mCompliance;
};

//endregion properties

#ifdef __cplusplus
}
#endif

