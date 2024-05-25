#include "JoltC/JoltC_SoftBodySharedSettingsDihedralBend.h"
#include "JoltC/JoltJS.h"
#include <exception>

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_SoftBodySharedSettingsDihedralBend_t * JoltC_SoftBodySharedSettingsDihedralBend_new(
  unsigned long inVertex1,
  unsigned long inVertex2,
  unsigned long inVertex3,
  unsigned long inVertex4,
  float inCompliance,
  char** outErrMsg
) {
  try {
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
  }
  catch (exception& e) {
    if (outErrMsg) {
      *outErrMsg = strdup(e.what());
    }
    throw e;
  };
};

//endregion constructors

//region properties

size_t JoltC_SoftBodySharedSettingsDihedralBend_mVertex_Get(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  unsigned long * outValue,
  char** outErrMsg
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  size_t resultSize = std::size(selfCpp->mVertex);
  // TODO get result array...
  return resultSize;
};

void JoltC_SoftBodySharedSettingsDihedralBend_mVertex_Set(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  unsigned long * mVertex,
  size_t mVertexSize,
  char** outErrMsg
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  for (size_t i = 0; i < mVertexSize; i++) {
    selfCpp->mVertex[i] = mVertex[i];
  };
};

float JoltC_SoftBodySharedSettingsDihedralBend_mCompliance_Get(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  float result = selfCpp->mCompliance;
  return result;
};

void JoltC_SoftBodySharedSettingsDihedralBend_mCompliance_Set(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  float mCompliance,
  char** outErrMsg
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  selfCpp->mCompliance = mCompliance;
};

float JoltC_SoftBodySharedSettingsDihedralBend_mInitialAngle_Get(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  char** outErrMsg
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  float result = selfCpp->mInitialAngle;
  return result;
};

void JoltC_SoftBodySharedSettingsDihedralBend_mInitialAngle_Set(
  JoltC_SoftBodySharedSettingsDihedralBend_t * self,
  float mInitialAngle,
  char** outErrMsg
) {
  SoftBodySharedSettingsDihedralBend * selfCpp = static_cast<SoftBodySharedSettingsDihedralBend *>(self->obj);
  selfCpp->mInitialAngle = mInitialAngle;
};

//endregion properties

#ifdef __cplusplus
}
#endif

