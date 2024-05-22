#include "JoltC/JPC_SoftBodySharedSettingsEdge.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettingsEdge_t * JPC_SoftBodySharedSettingsEdge_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  float inCompliance
) {
  JPC_SoftBodySharedSettingsEdge_t * cInstance = new JPC_SoftBodySharedSettingsEdge_t();
  SoftBodySharedSettingsEdge * cppInstance = new SoftBodySharedSettingsEdge(
    inVertex1,
    inVertex2,
    inCompliance
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

size_t JPC_SoftBodySharedSettingsEdge_mVertex_Get(
  JPC_SoftBodySharedSettingsEdge_t * self,
  unsigned long * outValue
) {
  SoftBodySharedSettingsEdge * selfCpp = static_cast<SoftBodySharedSettingsEdge *>(self->obj);
  size_t resultSize = std::size(selfCpp->mVertex);
  // TODO get result array...
  return resultSize;
};

void JPC_SoftBodySharedSettingsEdge_mVertex_Set(
  JPC_SoftBodySharedSettingsEdge_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
) {
  SoftBodySharedSettingsEdge * selfCpp = static_cast<SoftBodySharedSettingsEdge *>(self->obj);
  for (size_t i = 0; i < mVertexSize; i++) {
    selfCpp->mVertex[i] = mVertex[i];
  };
};

float JPC_SoftBodySharedSettingsEdge_mRestLength_Get(
  JPC_SoftBodySharedSettingsEdge_t * self
) {
  SoftBodySharedSettingsEdge * selfCpp = static_cast<SoftBodySharedSettingsEdge *>(self->obj);
  float result = selfCpp->mRestLength;
  return result;
};

void JPC_SoftBodySharedSettingsEdge_mRestLength_Set(
  JPC_SoftBodySharedSettingsEdge_t * self,
  float mRestLength
) {
  SoftBodySharedSettingsEdge * selfCpp = static_cast<SoftBodySharedSettingsEdge *>(self->obj);
  selfCpp->mRestLength = mRestLength;
};

float JPC_SoftBodySharedSettingsEdge_mCompliance_Get(
  JPC_SoftBodySharedSettingsEdge_t * self
) {
  SoftBodySharedSettingsEdge * selfCpp = static_cast<SoftBodySharedSettingsEdge *>(self->obj);
  float result = selfCpp->mCompliance;
  return result;
};

void JPC_SoftBodySharedSettingsEdge_mCompliance_Set(
  JPC_SoftBodySharedSettingsEdge_t * self,
  float mCompliance
) {
  SoftBodySharedSettingsEdge * selfCpp = static_cast<SoftBodySharedSettingsEdge *>(self->obj);
  selfCpp->mCompliance = mCompliance;
};

//endregion properties

#ifdef __cplusplus
}
#endif

