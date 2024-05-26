#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_BodyFilter_t * JoltC_BodyFilter_new();

//endregion

//region converters

/**
 * Convert an instance of JoltC_IgnoreSingleBodyFilter_t into JoltC_BodyFilter_t.
 */
JoltC_BodyFilter_t * JoltC_BodyFilter_From_IgnoreSingleBodyFilter(
  JoltC_IgnoreSingleBodyFilter_t * subtype
);

/**
 * Convert an instance of JoltC_IgnoreMultipleBodiesFilter_t into JoltC_BodyFilter_t.
 */
JoltC_BodyFilter_t * JoltC_BodyFilter_From_IgnoreMultipleBodiesFilter(
  JoltC_IgnoreMultipleBodiesFilter_t * subtype
);

//endregion


#ifdef __cplusplus
}
#endif

