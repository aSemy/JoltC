#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PhysicsSettings_t * JoltC_PhysicsSettings_new();

//endregion

//region properties

long JoltC_PhysicsSettings_mMaxInFlightBodyPairs_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mMaxInFlightBodyPairs_Set(
  JoltC_PhysicsSettings_t * self,
  long mMaxInFlightBodyPairs
);

long JoltC_PhysicsSettings_mStepListenersBatchSize_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mStepListenersBatchSize_Set(
  JoltC_PhysicsSettings_t * self,
  long mStepListenersBatchSize
);

long JoltC_PhysicsSettings_mStepListenerBatchesPerJob_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mStepListenerBatchesPerJob_Set(
  JoltC_PhysicsSettings_t * self,
  long mStepListenerBatchesPerJob
);

float JoltC_PhysicsSettings_mBaumgarte_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mBaumgarte_Set(
  JoltC_PhysicsSettings_t * self,
  float mBaumgarte
);

float JoltC_PhysicsSettings_mSpeculativeContactDistance_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mSpeculativeContactDistance_Set(
  JoltC_PhysicsSettings_t * self,
  float mSpeculativeContactDistance
);

float JoltC_PhysicsSettings_mPenetrationSlop_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mPenetrationSlop_Set(
  JoltC_PhysicsSettings_t * self,
  float mPenetrationSlop
);

float JoltC_PhysicsSettings_mLinearCastThreshold_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mLinearCastThreshold_Set(
  JoltC_PhysicsSettings_t * self,
  float mLinearCastThreshold
);

float JoltC_PhysicsSettings_mLinearCastMaxPenetration_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mLinearCastMaxPenetration_Set(
  JoltC_PhysicsSettings_t * self,
  float mLinearCastMaxPenetration
);

float JoltC_PhysicsSettings_mManifoldToleranceSq_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mManifoldToleranceSq_Set(
  JoltC_PhysicsSettings_t * self,
  float mManifoldToleranceSq
);

float JoltC_PhysicsSettings_mMaxPenetrationDistance_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mMaxPenetrationDistance_Set(
  JoltC_PhysicsSettings_t * self,
  float mMaxPenetrationDistance
);

float JoltC_PhysicsSettings_mBodyPairCacheMaxDeltaPositionSq_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mBodyPairCacheMaxDeltaPositionSq_Set(
  JoltC_PhysicsSettings_t * self,
  float mBodyPairCacheMaxDeltaPositionSq
);

float JoltC_PhysicsSettings_mBodyPairCacheCosMaxDeltaRotationDiv2_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mBodyPairCacheCosMaxDeltaRotationDiv2_Set(
  JoltC_PhysicsSettings_t * self,
  float mBodyPairCacheCosMaxDeltaRotationDiv2
);

float JoltC_PhysicsSettings_mContactNormalCosMaxDeltaRotation_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mContactNormalCosMaxDeltaRotation_Set(
  JoltC_PhysicsSettings_t * self,
  float mContactNormalCosMaxDeltaRotation
);

float JoltC_PhysicsSettings_mContactPointPreserveLambdaMaxDistSq_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mContactPointPreserveLambdaMaxDistSq_Set(
  JoltC_PhysicsSettings_t * self,
  float mContactPointPreserveLambdaMaxDistSq
);

long JoltC_PhysicsSettings_mNumVelocitySteps_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mNumVelocitySteps_Set(
  JoltC_PhysicsSettings_t * self,
  long mNumVelocitySteps
);

long JoltC_PhysicsSettings_mNumPositionSteps_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mNumPositionSteps_Set(
  JoltC_PhysicsSettings_t * self,
  long mNumPositionSteps
);

float JoltC_PhysicsSettings_mMinVelocityForRestitution_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mMinVelocityForRestitution_Set(
  JoltC_PhysicsSettings_t * self,
  float mMinVelocityForRestitution
);

float JoltC_PhysicsSettings_mTimeBeforeSleep_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mTimeBeforeSleep_Set(
  JoltC_PhysicsSettings_t * self,
  float mTimeBeforeSleep
);

float JoltC_PhysicsSettings_mPointVelocitySleepThreshold_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mPointVelocitySleepThreshold_Set(
  JoltC_PhysicsSettings_t * self,
  float mPointVelocitySleepThreshold
);

bool JoltC_PhysicsSettings_mDeterministicSimulation_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mDeterministicSimulation_Set(
  JoltC_PhysicsSettings_t * self,
  bool mDeterministicSimulation
);

bool JoltC_PhysicsSettings_mConstraintWarmStart_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mConstraintWarmStart_Set(
  JoltC_PhysicsSettings_t * self,
  bool mConstraintWarmStart
);

bool JoltC_PhysicsSettings_mUseBodyPairContactCache_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mUseBodyPairContactCache_Set(
  JoltC_PhysicsSettings_t * self,
  bool mUseBodyPairContactCache
);

bool JoltC_PhysicsSettings_mUseManifoldReduction_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mUseManifoldReduction_Set(
  JoltC_PhysicsSettings_t * self,
  bool mUseManifoldReduction
);

bool JoltC_PhysicsSettings_mUseLargeIslandSplitter_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mUseLargeIslandSplitter_Set(
  JoltC_PhysicsSettings_t * self,
  bool mUseLargeIslandSplitter
);

bool JoltC_PhysicsSettings_mAllowSleeping_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mAllowSleeping_Set(
  JoltC_PhysicsSettings_t * self,
  bool mAllowSleeping
);

bool JoltC_PhysicsSettings_mCheckActiveEdges_Get(
  JoltC_PhysicsSettings_t * self
);

void JoltC_PhysicsSettings_mCheckActiveEdges_Set(
  JoltC_PhysicsSettings_t * self,
  bool mCheckActiveEdges
);

//endregion


#ifdef __cplusplus
}
#endif

