#include "JoltC/JPC_SpringSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SpringSettings_t * JPC_SpringSettings_new() {
  JPC_SpringSettings_t * cInstance = new JPC_SpringSettings_t();
  SpringSettings * cppInstance = new SpringSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region functions

bool JPC_SpringSettings_HasStiffness(
  JPC_SpringSettings_t * self
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  bool result = selfCpp->HasStiffness();
  return result;
};

//endregion functions

//region properties

JPC_ESpringMode JPC_SpringSettings_mMode_Get(
  JPC_SpringSettings_t * self
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  ESpringMode result = selfCpp->mMode;
  return static_cast<JPC_ESpringMode>(static_cast<int>(result));
};

void JPC_SpringSettings_mMode_Set(
  JPC_SpringSettings_t * self,
  JPC_ESpringMode mMode
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  selfCpp->mMode = static_cast<ESpringMode>(static_cast<int>(mMode));
};

float JPC_SpringSettings_mFrequency_Get(
  JPC_SpringSettings_t * self
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  float result = selfCpp->mFrequency;
  return result;
};

void JPC_SpringSettings_mFrequency_Set(
  JPC_SpringSettings_t * self,
  float mFrequency
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  selfCpp->mFrequency = mFrequency;
};

float JPC_SpringSettings_mStiffness_Get(
  JPC_SpringSettings_t * self
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  float result = selfCpp->mStiffness;
  return result;
};

void JPC_SpringSettings_mStiffness_Set(
  JPC_SpringSettings_t * self,
  float mStiffness
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  selfCpp->mStiffness = mStiffness;
};

float JPC_SpringSettings_mDamping_Get(
  JPC_SpringSettings_t * self
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  float result = selfCpp->mDamping;
  return result;
};

void JPC_SpringSettings_mDamping_Set(
  JPC_SpringSettings_t * self,
  float mDamping
) {
  SpringSettings * selfCpp = static_cast<SpringSettings *>(self->obj);
  selfCpp->mDamping = mDamping;
};

//endregion properties

#ifdef __cplusplus
}
#endif

