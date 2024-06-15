#include "JoltC/JoltC_SpringSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `SpringSettings` instance.
 */
JoltC_SpringSettings_t * JoltC_SpringSettings_new() {
  JoltC_SpringSettings_t * cInstance = new JoltC_SpringSettings_t();
  SpringSettings * cppInstance = new SpringSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_SpringSettings_destroy(
  JoltC_SpringSettings_t * self
){
  if (self == NULL) return;
  delete static_cast<SpringSettings *>(self->obj);
  free(self);
}

//endregion
//region functions

bool JoltC_SpringSettings_HasStiffness(
  JoltC_SpringSettings_t * self
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  return selfCpp->HasStiffness();
}

//endregion

//region properties

JoltC_ESpringMode JoltC_SpringSettings_mMode_Get(
  JoltC_SpringSettings_t * self
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  ESpringMode result = selfCpp->mMode;
  return static_cast<JoltC_ESpringMode>(static_cast<int>(result));
}

void JoltC_SpringSettings_mMode_Set(
  JoltC_SpringSettings_t * self,
  JoltC_ESpringMode mMode
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  selfCpp->mMode = static_cast<ESpringMode>(static_cast<int>(mMode));
}

float JoltC_SpringSettings_mFrequency_Get(
  JoltC_SpringSettings_t * self
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  return selfCpp->mFrequency;
}

void JoltC_SpringSettings_mFrequency_Set(
  JoltC_SpringSettings_t * self,
  float mFrequency
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  selfCpp->mFrequency = mFrequency;
}

float JoltC_SpringSettings_mStiffness_Get(
  JoltC_SpringSettings_t * self
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  return selfCpp->mStiffness;
}

void JoltC_SpringSettings_mStiffness_Set(
  JoltC_SpringSettings_t * self,
  float mStiffness
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  selfCpp->mStiffness = mStiffness;
}

float JoltC_SpringSettings_mDamping_Get(
  JoltC_SpringSettings_t * self
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  return selfCpp->mDamping;
}

void JoltC_SpringSettings_mDamping_Set(
  JoltC_SpringSettings_t * self,
  float mDamping
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  selfCpp->mDamping = mDamping;
}

//endregion


#ifdef __cplusplus
}
#endif
