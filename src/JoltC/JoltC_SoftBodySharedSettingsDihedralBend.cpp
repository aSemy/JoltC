#include "JoltC/JPC_SoftBodySharedSettingsDihedralBend.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_SoftBodySharedSettingsDihedralBend_t * JPC_SoftBodySharedSettingsDihedralBend_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  unsigned long inVertex3,
  unsigned long inVertex4,
  float inCompliance
) {
  JPC_SoftBodySharedSettingsDihedralBend_t * cInstance = new JPC_SoftBodySharedSettingsDihedralBend_t();
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

//endregion constructors

//region properties

size_t JPC_SoftBodySharedSettingsDihedralBend_mVertex_Get(
  JPC_SoftBodySharedSettingsDihedralBend_t * self,
  unsigned long * outValue
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  size_t resultSize = std::size(selfCpp->mVertex);
  // TODO get result array...
  return resultSize;
};

void JPC_SoftBodySharedSettingsDihedralBend_mVertex_Set(
  JPC_SoftBodySharedSettingsDihedralBend_t * self,
  unsigned long * mVertex,
  size_t mVertexSize
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  for (size_t i = 0; i < mVertexSize; i++) {
    selfCpp->mVertex[i] = mVertex[i];
  };
};

float JPC_SoftBodySharedSettingsDihedralBend_mCompliance_Get(
  JPC_SoftBodySharedSettingsDihedralBend_t * self
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  float result = selfCpp->mCompliance;
  return result;
};

void JPC_SoftBodySharedSettingsDihedralBend_mCompliance_Set(
  JPC_SoftBodySharedSettingsDihedralBend_t * self,
  float mCompliance
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  selfCpp->mCompliance = mCompliance;
};

float JPC_SoftBodySharedSettingsDihedralBend_mInitialAngle_Get(
  JPC_SoftBodySharedSettingsDihedralBend_t * self
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  float result = selfCpp->mInitialAngle;
  return result;
};

void JPC_SoftBodySharedSettingsDihedralBend_mInitialAngle_Set(
  JPC_SoftBodySharedSettingsDihedralBend_t * self,
  float mInitialAngle
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  selfCpp->mInitialAngle = mInitialAngle;
};

//endregion properties

#ifdef __cplusplus
}
#endif

