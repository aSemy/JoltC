#pragma once

#include "JoltC/JoltC_types.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_PhysicsSettings_t * JPC_PhysicsSettings_new();

//endregion constructors

//region properties

long JPC_PhysicsSettings_mMaxInFlightBodyPairs_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mMaxInFlightBodyPairs_Set(
  JPC_PhysicsSettings_t * self,
  long mMaxInFlightBodyPairs
);

long JPC_PhysicsSettings_mStepListenersBatchSize_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mStepListenersBatchSize_Set(
  JPC_PhysicsSettings_t * self,
  long mStepListenersBatchSize
);

long JPC_PhysicsSettings_mStepListenerBatchesPerJob_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mStepListenerBatchesPerJob_Set(
  JPC_PhysicsSettings_t * self,
  long mStepListenerBatchesPerJob
);

float JPC_PhysicsSettings_mBaumgarte_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mBaumgarte_Set(
  JPC_PhysicsSettings_t * self,
  float mBaumgarte
);

float JPC_PhysicsSettings_mSpeculativeContactDistance_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mSpeculativeContactDistance_Set(
  JPC_PhysicsSettings_t * self,
  float mSpeculativeContactDistance
);

float JPC_PhysicsSettings_mPenetrationSlop_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mPenetrationSlop_Set(
  JPC_PhysicsSettings_t * self,
  float mPenetrationSlop
);

float JPC_PhysicsSettings_mLinearCastThreshold_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mLinearCastThreshold_Set(
  JPC_PhysicsSettings_t * self,
  float mLinearCastThreshold
);

float JPC_PhysicsSettings_mLinearCastMaxPenetration_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mLinearCastMaxPenetration_Set(
  JPC_PhysicsSettings_t * self,
  float mLinearCastMaxPenetration
);

float JPC_PhysicsSettings_mManifoldToleranceSq_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mManifoldToleranceSq_Set(
  JPC_PhysicsSettings_t * self,
  float mManifoldToleranceSq
);

float JPC_PhysicsSettings_mMaxPenetrationDistance_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mMaxPenetrationDistance_Set(
  JPC_PhysicsSettings_t * self,
  float mMaxPenetrationDistance
);

float JPC_PhysicsSettings_mBodyPairCacheMaxDeltaPositionSq_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mBodyPairCacheMaxDeltaPositionSq_Set(
  JPC_PhysicsSettings_t * self,
  float mBodyPairCacheMaxDeltaPositionSq
);

float JPC_PhysicsSettings_mBodyPairCacheCosMaxDeltaRotationDiv2_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mBodyPairCacheCosMaxDeltaRotationDiv2_Set(
  JPC_PhysicsSettings_t * self,
  float mBodyPairCacheCosMaxDeltaRotationDiv2
);

float JPC_PhysicsSettings_mContactNormalCosMaxDeltaRotation_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mContactNormalCosMaxDeltaRotation_Set(
  JPC_PhysicsSettings_t * self,
  float mContactNormalCosMaxDeltaRotation
);

float JPC_PhysicsSettings_mContactPointPreserveLambdaMaxDistSq_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mContactPointPreserveLambdaMaxDistSq_Set(
  JPC_PhysicsSettings_t * self,
  float mContactPointPreserveLambdaMaxDistSq
);

long JPC_PhysicsSettings_mNumVelocitySteps_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mNumVelocitySteps_Set(
  JPC_PhysicsSettings_t * self,
  long mNumVelocitySteps
);

long JPC_PhysicsSettings_mNumPositionSteps_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mNumPositionSteps_Set(
  JPC_PhysicsSettings_t * self,
  long mNumPositionSteps
);

float JPC_PhysicsSettings_mMinVelocityForRestitution_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mMinVelocityForRestitution_Set(
  JPC_PhysicsSettings_t * self,
  float mMinVelocityForRestitution
);

float JPC_PhysicsSettings_mTimeBeforeSleep_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mTimeBeforeSleep_Set(
  JPC_PhysicsSettings_t * self,
  float mTimeBeforeSleep
);

float JPC_PhysicsSettings_mPointVelocitySleepThreshold_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mPointVelocitySleepThreshold_Set(
  JPC_PhysicsSettings_t * self,
  float mPointVelocitySleepThreshold
);

bool JPC_PhysicsSettings_mDeterministicSimulation_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mDeterministicSimulation_Set(
  JPC_PhysicsSettings_t * self,
  bool mDeterministicSimulation
);

bool JPC_PhysicsSettings_mConstraintWarmStart_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mConstraintWarmStart_Set(
  JPC_PhysicsSettings_t * self,
  bool mConstraintWarmStart
);

bool JPC_PhysicsSettings_mUseBodyPairContactCache_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mUseBodyPairContactCache_Set(
  JPC_PhysicsSettings_t * self,
  bool mUseBodyPairContactCache
);

bool JPC_PhysicsSettings_mUseManifoldReduction_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mUseManifoldReduction_Set(
  JPC_PhysicsSettings_t * self,
  bool mUseManifoldReduction
);

bool JPC_PhysicsSettings_mUseLargeIslandSplitter_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mUseLargeIslandSplitter_Set(
  JPC_PhysicsSettings_t * self,
  bool mUseLargeIslandSplitter
);

bool JPC_PhysicsSettings_mAllowSleeping_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mAllowSleeping_Set(
  JPC_PhysicsSettings_t * self,
  bool mAllowSleeping
);

bool JPC_PhysicsSettings_mCheckActiveEdges_Get(
  JPC_PhysicsSettings_t * self
);

void JPC_PhysicsSettings_mCheckActiveEdges_Set(
  JPC_PhysicsSettings_t * self,
  bool mCheckActiveEdges
);

//endregion properties


#ifdef __cplusplus
}
#endif

