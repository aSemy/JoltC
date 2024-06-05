#include "JoltC/JoltC_PhysicsSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JoltC_PhysicsSettings_t * JoltC_PhysicsSettings_new() {
  JoltC_PhysicsSettings_t * cInstance = new JoltC_PhysicsSettings_t();
  PhysicsSettings * cppInstance = new PhysicsSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion

//region properties

long JoltC_PhysicsSettings_mMaxInFlightBodyPairs_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  long result = selfCpp->mMaxInFlightBodyPairs;
  return result;
};

void JoltC_PhysicsSettings_mMaxInFlightBodyPairs_Set(
  JoltC_PhysicsSettings_t * self,
  long mMaxInFlightBodyPairs
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mMaxInFlightBodyPairs = mMaxInFlightBodyPairs;
};

long JoltC_PhysicsSettings_mStepListenersBatchSize_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  long result = selfCpp->mStepListenersBatchSize;
  return result;
};

void JoltC_PhysicsSettings_mStepListenersBatchSize_Set(
  JoltC_PhysicsSettings_t * self,
  long mStepListenersBatchSize
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mStepListenersBatchSize = mStepListenersBatchSize;
};

long JoltC_PhysicsSettings_mStepListenerBatchesPerJob_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  long result = selfCpp->mStepListenerBatchesPerJob;
  return result;
};

void JoltC_PhysicsSettings_mStepListenerBatchesPerJob_Set(
  JoltC_PhysicsSettings_t * self,
  long mStepListenerBatchesPerJob
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mStepListenerBatchesPerJob = mStepListenerBatchesPerJob;
};

float JoltC_PhysicsSettings_mBaumgarte_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mBaumgarte;
  return result;
};

void JoltC_PhysicsSettings_mBaumgarte_Set(
  JoltC_PhysicsSettings_t * self,
  float mBaumgarte
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mBaumgarte = mBaumgarte;
};

float JoltC_PhysicsSettings_mSpeculativeContactDistance_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mSpeculativeContactDistance;
  return result;
};

void JoltC_PhysicsSettings_mSpeculativeContactDistance_Set(
  JoltC_PhysicsSettings_t * self,
  float mSpeculativeContactDistance
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mSpeculativeContactDistance = mSpeculativeContactDistance;
};

float JoltC_PhysicsSettings_mPenetrationSlop_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mPenetrationSlop;
  return result;
};

void JoltC_PhysicsSettings_mPenetrationSlop_Set(
  JoltC_PhysicsSettings_t * self,
  float mPenetrationSlop
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mPenetrationSlop = mPenetrationSlop;
};

float JoltC_PhysicsSettings_mLinearCastThreshold_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mLinearCastThreshold;
  return result;
};

void JoltC_PhysicsSettings_mLinearCastThreshold_Set(
  JoltC_PhysicsSettings_t * self,
  float mLinearCastThreshold
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mLinearCastThreshold = mLinearCastThreshold;
};

float JoltC_PhysicsSettings_mLinearCastMaxPenetration_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mLinearCastMaxPenetration;
  return result;
};

void JoltC_PhysicsSettings_mLinearCastMaxPenetration_Set(
  JoltC_PhysicsSettings_t * self,
  float mLinearCastMaxPenetration
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mLinearCastMaxPenetration = mLinearCastMaxPenetration;
};

float JoltC_PhysicsSettings_mManifoldToleranceSq_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mManifoldToleranceSq;
  return result;
};

void JoltC_PhysicsSettings_mManifoldToleranceSq_Set(
  JoltC_PhysicsSettings_t * self,
  float mManifoldToleranceSq
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mManifoldToleranceSq = mManifoldToleranceSq;
};

float JoltC_PhysicsSettings_mMaxPenetrationDistance_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mMaxPenetrationDistance;
  return result;
};

void JoltC_PhysicsSettings_mMaxPenetrationDistance_Set(
  JoltC_PhysicsSettings_t * self,
  float mMaxPenetrationDistance
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mMaxPenetrationDistance = mMaxPenetrationDistance;
};

float JoltC_PhysicsSettings_mBodyPairCacheMaxDeltaPositionSq_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mBodyPairCacheMaxDeltaPositionSq;
  return result;
};

void JoltC_PhysicsSettings_mBodyPairCacheMaxDeltaPositionSq_Set(
  JoltC_PhysicsSettings_t * self,
  float mBodyPairCacheMaxDeltaPositionSq
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mBodyPairCacheMaxDeltaPositionSq = mBodyPairCacheMaxDeltaPositionSq;
};

float JoltC_PhysicsSettings_mBodyPairCacheCosMaxDeltaRotationDiv2_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mBodyPairCacheCosMaxDeltaRotationDiv2;
  return result;
};

void JoltC_PhysicsSettings_mBodyPairCacheCosMaxDeltaRotationDiv2_Set(
  JoltC_PhysicsSettings_t * self,
  float mBodyPairCacheCosMaxDeltaRotationDiv2
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mBodyPairCacheCosMaxDeltaRotationDiv2 = mBodyPairCacheCosMaxDeltaRotationDiv2;
};

float JoltC_PhysicsSettings_mContactNormalCosMaxDeltaRotation_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mContactNormalCosMaxDeltaRotation;
  return result;
};

void JoltC_PhysicsSettings_mContactNormalCosMaxDeltaRotation_Set(
  JoltC_PhysicsSettings_t * self,
  float mContactNormalCosMaxDeltaRotation
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mContactNormalCosMaxDeltaRotation = mContactNormalCosMaxDeltaRotation;
};

float JoltC_PhysicsSettings_mContactPointPreserveLambdaMaxDistSq_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mContactPointPreserveLambdaMaxDistSq;
  return result;
};

void JoltC_PhysicsSettings_mContactPointPreserveLambdaMaxDistSq_Set(
  JoltC_PhysicsSettings_t * self,
  float mContactPointPreserveLambdaMaxDistSq
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mContactPointPreserveLambdaMaxDistSq = mContactPointPreserveLambdaMaxDistSq;
};

long JoltC_PhysicsSettings_mNumVelocitySteps_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  long result = selfCpp->mNumVelocitySteps;
  return result;
};

void JoltC_PhysicsSettings_mNumVelocitySteps_Set(
  JoltC_PhysicsSettings_t * self,
  long mNumVelocitySteps
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mNumVelocitySteps = mNumVelocitySteps;
};

long JoltC_PhysicsSettings_mNumPositionSteps_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  long result = selfCpp->mNumPositionSteps;
  return result;
};

void JoltC_PhysicsSettings_mNumPositionSteps_Set(
  JoltC_PhysicsSettings_t * self,
  long mNumPositionSteps
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mNumPositionSteps = mNumPositionSteps;
};

float JoltC_PhysicsSettings_mMinVelocityForRestitution_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mMinVelocityForRestitution;
  return result;
};

void JoltC_PhysicsSettings_mMinVelocityForRestitution_Set(
  JoltC_PhysicsSettings_t * self,
  float mMinVelocityForRestitution
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mMinVelocityForRestitution = mMinVelocityForRestitution;
};

float JoltC_PhysicsSettings_mTimeBeforeSleep_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mTimeBeforeSleep;
  return result;
};

void JoltC_PhysicsSettings_mTimeBeforeSleep_Set(
  JoltC_PhysicsSettings_t * self,
  float mTimeBeforeSleep
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mTimeBeforeSleep = mTimeBeforeSleep;
};

float JoltC_PhysicsSettings_mPointVelocitySleepThreshold_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mPointVelocitySleepThreshold;
  return result;
};

void JoltC_PhysicsSettings_mPointVelocitySleepThreshold_Set(
  JoltC_PhysicsSettings_t * self,
  float mPointVelocitySleepThreshold
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mPointVelocitySleepThreshold = mPointVelocitySleepThreshold;
};

bool JoltC_PhysicsSettings_mDeterministicSimulation_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mDeterministicSimulation;
  return result;
};

void JoltC_PhysicsSettings_mDeterministicSimulation_Set(
  JoltC_PhysicsSettings_t * self,
  bool mDeterministicSimulation
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mDeterministicSimulation = mDeterministicSimulation;
};

bool JoltC_PhysicsSettings_mConstraintWarmStart_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mConstraintWarmStart;
  return result;
};

void JoltC_PhysicsSettings_mConstraintWarmStart_Set(
  JoltC_PhysicsSettings_t * self,
  bool mConstraintWarmStart
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mConstraintWarmStart = mConstraintWarmStart;
};

bool JoltC_PhysicsSettings_mUseBodyPairContactCache_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mUseBodyPairContactCache;
  return result;
};

void JoltC_PhysicsSettings_mUseBodyPairContactCache_Set(
  JoltC_PhysicsSettings_t * self,
  bool mUseBodyPairContactCache
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mUseBodyPairContactCache = mUseBodyPairContactCache;
};

bool JoltC_PhysicsSettings_mUseManifoldReduction_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mUseManifoldReduction;
  return result;
};

void JoltC_PhysicsSettings_mUseManifoldReduction_Set(
  JoltC_PhysicsSettings_t * self,
  bool mUseManifoldReduction
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mUseManifoldReduction = mUseManifoldReduction;
};

bool JoltC_PhysicsSettings_mUseLargeIslandSplitter_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mUseLargeIslandSplitter;
  return result;
};

void JoltC_PhysicsSettings_mUseLargeIslandSplitter_Set(
  JoltC_PhysicsSettings_t * self,
  bool mUseLargeIslandSplitter
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mUseLargeIslandSplitter = mUseLargeIslandSplitter;
};

bool JoltC_PhysicsSettings_mAllowSleeping_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mAllowSleeping;
  return result;
};

void JoltC_PhysicsSettings_mAllowSleeping_Set(
  JoltC_PhysicsSettings_t * self,
  bool mAllowSleeping
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mAllowSleeping = mAllowSleeping;
};

bool JoltC_PhysicsSettings_mCheckActiveEdges_Get(
  JoltC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mCheckActiveEdges;
  return result;
};

void JoltC_PhysicsSettings_mCheckActiveEdges_Set(
  JoltC_PhysicsSettings_t * self,
  bool mCheckActiveEdges
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mCheckActiveEdges = mCheckActiveEdges;
};

//endregion

#ifdef __cplusplus
}
#endif

