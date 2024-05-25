#include "JoltC/JoltC_SoftBodySharedSettingsSkinned.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region properties

unsigned long JoltC_SoftBodySharedSettingsSkinned_mVertex_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  unsigned long result = selfCpp->mVertex;
  return result;
};

void JoltC_SoftBodySharedSettingsSkinned_mVertex_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  unsigned long mVertex,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->mVertex = mVertex;
};

size_t JoltC_SoftBodySharedSettingsSkinned_mWeights_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  JoltC_SoftBodySharedSettingsSkinWeight_t * * outValue,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  size_t resultSize = std::size(selfCpp->mWeights);
  // TODO get result array...
  return resultSize;
};

void JoltC_SoftBodySharedSettingsSkinned_mWeights_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  JoltC_SoftBodySharedSettingsSkinWeight_t * * mWeights,
  size_t mWeightsSize,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  for (size_t i = 0; i < mWeightsSize; i++) {
    selfCpp->mWeights[i] = *(reinterpret_cast<SoftBodySharedSettingsSkinWeight *>(mWeights[i]->obj));
  };
};

float JoltC_SoftBodySharedSettingsSkinned_mMaxDistance_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  float result = selfCpp->mMaxDistance;
  return result;
};

void JoltC_SoftBodySharedSettingsSkinned_mMaxDistance_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  float mMaxDistance,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->mMaxDistance = mMaxDistance;
};

float JoltC_SoftBodySharedSettingsSkinned_mBackStopDistance_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  float result = selfCpp->mBackStopDistance;
  return result;
};

void JoltC_SoftBodySharedSettingsSkinned_mBackStopDistance_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  float mBackStopDistance,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->mBackStopDistance = mBackStopDistance;
};

float JoltC_SoftBodySharedSettingsSkinned_mBackStopRadius_Get(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  float result = selfCpp->mBackStopRadius;
  return result;
};

void JoltC_SoftBodySharedSettingsSkinned_mBackStopRadius_Set(
  JoltC_SoftBodySharedSettingsSkinned_t * self,
  float mBackStopRadius,
  char** outErrMsg
) {
  SoftBodySharedSettingsSkinned * selfCpp = static_cast<SoftBodySharedSettingsSkinned *>(self->obj);
  selfCpp->mBackStopRadius = mBackStopRadius;
};

//endregion properties

#ifdef __cplusplus
}
#endif

