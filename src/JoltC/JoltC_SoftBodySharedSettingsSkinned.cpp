#include "JoltC/JoltC_SoftBodySharedSettingsSkinned.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JoltC_SoftBodySharedSettingsSkinned_mVertex_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  return selfCpp->mVertex;
}

void JoltC_SoftBodySharedSettingsSkinned_mVertex_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  unsigned long mVertex
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->mVertex = mVertex;
};

size_t JoltC_SoftBodySharedSettingsSkinned_mWeights_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  JoltC_SoftBodySharedSettingsSkinWeight_t * * outValue
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  size_t resultSize = std::size(selfCpp->mWeights);
  // TODO get result array...
}

void JoltC_SoftBodySharedSettingsSkinned_mWeights_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  JoltC_SoftBodySharedSettingsSkinWeight_t * * mWeights,
  size_t mWeightsSize
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  for (size_t i = 0; i < mWeightsSize; i++) {
    selfCpp->mWeights[i] = *(static_cast<SoftBodySharedSettingsSkinWeight *>(mWeights[i]->obj));
  };
};

float JoltC_SoftBodySharedSettingsSkinned_mMaxDistance_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  return selfCpp->mMaxDistance;
}

void JoltC_SoftBodySharedSettingsSkinned_mMaxDistance_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  float mMaxDistance
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->mMaxDistance = mMaxDistance;
};

float JoltC_SoftBodySharedSettingsSkinned_mBackStopDistance_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  return selfCpp->mBackStopDistance;
}

void JoltC_SoftBodySharedSettingsSkinned_mBackStopDistance_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  float mBackStopDistance
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->mBackStopDistance = mBackStopDistance;
};

float JoltC_SoftBodySharedSettingsSkinned_mBackStopRadius_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  return selfCpp->mBackStopRadius;
}

void JoltC_SoftBodySharedSettingsSkinned_mBackStopRadius_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  float mBackStopRadius
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->mBackStopRadius = mBackStopRadius;
};

//endregion

#ifdef __cplusplus
}
#endif

