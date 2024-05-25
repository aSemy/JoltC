#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PhysicsSettings_t * JoltC_PhysicsSettings_new(
  char** outErrMsg
);

//endregion constructors

//region properties

long JoltC_PhysicsSettings_mMaxInFlightBodyPairs_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mMaxInFlightBodyPairs_Set(
  JoltC_PhysicsSettings_t * self,
  long mMaxInFlightBodyPairs,
  char** outErrMsg
);

long JoltC_PhysicsSettings_mStepListenersBatchSize_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mStepListenersBatchSize_Set(
  JoltC_PhysicsSettings_t * self,
  long mStepListenersBatchSize,
  char** outErrMsg
);

long JoltC_PhysicsSettings_mStepListenerBatchesPerJob_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mStepListenerBatchesPerJob_Set(
  JoltC_PhysicsSettings_t * self,
  long mStepListenerBatchesPerJob,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mBaumgarte_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mBaumgarte_Set(
  JoltC_PhysicsSettings_t * self,
  float mBaumgarte,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mSpeculativeContactDistance_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mSpeculativeContactDistance_Set(
  JoltC_PhysicsSettings_t * self,
  float mSpeculativeContactDistance,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mPenetrationSlop_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mPenetrationSlop_Set(
  JoltC_PhysicsSettings_t * self,
  float mPenetrationSlop,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mLinearCastThreshold_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mLinearCastThreshold_Set(
  JoltC_PhysicsSettings_t * self,
  float mLinearCastThreshold,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mLinearCastMaxPenetration_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mLinearCastMaxPenetration_Set(
  JoltC_PhysicsSettings_t * self,
  float mLinearCastMaxPenetration,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mManifoldToleranceSq_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mManifoldToleranceSq_Set(
  JoltC_PhysicsSettings_t * self,
  float mManifoldToleranceSq,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mMaxPenetrationDistance_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mMaxPenetrationDistance_Set(
  JoltC_PhysicsSettings_t * self,
  float mMaxPenetrationDistance,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mBodyPairCacheMaxDeltaPositionSq_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mBodyPairCacheMaxDeltaPositionSq_Set(
  JoltC_PhysicsSettings_t * self,
  float mBodyPairCacheMaxDeltaPositionSq,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mBodyPairCacheCosMaxDeltaRotationDiv2_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mBodyPairCacheCosMaxDeltaRotationDiv2_Set(
  JoltC_PhysicsSettings_t * self,
  float mBodyPairCacheCosMaxDeltaRotationDiv2,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mContactNormalCosMaxDeltaRotation_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mContactNormalCosMaxDeltaRotation_Set(
  JoltC_PhysicsSettings_t * self,
  float mContactNormalCosMaxDeltaRotation,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mContactPointPreserveLambdaMaxDistSq_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mContactPointPreserveLambdaMaxDistSq_Set(
  JoltC_PhysicsSettings_t * self,
  float mContactPointPreserveLambdaMaxDistSq,
  char** outErrMsg
);

long JoltC_PhysicsSettings_mNumVelocitySteps_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mNumVelocitySteps_Set(
  JoltC_PhysicsSettings_t * self,
  long mNumVelocitySteps,
  char** outErrMsg
);

long JoltC_PhysicsSettings_mNumPositionSteps_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mNumPositionSteps_Set(
  JoltC_PhysicsSettings_t * self,
  long mNumPositionSteps,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mMinVelocityForRestitution_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mMinVelocityForRestitution_Set(
  JoltC_PhysicsSettings_t * self,
  float mMinVelocityForRestitution,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mTimeBeforeSleep_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mTimeBeforeSleep_Set(
  JoltC_PhysicsSettings_t * self,
  float mTimeBeforeSleep,
  char** outErrMsg
);

float JoltC_PhysicsSettings_mPointVelocitySleepThreshold_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mPointVelocitySleepThreshold_Set(
  JoltC_PhysicsSettings_t * self,
  float mPointVelocitySleepThreshold,
  char** outErrMsg
);

bool JoltC_PhysicsSettings_mDeterministicSimulation_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mDeterministicSimulation_Set(
  JoltC_PhysicsSettings_t * self,
  bool mDeterministicSimulation,
  char** outErrMsg
);

bool JoltC_PhysicsSettings_mConstraintWarmStart_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mConstraintWarmStart_Set(
  JoltC_PhysicsSettings_t * self,
  bool mConstraintWarmStart,
  char** outErrMsg
);

bool JoltC_PhysicsSettings_mUseBodyPairContactCache_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mUseBodyPairContactCache_Set(
  JoltC_PhysicsSettings_t * self,
  bool mUseBodyPairContactCache,
  char** outErrMsg
);

bool JoltC_PhysicsSettings_mUseManifoldReduction_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mUseManifoldReduction_Set(
  JoltC_PhysicsSettings_t * self,
  bool mUseManifoldReduction,
  char** outErrMsg
);

bool JoltC_PhysicsSettings_mUseLargeIslandSplitter_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mUseLargeIslandSplitter_Set(
  JoltC_PhysicsSettings_t * self,
  bool mUseLargeIslandSplitter,
  char** outErrMsg
);

bool JoltC_PhysicsSettings_mAllowSleeping_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mAllowSleeping_Set(
  JoltC_PhysicsSettings_t * self,
  bool mAllowSleeping,
  char** outErrMsg
);

bool JoltC_PhysicsSettings_mCheckActiveEdges_Get(
  JoltC_PhysicsSettings_t * self,
  char** outErrMsg
);

void JoltC_PhysicsSettings_mCheckActiveEdges_Set(
  JoltC_PhysicsSettings_t * self,
  bool mCheckActiveEdges,
  char** outErrMsg
);

//endregion properties


#ifdef __cplusplus
}
#endif

