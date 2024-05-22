#include "JoltC/JPC_PhysicsSettings.h"
#include "JoltC/JoltJS.h"

#ifdef __cplusplus
extern "C" {
#endif

//region constructors

JPC_PhysicsSettings_t * JPC_PhysicsSettings_new() {
  JPC_PhysicsSettings_t * cInstance = new JPC_PhysicsSettings_t();
  PhysicsSettings * cppInstance = new PhysicsSettings();
  cInstance->obj = cppInstance;
  return cInstance;
};

//endregion constructors

//region properties

long JPC_PhysicsSettings_mMaxInFlightBodyPairs_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  long result = selfCpp->mMaxInFlightBodyPairs;
  return result;
};

void JPC_PhysicsSettings_mMaxInFlightBodyPairs_Set(
  JPC_PhysicsSettings_t * self,
  long mMaxInFlightBodyPairs
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mMaxInFlightBodyPairs = mMaxInFlightBodyPairs;
};

long JPC_PhysicsSettings_mStepListenersBatchSize_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  long result = selfCpp->mStepListenersBatchSize;
  return result;
};

void JPC_PhysicsSettings_mStepListenersBatchSize_Set(
  JPC_PhysicsSettings_t * self,
  long mStepListenersBatchSize
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mStepListenersBatchSize = mStepListenersBatchSize;
};

long JPC_PhysicsSettings_mStepListenerBatchesPerJob_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  long result = selfCpp->mStepListenerBatchesPerJob;
  return result;
};

void JPC_PhysicsSettings_mStepListenerBatchesPerJob_Set(
  JPC_PhysicsSettings_t * self,
  long mStepListenerBatchesPerJob
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mStepListenerBatchesPerJob = mStepListenerBatchesPerJob;
};

float JPC_PhysicsSettings_mBaumgarte_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mBaumgarte;
  return result;
};

void JPC_PhysicsSettings_mBaumgarte_Set(
  JPC_PhysicsSettings_t * self,
  float mBaumgarte
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mBaumgarte = mBaumgarte;
};

float JPC_PhysicsSettings_mSpeculativeContactDistance_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mSpeculativeContactDistance;
  return result;
};

void JPC_PhysicsSettings_mSpeculativeContactDistance_Set(
  JPC_PhysicsSettings_t * self,
  float mSpeculativeContactDistance
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mSpeculativeContactDistance = mSpeculativeContactDistance;
};

float JPC_PhysicsSettings_mPenetrationSlop_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mPenetrationSlop;
  return result;
};

void JPC_PhysicsSettings_mPenetrationSlop_Set(
  JPC_PhysicsSettings_t * self,
  float mPenetrationSlop
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mPenetrationSlop = mPenetrationSlop;
};

float JPC_PhysicsSettings_mLinearCastThreshold_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mLinearCastThreshold;
  return result;
};

void JPC_PhysicsSettings_mLinearCastThreshold_Set(
  JPC_PhysicsSettings_t * self,
  float mLinearCastThreshold
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mLinearCastThreshold = mLinearCastThreshold;
};

float JPC_PhysicsSettings_mLinearCastMaxPenetration_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mLinearCastMaxPenetration;
  return result;
};

void JPC_PhysicsSettings_mLinearCastMaxPenetration_Set(
  JPC_PhysicsSettings_t * self,
  float mLinearCastMaxPenetration
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mLinearCastMaxPenetration = mLinearCastMaxPenetration;
};

float JPC_PhysicsSettings_mManifoldToleranceSq_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mManifoldToleranceSq;
  return result;
};

void JPC_PhysicsSettings_mManifoldToleranceSq_Set(
  JPC_PhysicsSettings_t * self,
  float mManifoldToleranceSq
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mManifoldToleranceSq = mManifoldToleranceSq;
};

float JPC_PhysicsSettings_mMaxPenetrationDistance_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mMaxPenetrationDistance;
  return result;
};

void JPC_PhysicsSettings_mMaxPenetrationDistance_Set(
  JPC_PhysicsSettings_t * self,
  float mMaxPenetrationDistance
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mMaxPenetrationDistance = mMaxPenetrationDistance;
};

float JPC_PhysicsSettings_mBodyPairCacheMaxDeltaPositionSq_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mBodyPairCacheMaxDeltaPositionSq;
  return result;
};

void JPC_PhysicsSettings_mBodyPairCacheMaxDeltaPositionSq_Set(
  JPC_PhysicsSettings_t * self,
  float mBodyPairCacheMaxDeltaPositionSq
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mBodyPairCacheMaxDeltaPositionSq = mBodyPairCacheMaxDeltaPositionSq;
};

float JPC_PhysicsSettings_mBodyPairCacheCosMaxDeltaRotationDiv2_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mBodyPairCacheCosMaxDeltaRotationDiv2;
  return result;
};

void JPC_PhysicsSettings_mBodyPairCacheCosMaxDeltaRotationDiv2_Set(
  JPC_PhysicsSettings_t * self,
  float mBodyPairCacheCosMaxDeltaRotationDiv2
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mBodyPairCacheCosMaxDeltaRotationDiv2 = mBodyPairCacheCosMaxDeltaRotationDiv2;
};

float JPC_PhysicsSettings_mContactNormalCosMaxDeltaRotation_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mContactNormalCosMaxDeltaRotation;
  return result;
};

void JPC_PhysicsSettings_mContactNormalCosMaxDeltaRotation_Set(
  JPC_PhysicsSettings_t * self,
  float mContactNormalCosMaxDeltaRotation
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mContactNormalCosMaxDeltaRotation = mContactNormalCosMaxDeltaRotation;
};

float JPC_PhysicsSettings_mContactPointPreserveLambdaMaxDistSq_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mContactPointPreserveLambdaMaxDistSq;
  return result;
};

void JPC_PhysicsSettings_mContactPointPreserveLambdaMaxDistSq_Set(
  JPC_PhysicsSettings_t * self,
  float mContactPointPreserveLambdaMaxDistSq
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mContactPointPreserveLambdaMaxDistSq = mContactPointPreserveLambdaMaxDistSq;
};

long JPC_PhysicsSettings_mNumVelocitySteps_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  long result = selfCpp->mNumVelocitySteps;
  return result;
};

void JPC_PhysicsSettings_mNumVelocitySteps_Set(
  JPC_PhysicsSettings_t * self,
  long mNumVelocitySteps
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mNumVelocitySteps = mNumVelocitySteps;
};

long JPC_PhysicsSettings_mNumPositionSteps_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  long result = selfCpp->mNumPositionSteps;
  return result;
};

void JPC_PhysicsSettings_mNumPositionSteps_Set(
  JPC_PhysicsSettings_t * self,
  long mNumPositionSteps
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mNumPositionSteps = mNumPositionSteps;
};

float JPC_PhysicsSettings_mMinVelocityForRestitution_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mMinVelocityForRestitution;
  return result;
};

void JPC_PhysicsSettings_mMinVelocityForRestitution_Set(
  JPC_PhysicsSettings_t * self,
  float mMinVelocityForRestitution
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mMinVelocityForRestitution = mMinVelocityForRestitution;
};

float JPC_PhysicsSettings_mTimeBeforeSleep_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mTimeBeforeSleep;
  return result;
};

void JPC_PhysicsSettings_mTimeBeforeSleep_Set(
  JPC_PhysicsSettings_t * self,
  float mTimeBeforeSleep
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mTimeBeforeSleep = mTimeBeforeSleep;
};

float JPC_PhysicsSettings_mPointVelocitySleepThreshold_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  float result = selfCpp->mPointVelocitySleepThreshold;
  return result;
};

void JPC_PhysicsSettings_mPointVelocitySleepThreshold_Set(
  JPC_PhysicsSettings_t * self,
  float mPointVelocitySleepThreshold
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mPointVelocitySleepThreshold = mPointVelocitySleepThreshold;
};

bool JPC_PhysicsSettings_mDeterministicSimulation_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mDeterministicSimulation;
  return result;
};

void JPC_PhysicsSettings_mDeterministicSimulation_Set(
  JPC_PhysicsSettings_t * self,
  bool mDeterministicSimulation
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mDeterministicSimulation = mDeterministicSimulation;
};

bool JPC_PhysicsSettings_mConstraintWarmStart_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mConstraintWarmStart;
  return result;
};

void JPC_PhysicsSettings_mConstraintWarmStart_Set(
  JPC_PhysicsSettings_t * self,
  bool mConstraintWarmStart
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mConstraintWarmStart = mConstraintWarmStart;
};

bool JPC_PhysicsSettings_mUseBodyPairContactCache_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mUseBodyPairContactCache;
  return result;
};

void JPC_PhysicsSettings_mUseBodyPairContactCache_Set(
  JPC_PhysicsSettings_t * self,
  bool mUseBodyPairContactCache
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mUseBodyPairContactCache = mUseBodyPairContactCache;
};

bool JPC_PhysicsSettings_mUseManifoldReduction_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mUseManifoldReduction;
  return result;
};

void JPC_PhysicsSettings_mUseManifoldReduction_Set(
  JPC_PhysicsSettings_t * self,
  bool mUseManifoldReduction
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mUseManifoldReduction = mUseManifoldReduction;
};

bool JPC_PhysicsSettings_mUseLargeIslandSplitter_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mUseLargeIslandSplitter;
  return result;
};

void JPC_PhysicsSettings_mUseLargeIslandSplitter_Set(
  JPC_PhysicsSettings_t * self,
  bool mUseLargeIslandSplitter
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mUseLargeIslandSplitter = mUseLargeIslandSplitter;
};

bool JPC_PhysicsSettings_mAllowSleeping_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mAllowSleeping;
  return result;
};

void JPC_PhysicsSettings_mAllowSleeping_Set(
  JPC_PhysicsSettings_t * self,
  bool mAllowSleeping
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mAllowSleeping = mAllowSleeping;
};

bool JPC_PhysicsSettings_mCheckActiveEdges_Get(
  JPC_PhysicsSettings_t * self
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  bool result = selfCpp->mCheckActiveEdges;
  return result;
};

void JPC_PhysicsSettings_mCheckActiveEdges_Set(
  JPC_PhysicsSettings_t * self,
  bool mCheckActiveEdges
) {
  PhysicsSettings * selfCpp = static_cast<PhysicsSettings *>(self->obj);
  selfCpp->mCheckActiveEdges = mCheckActiveEdges;
};

//endregion properties

#ifdef __cplusplus
}
#endif

