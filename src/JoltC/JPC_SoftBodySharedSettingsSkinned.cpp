#include "JoltC/JPC_SoftBodySharedSettingsSkinned.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JPC_SoftBodySharedSettingsSkinned_mVertex_Get(
  JPC_SoftBodySharedSettingsSkinned_t * self
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  unsigned long result = selfCpp->mVertex;
  return result;
};

void JPC_SoftBodySharedSettingsSkinned_mVertex_Set(
  JPC_SoftBodySharedSettingsSkinned_t * self,
  unsigned long mVertex
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->mVertex = mVertex;
};

size_t JPC_SoftBodySharedSettingsSkinned_mWeights_Get(
  JPC_SoftBodySharedSettingsSkinned_t * self,
  JPC_SoftBodySharedSettingsSkinWeight_t * * outValue
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  size_t resultSize = std::size(selfCpp->mWeights);
  // TODO get result array...
  return resultSize;
};

void JPC_SoftBodySharedSettingsSkinned_mWeights_Set(
  JPC_SoftBodySharedSettingsSkinned_t * self,
  JPC_SoftBodySharedSettingsSkinWeight_t * * mWeights,
  size_t mWeightsSize
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  for (size_t i = 0; i < mWeightsSize; i++) {
    selfCpp->mWeights[i] = *(reinterpret_cast<SoftBodySharedSettingsSkinWeight *>(mWeights[i]->obj));
  };
};

float JPC_SoftBodySharedSettingsSkinned_mMaxDistance_Get(
  JPC_SoftBodySharedSettingsSkinned_t * self
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  float result = selfCpp->mMaxDistance;
  return result;
};

void JPC_SoftBodySharedSettingsSkinned_mMaxDistance_Set(
  JPC_SoftBodySharedSettingsSkinned_t * self,
  float mMaxDistance
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->mMaxDistance = mMaxDistance;
};

float JPC_SoftBodySharedSettingsSkinned_mBackStopDistance_Get(
  JPC_SoftBodySharedSettingsSkinned_t * self
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  float result = selfCpp->mBackStopDistance;
  return result;
};

void JPC_SoftBodySharedSettingsSkinned_mBackStopDistance_Set(
  JPC_SoftBodySharedSettingsSkinned_t * self,
  float mBackStopDistance
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->mBackStopDistance = mBackStopDistance;
};

float JPC_SoftBodySharedSettingsSkinned_mBackStopRadius_Get(
  JPC_SoftBodySharedSettingsSkinned_t * self
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  float result = selfCpp->mBackStopRadius;
  return result;
};

void JPC_SoftBodySharedSettingsSkinned_mBackStopRadius_Set(
  JPC_SoftBodySharedSettingsSkinned_t * self,
  float mBackStopRadius
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->mBackStopRadius = mBackStopRadius;
};

//endregion properties

#ifdef __cplusplus
}
#endif

