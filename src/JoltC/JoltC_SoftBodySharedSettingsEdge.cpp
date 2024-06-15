#include "JoltC/JoltC_SoftBodySharedSettingsEdge.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `SoftBodySharedSettingsEdge` instance.
 */
JoltC_SoftBodySharedSettingsEdge_t * JoltC_SoftBodySharedSettingsEdge_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  float inCompliance
) {
  JoltC_SoftBodySharedSettingsEdge_t * cInstance = new JoltC_SoftBodySharedSettingsEdge_t();
  SoftBodySharedSettingsEdge * cppInstance = new SoftBodySharedSettingsEdge(
    inVertex1,
    inVertex2,
    inCompliance
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region destructor

void JoltC_SoftBodySharedSettingsEdge_destroy(
  JoltC_SoftBodySharedSettingsEdge_t * self
){
  if (self == NULL) return;
  delete static_cast<SoftBodySharedSettingsEdge *>(self->obj);
  free(self);
}

//endregion
//region properties

size_t JoltC_SoftBodySharedSettingsEdge_mVertex_Get(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  unsigned long * outValue
) {
  SoftBodySharedSettingsEdge * selfCpp = static_cast<SoftBodySharedSettingsEdge *>(self->obj);
  size_t resultSize = std::size(selfCpp->mVertex);
  // TODO get result array...
}

void JoltC_SoftBodySharedSettingsEdge_mVertex_Set(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
) {
  SoftBodySharedSettingsEdge * selfCpp = static_cast<SoftBodySharedSettingsEdge *>(self->obj);
  for (size_t i = 0; i < mVertexSize; i++) {
    selfCpp->mVertex[i] = mVertex[i];
  };
}

float JoltC_SoftBodySharedSettingsEdge_mRestLength_Get(
  JoltC_SoftBodySharedSettingsEdge_t * self
) {
  SoftBodySharedSettingsEdge * selfCpp = static_cast<SoftBodySharedSettingsEdge *>(self->obj);
  return selfCpp->mRestLength;
}

void JoltC_SoftBodySharedSettingsEdge_mRestLength_Set(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  float mRestLength
) {
  SoftBodySharedSettingsEdge * selfCpp = static_cast<SoftBodySharedSettingsEdge *>(self->obj);
  selfCpp->mRestLength = mRestLength;
}

float JoltC_SoftBodySharedSettingsEdge_mCompliance_Get(
  JoltC_SoftBodySharedSettingsEdge_t * self
) {
  SoftBodySharedSettingsEdge * selfCpp = static_cast<SoftBodySharedSettingsEdge *>(self->obj);
  return selfCpp->mCompliance;
}

void JoltC_SoftBodySharedSettingsEdge_mCompliance_Set(
  JoltC_SoftBodySharedSettingsEdge_t * self,
  float mCompliance
) {
  SoftBodySharedSettingsEdge * selfCpp = static_cast<SoftBodySharedSettingsEdge *>(self->obj);
  selfCpp->mCompliance = mCompliance;
}

//endregion


#ifdef __cplusplus
}
#endif
