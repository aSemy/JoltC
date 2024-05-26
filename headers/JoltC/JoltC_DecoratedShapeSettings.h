#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region converters

/**
 * Convert an instance of JoltC_ScaledShapeSettings_t into JoltC_DecoratedShapeSettings_t.
 */
JoltC_DecoratedShapeSettings_t * JoltC_DecoratedShapeSettings_From_ScaledShapeSettings(
  JoltC_ScaledShapeSettings_t * subtype
);

/**
 * Convert an instance of JoltC_OffsetCenterOfMassShapeSettings_t into JoltC_DecoratedShapeSettings_t.
 */
JoltC_DecoratedShapeSettings_t * JoltC_DecoratedShapeSettings_From_OffsetCenterOfMassShapeSettings(
  JoltC_OffsetCenterOfMassShapeSettings_t * subtype
);

/**
 * Convert an instance of JoltC_RotatedTranslatedShapeSettings_t into JoltC_DecoratedShapeSettings_t.
 */
JoltC_DecoratedShapeSettings_t * JoltC_DecoratedShapeSettings_From_RotatedTranslatedShapeSettings(
  JoltC_RotatedTranslatedShapeSettings_t * subtype
);

//endregion

//region functions

unsigned long JoltC_DecoratedShapeSettings_GetRefCount(
  JoltC_DecoratedShapeSettings_t * self
);

void JoltC_DecoratedShapeSettings_AddRef(
  JoltC_DecoratedShapeSettings_t * self
);

void JoltC_DecoratedShapeSettings_Release(
  JoltC_DecoratedShapeSettings_t * self
);

JoltC_Shape_ShapeResult_t * JoltC_DecoratedShapeSettings_Create(
  JoltC_DecoratedShapeSettings_t * self
);

void JoltC_DecoratedShapeSettings_ClearCachedResult(
  JoltC_DecoratedShapeSettings_t * self
);

//endregion

//region properties

unsigned long long int JoltC_DecoratedShapeSettings_mUserData_Get(
  JoltC_DecoratedShapeSettings_t * self
);

void JoltC_DecoratedShapeSettings_mUserData_Set(
  JoltC_DecoratedShapeSettings_t * self,
  unsigned long long int mUserData
);

//endregion


#ifdef __cplusplus
}
#endif

