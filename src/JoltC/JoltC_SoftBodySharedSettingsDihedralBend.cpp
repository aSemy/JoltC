#include "JoltC/JoltC_SoftBodySharedSettingsDihedralBend.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

/**
  Construct a new `SoftBodySharedSettingsDihedralBend` instance.
 */
JoltC_SoftBodySharedSettingsDihedralBend_t * JoltC_SoftBodySharedSettingsDihedralBend_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  unsigned long inVertex3,
  unsigned long inVertex4,
  float inCompliance
) {
  JoltC_SoftBodySharedSettingsDihedralBend_t * cInstance = new JoltC_SoftBodySharedSettingsDihedralBend_t();
  SoftBodySharedSettingsDihedralBend * cppInstance = new SoftBodySharedSettingsDihedralBend(
    inVertex1,
    inVertex2,
    inVertex3,
    inVertex4,
    inCompliance
  );
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

size_t JoltC_SoftBodySharedSettingsDihedralBend_mVertex_Get(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  unsigned long * outValue
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  size_t resultSize = std::size(selfCpp->mVertex);
  // TODO get result array...
}

void JoltC_SoftBodySharedSettingsDihedralBend_mVertex_Set(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  for (size_t i = 0; i < mVertexSize; i++) {
    selfCpp->mVertex[i] = mVertex[i];
  };
};

float JoltC_SoftBodySharedSettingsDihedralBend_mCompliance_Get(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  return selfCpp->mCompliance;
}

void JoltC_SoftBodySharedSettingsDihedralBend_mCompliance_Set(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  float mCompliance
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  selfCpp->mCompliance = mCompliance;
};

float JoltC_SoftBodySharedSettingsDihedralBend_mInitialAngle_Get(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  return selfCpp->mInitialAngle;
}

void JoltC_SoftBodySharedSettingsDihedralBend_mInitialAngle_Set(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  float mInitialAngle
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  selfCpp->mInitialAngle = mInitialAngle;
};

//endregion

#ifdef __cplusplus
}
#endif

