#pragma once

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

struct JoltC_AABox {
  void *obj;
};
typedef struct JoltC_AABox JoltC_AABox_t;

struct JoltC_AABoxCast {
  void *obj;
};
typedef struct JoltC_AABoxCast JoltC_AABoxCast_t;

struct JoltC_ArrayCollidePointResult {
  void *obj;
};
typedef struct JoltC_ArrayCollidePointResult JoltC_ArrayCollidePointResult_t;

struct JoltC_ArrayCollideShapeResult {
  void *obj;
};
typedef struct JoltC_ArrayCollideShapeResult JoltC_ArrayCollideShapeResult_t;

struct JoltC_ArrayFloat {
  void *obj;
};
typedef struct JoltC_ArrayFloat JoltC_ArrayFloat_t;

struct JoltC_ArrayMat44 {
  void *obj;
};
typedef struct JoltC_ArrayMat44 JoltC_ArrayMat44_t;

struct JoltC_ArrayRagdollAdditionalConstraint {
  void *obj;
};
typedef struct JoltC_ArrayRagdollAdditionalConstraint JoltC_ArrayRagdollAdditionalConstraint_t;

struct JoltC_ArrayRagdollPart {
  void *obj;
};
typedef struct JoltC_ArrayRagdollPart JoltC_ArrayRagdollPart_t;

struct JoltC_ArrayRayCastResult {
  void *obj;
};
typedef struct JoltC_ArrayRayCastResult JoltC_ArrayRayCastResult_t;

struct JoltC_ArrayShapeCastResult {
  void *obj;
};
typedef struct JoltC_ArrayShapeCastResult JoltC_ArrayShapeCastResult_t;

struct JoltC_ArraySkeletonAnimatedJoint {
  void *obj;
};
typedef struct JoltC_ArraySkeletonAnimatedJoint JoltC_ArraySkeletonAnimatedJoint_t;

struct JoltC_ArraySkeletonKeyframe {
  void *obj;
};
typedef struct JoltC_ArraySkeletonKeyframe JoltC_ArraySkeletonKeyframe_t;

struct JoltC_ArraySoftBodySharedSettingsDihedralBend {
  void *obj;
};
typedef struct JoltC_ArraySoftBodySharedSettingsDihedralBend JoltC_ArraySoftBodySharedSettingsDihedralBend_t;

struct JoltC_ArraySoftBodySharedSettingsEdge {
  void *obj;
};
typedef struct JoltC_ArraySoftBodySharedSettingsEdge JoltC_ArraySoftBodySharedSettingsEdge_t;

struct JoltC_ArraySoftBodySharedSettingsFace {
  void *obj;
};
typedef struct JoltC_ArraySoftBodySharedSettingsFace JoltC_ArraySoftBodySharedSettingsFace_t;

struct JoltC_ArraySoftBodySharedSettingsInvBind {
  void *obj;
};
typedef struct JoltC_ArraySoftBodySharedSettingsInvBind JoltC_ArraySoftBodySharedSettingsInvBind_t;

struct JoltC_ArraySoftBodySharedSettingsLRA {
  void *obj;
};
typedef struct JoltC_ArraySoftBodySharedSettingsLRA JoltC_ArraySoftBodySharedSettingsLRA_t;

struct JoltC_ArraySoftBodySharedSettingsSkinned {
  void *obj;
};
typedef struct JoltC_ArraySoftBodySharedSettingsSkinned JoltC_ArraySoftBodySharedSettingsSkinned_t;

struct JoltC_ArraySoftBodySharedSettingsVertex {
  void *obj;
};
typedef struct JoltC_ArraySoftBodySharedSettingsVertex JoltC_ArraySoftBodySharedSettingsVertex_t;

struct JoltC_ArraySoftBodySharedSettingsVertexAttributes {
  void *obj;
};
typedef struct JoltC_ArraySoftBodySharedSettingsVertexAttributes JoltC_ArraySoftBodySharedSettingsVertexAttributes_t;

struct JoltC_ArraySoftBodySharedSettingsVolume {
  void *obj;
};
typedef struct JoltC_ArraySoftBodySharedSettingsVolume JoltC_ArraySoftBodySharedSettingsVolume_t;

struct JoltC_ArraySoftBodyVertex {
  void *obj;
};
typedef struct JoltC_ArraySoftBodyVertex JoltC_ArraySoftBodyVertex_t;

struct JoltC_ArrayUint {
  void *obj;
};
typedef struct JoltC_ArrayUint JoltC_ArrayUint_t;

struct JoltC_ArrayUint8 {
  void *obj;
};
typedef struct JoltC_ArrayUint8 JoltC_ArrayUint8_t;

struct JoltC_ArrayVec3 {
  void *obj;
};
typedef struct JoltC_ArrayVec3 JoltC_ArrayVec3_t;

struct JoltC_ArrayVehicleAntiRollBar {
  void *obj;
};
typedef struct JoltC_ArrayVehicleAntiRollBar JoltC_ArrayVehicleAntiRollBar_t;

struct JoltC_ArrayVehicleDifferentialSettings {
  void *obj;
};
typedef struct JoltC_ArrayVehicleDifferentialSettings JoltC_ArrayVehicleDifferentialSettings_t;

struct JoltC_ArrayWheelSettings {
  void *obj;
};
typedef struct JoltC_ArrayWheelSettings JoltC_ArrayWheelSettings_t;

struct JoltC_Body {
  void *obj;
};
typedef struct JoltC_Body JoltC_Body_t;

struct JoltC_BodyActivationListener {
  void *obj;
};
typedef struct JoltC_BodyActivationListener JoltC_BodyActivationListener_t;

struct JoltC_BodyCreationSettings {
  void *obj;
};
typedef struct JoltC_BodyCreationSettings JoltC_BodyCreationSettings_t;

struct JoltC_BodyFilter {
  void *obj;
};
typedef struct JoltC_BodyFilter JoltC_BodyFilter_t;

struct JoltC_BodyID {
  void *obj;
};
typedef struct JoltC_BodyID JoltC_BodyID_t;

struct JoltC_BodyIDVector {
  void *obj;
};
typedef struct JoltC_BodyIDVector JoltC_BodyIDVector_t;

struct JoltC_BodyInterface {
  void *obj;
};
typedef struct JoltC_BodyInterface JoltC_BodyInterface_t;

struct JoltC_BodyLockInterface {
  void *obj;
};
typedef struct JoltC_BodyLockInterface JoltC_BodyLockInterface_t;

struct JoltC_BodyLockInterfaceLocking {
  void *obj;
  struct JoltC_BodyLockInterface *superObj;
};
typedef struct JoltC_BodyLockInterfaceLocking JoltC_BodyLockInterfaceLocking_t;

struct JoltC_BodyLockInterfaceNoLock {
  void *obj;
  struct JoltC_BodyLockInterface *superObj;
};
typedef struct JoltC_BodyLockInterfaceNoLock JoltC_BodyLockInterfaceNoLock_t;

struct JoltC_BoxShape {
  void *obj;
  struct JoltC_ConvexShape *superObj;
};
typedef struct JoltC_BoxShape JoltC_BoxShape_t;

struct JoltC_BoxShapeSettings {
  void *obj;
  struct JoltC_ConvexShapeSettings *superObj;
};
typedef struct JoltC_BoxShapeSettings JoltC_BoxShapeSettings_t;

struct JoltC_BroadPhaseCastResult {
  void *obj;
};
typedef struct JoltC_BroadPhaseCastResult JoltC_BroadPhaseCastResult_t;

struct JoltC_BroadPhaseLayer {
  void *obj;
};
typedef struct JoltC_BroadPhaseLayer JoltC_BroadPhaseLayer_t;

struct JoltC_BroadPhaseLayerFilter {
  void *obj;
};
typedef struct JoltC_BroadPhaseLayerFilter JoltC_BroadPhaseLayerFilter_t;

struct JoltC_BroadPhaseLayerInterface {
  void *obj;
};
typedef struct JoltC_BroadPhaseLayerInterface JoltC_BroadPhaseLayerInterface_t;

struct JoltC_BroadPhaseLayerInterfaceEm {
  void *obj;
  struct JoltC_BroadPhaseLayerInterface *superObj;
};
typedef struct JoltC_BroadPhaseLayerInterfaceEm JoltC_BroadPhaseLayerInterfaceEm_t;

struct JoltC_BroadPhaseLayerInterfaceMask {
  void *obj;
  struct JoltC_BroadPhaseLayerInterface *superObj;
};
typedef struct JoltC_BroadPhaseLayerInterfaceMask JoltC_BroadPhaseLayerInterfaceMask_t;

struct JoltC_BroadPhaseLayerInterfaceTable {
  void *obj;
  struct JoltC_BroadPhaseLayerInterface *superObj;
};
typedef struct JoltC_BroadPhaseLayerInterfaceTable JoltC_BroadPhaseLayerInterfaceTable_t;

struct JoltC_BroadPhaseQuery {
  void *obj;
};
typedef struct JoltC_BroadPhaseQuery JoltC_BroadPhaseQuery_t;

struct JoltC_CapsuleShape {
  void *obj;
  struct JoltC_ConvexShape *superObj;
};
typedef struct JoltC_CapsuleShape JoltC_CapsuleShape_t;

struct JoltC_CapsuleShapeSettings {
  void *obj;
  struct JoltC_ConvexShapeSettings *superObj;
};
typedef struct JoltC_CapsuleShapeSettings JoltC_CapsuleShapeSettings_t;

struct JoltC_CastRayAllHitCollisionCollector {
  void *obj;
  struct JoltC_CastRayCollector *superObj;
};
typedef struct JoltC_CastRayAllHitCollisionCollector JoltC_CastRayAllHitCollisionCollector_t;

struct JoltC_CastRayAnyHitCollisionCollector {
  void *obj;
  struct JoltC_CastRayCollector *superObj;
};
typedef struct JoltC_CastRayAnyHitCollisionCollector JoltC_CastRayAnyHitCollisionCollector_t;

struct JoltC_CastRayClosestHitCollisionCollector {
  void *obj;
  struct JoltC_CastRayCollector *superObj;
};
typedef struct JoltC_CastRayClosestHitCollisionCollector JoltC_CastRayClosestHitCollisionCollector_t;

struct JoltC_CastRayCollector {
  void *obj;
};
typedef struct JoltC_CastRayCollector JoltC_CastRayCollector_t;

struct JoltC_CastShapeAllHitCollisionCollector {
  void *obj;
  struct JoltC_CastShapeCollector *superObj;
};
typedef struct JoltC_CastShapeAllHitCollisionCollector JoltC_CastShapeAllHitCollisionCollector_t;

struct JoltC_CastShapeAnyHitCollisionCollector {
  void *obj;
  struct JoltC_CastShapeCollector *superObj;
};
typedef struct JoltC_CastShapeAnyHitCollisionCollector JoltC_CastShapeAnyHitCollisionCollector_t;

struct JoltC_CastShapeBodyCollector {
  void *obj;
};
typedef struct JoltC_CastShapeBodyCollector JoltC_CastShapeBodyCollector_t;

struct JoltC_CastShapeClosestHitCollisionCollector {
  void *obj;
  struct JoltC_CastShapeCollector *superObj;
};
typedef struct JoltC_CastShapeClosestHitCollisionCollector JoltC_CastShapeClosestHitCollisionCollector_t;

struct JoltC_CastShapeCollector {
  void *obj;
};
typedef struct JoltC_CastShapeCollector JoltC_CastShapeCollector_t;

struct JoltC_CharacterBase {
  void *obj;
};
typedef struct JoltC_CharacterBase JoltC_CharacterBase_t;

struct JoltC_CharacterBaseSettings {
  void *obj;
};
typedef struct JoltC_CharacterBaseSettings JoltC_CharacterBaseSettings_t;

struct JoltC_CharacterContactListener {
  void *obj;
};
typedef struct JoltC_CharacterContactListener JoltC_CharacterContactListener_t;

struct JoltC_CharacterContactListenerEm {
  void *obj;
  struct JoltC_CharacterContactListener *superObj;
};
typedef struct JoltC_CharacterContactListenerEm JoltC_CharacterContactListenerEm_t;

struct JoltC_CharacterContactSettings {
  void *obj;
};
typedef struct JoltC_CharacterContactSettings JoltC_CharacterContactSettings_t;

struct JoltC_CharacterVirtual {
  void *obj;
  struct JoltC_CharacterBase *superObj;
};
typedef struct JoltC_CharacterVirtual JoltC_CharacterVirtual_t;

struct JoltC_CharacterVirtual_ExtendedUpdateSettings {
  void *obj;
};
typedef struct JoltC_CharacterVirtual_ExtendedUpdateSettings JoltC_CharacterVirtual_ExtendedUpdateSettings_t;

struct JoltC_CharacterVirtualSettings {
  void *obj;
  struct JoltC_CharacterBaseSettings *superObj;
};
typedef struct JoltC_CharacterVirtualSettings JoltC_CharacterVirtualSettings_t;

struct JoltC_CollidePointAllHitCollisionCollector {
  void *obj;
  struct JoltC_CollidePointCollector *superObj;
};
typedef struct JoltC_CollidePointAllHitCollisionCollector JoltC_CollidePointAllHitCollisionCollector_t;

struct JoltC_CollidePointAnyHitCollisionCollector {
  void *obj;
  struct JoltC_CollidePointCollector *superObj;
};
typedef struct JoltC_CollidePointAnyHitCollisionCollector JoltC_CollidePointAnyHitCollisionCollector_t;

struct JoltC_CollidePointClosestHitCollisionCollector {
  void *obj;
  struct JoltC_CollidePointCollector *superObj;
};
typedef struct JoltC_CollidePointClosestHitCollisionCollector JoltC_CollidePointClosestHitCollisionCollector_t;

struct JoltC_CollidePointCollector {
  void *obj;
};
typedef struct JoltC_CollidePointCollector JoltC_CollidePointCollector_t;

struct JoltC_CollidePointResult {
  void *obj;
};
typedef struct JoltC_CollidePointResult JoltC_CollidePointResult_t;

struct JoltC_CollideSettingsBase {
  void *obj;
};
typedef struct JoltC_CollideSettingsBase JoltC_CollideSettingsBase_t;

struct JoltC_CollideShapeAllHitCollisionCollector {
  void *obj;
  struct JoltC_CollideShapeCollector *superObj;
};
typedef struct JoltC_CollideShapeAllHitCollisionCollector JoltC_CollideShapeAllHitCollisionCollector_t;

struct JoltC_CollideShapeAnyHitCollisionCollector {
  void *obj;
  struct JoltC_CollideShapeCollector *superObj;
};
typedef struct JoltC_CollideShapeAnyHitCollisionCollector JoltC_CollideShapeAnyHitCollisionCollector_t;

struct JoltC_CollideShapeBodyCollector {
  void *obj;
};
typedef struct JoltC_CollideShapeBodyCollector JoltC_CollideShapeBodyCollector_t;

struct JoltC_CollideShapeClosestHitCollisionCollector {
  void *obj;
  struct JoltC_CollideShapeCollector *superObj;
};
typedef struct JoltC_CollideShapeClosestHitCollisionCollector JoltC_CollideShapeClosestHitCollisionCollector_t;

struct JoltC_CollideShapeCollector {
  void *obj;
};
typedef struct JoltC_CollideShapeCollector JoltC_CollideShapeCollector_t;

struct JoltC_CollideShapeResult {
  void *obj;
};
typedef struct JoltC_CollideShapeResult JoltC_CollideShapeResult_t;

struct JoltC_CollideShapeResultFace {
  void *obj;
};
typedef struct JoltC_CollideShapeResultFace JoltC_CollideShapeResultFace_t;

struct JoltC_CollideShapeSettings {
  void *obj;
  struct JoltC_CollideSettingsBase *superObj;
};
typedef struct JoltC_CollideShapeSettings JoltC_CollideShapeSettings_t;

struct JoltC_CollisionGroup {
  void *obj;
};
typedef struct JoltC_CollisionGroup JoltC_CollisionGroup_t;

struct JoltC_CompoundShape {
  void *obj;
  struct JoltC_Shape *superObj;
};
typedef struct JoltC_CompoundShape JoltC_CompoundShape_t;

struct JoltC_CompoundShapeSubShape {
  void *obj;
};
typedef struct JoltC_CompoundShapeSubShape JoltC_CompoundShapeSubShape_t;

struct JoltC_ConeConstraint {
  void *obj;
  struct JoltC_TwoBodyConstraint *superObj;
};
typedef struct JoltC_ConeConstraint JoltC_ConeConstraint_t;

struct JoltC_ConeConstraintSettings {
  void *obj;
  struct JoltC_TwoBodyConstraintSettings *superObj;
};
typedef struct JoltC_ConeConstraintSettings JoltC_ConeConstraintSettings_t;

struct JoltC_Constraint {
  void *obj;
};
typedef struct JoltC_Constraint JoltC_Constraint_t;

struct JoltC_ConstraintSettings {
  void *obj;
};
typedef struct JoltC_ConstraintSettings JoltC_ConstraintSettings_t;

struct JoltC_ContactListener {
  void *obj;
};
typedef struct JoltC_ContactListener JoltC_ContactListener_t;

struct JoltC_ContactListenerEm {
  void *obj;
  struct JoltC_ContactListener *superObj;
};
typedef struct JoltC_ContactListenerEm JoltC_ContactListenerEm_t;

struct JoltC_ContactManifold {
  void *obj;
};
typedef struct JoltC_ContactManifold JoltC_ContactManifold_t;

struct JoltC_ContactPoints {
  void *obj;
};
typedef struct JoltC_ContactPoints JoltC_ContactPoints_t;

struct JoltC_ContactSettings {
  void *obj;
};
typedef struct JoltC_ContactSettings JoltC_ContactSettings_t;

struct JoltC_ConvexHullShape {
  void *obj;
  struct JoltC_ConvexShape *superObj;
};
typedef struct JoltC_ConvexHullShape JoltC_ConvexHullShape_t;

struct JoltC_ConvexHullShapeSettings {
  void *obj;
  struct JoltC_ConvexShapeSettings *superObj;
};
typedef struct JoltC_ConvexHullShapeSettings JoltC_ConvexHullShapeSettings_t;

struct JoltC_ConvexShape {
  void *obj;
  struct JoltC_Shape *superObj;
};
typedef struct JoltC_ConvexShape JoltC_ConvexShape_t;

struct JoltC_ConvexShapeSettings {
  void *obj;
  struct JoltC_ShapeSettings *superObj;
};
typedef struct JoltC_ConvexShapeSettings JoltC_ConvexShapeSettings_t;

struct JoltC_CylinderShape {
  void *obj;
  struct JoltC_ConvexShape *superObj;
};
typedef struct JoltC_CylinderShape JoltC_CylinderShape_t;

struct JoltC_CylinderShapeSettings {
  void *obj;
  struct JoltC_ConvexShapeSettings *superObj;
};
typedef struct JoltC_CylinderShapeSettings JoltC_CylinderShapeSettings_t;

struct JoltC_DecoratedShape {
  void *obj;
  struct JoltC_Shape *superObj;
};
typedef struct JoltC_DecoratedShape JoltC_DecoratedShape_t;

struct JoltC_DecoratedShapeSettings {
  void *obj;
  struct JoltC_ShapeSettings *superObj;
};
typedef struct JoltC_DecoratedShapeSettings JoltC_DecoratedShapeSettings_t;

struct JoltC_DefaultBroadPhaseLayerFilter {
  void *obj;
  struct JoltC_ObjectLayerFilter *superObj;
};
typedef struct JoltC_DefaultBroadPhaseLayerFilter JoltC_DefaultBroadPhaseLayerFilter_t;

struct JoltC_DefaultObjectLayerFilter {
  void *obj;
  struct JoltC_ObjectLayerFilter *superObj;
};
typedef struct JoltC_DefaultObjectLayerFilter JoltC_DefaultObjectLayerFilter_t;

struct JoltC_DistanceConstraint {
  void *obj;
  struct JoltC_TwoBodyConstraint *superObj;
};
typedef struct JoltC_DistanceConstraint JoltC_DistanceConstraint_t;

struct JoltC_DistanceConstraintSettings {
  void *obj;
  struct JoltC_TwoBodyConstraintSettings *superObj;
};
typedef struct JoltC_DistanceConstraintSettings JoltC_DistanceConstraintSettings_t;

struct JoltC_FixedConstraintSettings {
  void *obj;
  struct JoltC_TwoBodyConstraintSettings *superObj;
};
typedef struct JoltC_FixedConstraintSettings JoltC_FixedConstraintSettings_t;

struct JoltC_Float3 {
  void *obj;
};
typedef struct JoltC_Float3 JoltC_Float3_t;

struct JoltC_FloatMemRef {
  void *obj;
};
typedef struct JoltC_FloatMemRef JoltC_FloatMemRef_t;

struct JoltC_GearConstraint {
  void *obj;
  struct JoltC_TwoBodyConstraint *superObj;
};
typedef struct JoltC_GearConstraint JoltC_GearConstraint_t;

struct JoltC_GearConstraintSettings {
  void *obj;
  struct JoltC_TwoBodyConstraintSettings *superObj;
};
typedef struct JoltC_GearConstraintSettings JoltC_GearConstraintSettings_t;

struct JoltC_GroupFilter {
  void *obj;
};
typedef struct JoltC_GroupFilter JoltC_GroupFilter_t;

struct JoltC_GroupFilterTable {
  void *obj;
  struct JoltC_GroupFilter *superObj;
};
typedef struct JoltC_GroupFilterTable JoltC_GroupFilterTable_t;

struct JoltC_HeightFieldShape {
  void *obj;
  struct JoltC_Shape *superObj;
};
typedef struct JoltC_HeightFieldShape JoltC_HeightFieldShape_t;

struct JoltC_HeightFieldShapeConstantValues {
  void *obj;
};
typedef struct JoltC_HeightFieldShapeConstantValues JoltC_HeightFieldShapeConstantValues_t;

struct JoltC_HeightFieldShapeSettings {
  void *obj;
  struct JoltC_ShapeSettings *superObj;
};
typedef struct JoltC_HeightFieldShapeSettings JoltC_HeightFieldShapeSettings_t;

struct JoltC_HingeConstraint {
  void *obj;
  struct JoltC_TwoBodyConstraint *superObj;
};
typedef struct JoltC_HingeConstraint JoltC_HingeConstraint_t;

struct JoltC_HingeConstraintSettings {
  void *obj;
  struct JoltC_TwoBodyConstraintSettings *superObj;
};
typedef struct JoltC_HingeConstraintSettings JoltC_HingeConstraintSettings_t;

struct JoltC_IgnoreMultipleBodiesFilter {
  void *obj;
  struct JoltC_BodyFilter *superObj;
};
typedef struct JoltC_IgnoreMultipleBodiesFilter JoltC_IgnoreMultipleBodiesFilter_t;

struct JoltC_IgnoreSingleBodyFilter {
  void *obj;
  struct JoltC_BodyFilter *superObj;
};
typedef struct JoltC_IgnoreSingleBodyFilter JoltC_IgnoreSingleBodyFilter_t;

struct JoltC_IndexedTriangle {
  void *obj;
};
typedef struct JoltC_IndexedTriangle JoltC_IndexedTriangle_t;

struct JoltC_IndexedTriangleList {
  void *obj;
};
typedef struct JoltC_IndexedTriangleList JoltC_IndexedTriangleList_t;

struct JoltC_JPHString {
  void *obj;
};
typedef struct JoltC_JPHString JoltC_JPHString_t;

struct JoltC_JoltInterface {
  void *obj;
};
typedef struct JoltC_JoltInterface JoltC_JoltInterface_t;

struct JoltC_JoltSettings {
  void *obj;
};
typedef struct JoltC_JoltSettings JoltC_JoltSettings_t;

struct JoltC_LinearCurve {
  void *obj;
};
typedef struct JoltC_LinearCurve JoltC_LinearCurve_t;

struct JoltC_MassProperties {
  void *obj;
};
typedef struct JoltC_MassProperties JoltC_MassProperties_t;

struct JoltC_Mat44 {
  void *obj;
};
typedef struct JoltC_Mat44 JoltC_Mat44_t;

struct JoltC_Mat44MemRef {
  void *obj;
};
typedef struct JoltC_Mat44MemRef JoltC_Mat44MemRef_t;

struct JoltC_MeshShape {
  void *obj;
  struct JoltC_Shape *superObj;
};
typedef struct JoltC_MeshShape JoltC_MeshShape_t;

struct JoltC_MeshShapeSettings {
  void *obj;
  struct JoltC_ShapeSettings *superObj;
};
typedef struct JoltC_MeshShapeSettings JoltC_MeshShapeSettings_t;

struct JoltC_MotionProperties {
  void *obj;
};
typedef struct JoltC_MotionProperties JoltC_MotionProperties_t;

struct JoltC_MotorSettings {
  void *obj;
};
typedef struct JoltC_MotorSettings JoltC_MotorSettings_t;

struct JoltC_MotorcycleController {
  void *obj;
  struct JoltC_WheeledVehicleController *superObj;
};
typedef struct JoltC_MotorcycleController JoltC_MotorcycleController_t;

struct JoltC_MotorcycleControllerSettings {
  void *obj;
  struct JoltC_WheeledVehicleControllerSettings *superObj;
};
typedef struct JoltC_MotorcycleControllerSettings JoltC_MotorcycleControllerSettings_t;

struct JoltC_NarrowPhaseQuery {
  void *obj;
};
typedef struct JoltC_NarrowPhaseQuery JoltC_NarrowPhaseQuery_t;

struct JoltC_ObjectLayerFilter {
  void *obj;
};
typedef struct JoltC_ObjectLayerFilter JoltC_ObjectLayerFilter_t;

struct JoltC_ObjectLayerPairFilter {
  void *obj;
};
typedef struct JoltC_ObjectLayerPairFilter JoltC_ObjectLayerPairFilter_t;

struct JoltC_ObjectLayerPairFilterMask {
  void *obj;
  struct JoltC_ObjectLayerPairFilter *superObj;
};
typedef struct JoltC_ObjectLayerPairFilterMask JoltC_ObjectLayerPairFilterMask_t;

struct JoltC_ObjectLayerPairFilterTable {
  void *obj;
  struct JoltC_ObjectLayerPairFilter *superObj;
};
typedef struct JoltC_ObjectLayerPairFilterTable JoltC_ObjectLayerPairFilterTable_t;

struct JoltC_ObjectVsBroadPhaseLayerFilter {
  void *obj;
};
typedef struct JoltC_ObjectVsBroadPhaseLayerFilter JoltC_ObjectVsBroadPhaseLayerFilter_t;

struct JoltC_ObjectVsBroadPhaseLayerFilterEm {
  void *obj;
  struct JoltC_ObjectVsBroadPhaseLayerFilter *superObj;
};
typedef struct JoltC_ObjectVsBroadPhaseLayerFilterEm JoltC_ObjectVsBroadPhaseLayerFilterEm_t;

struct JoltC_ObjectVsBroadPhaseLayerFilterMask {
  void *obj;
  struct JoltC_ObjectVsBroadPhaseLayerFilter *superObj;
};
typedef struct JoltC_ObjectVsBroadPhaseLayerFilterMask JoltC_ObjectVsBroadPhaseLayerFilterMask_t;

struct JoltC_ObjectVsBroadPhaseLayerFilterTable {
  void *obj;
  struct JoltC_ObjectVsBroadPhaseLayerFilter *superObj;
};
typedef struct JoltC_ObjectVsBroadPhaseLayerFilterTable JoltC_ObjectVsBroadPhaseLayerFilterTable_t;

struct JoltC_OffsetCenterOfMassShape {
  void *obj;
  struct JoltC_DecoratedShape *superObj;
};
typedef struct JoltC_OffsetCenterOfMassShape JoltC_OffsetCenterOfMassShape_t;

struct JoltC_OffsetCenterOfMassShapeSettings {
  void *obj;
  struct JoltC_DecoratedShapeSettings *superObj;
};
typedef struct JoltC_OffsetCenterOfMassShapeSettings JoltC_OffsetCenterOfMassShapeSettings_t;

struct JoltC_OrientedBox {
  void *obj;
};
typedef struct JoltC_OrientedBox JoltC_OrientedBox_t;

struct JoltC_PathConstraint {
  void *obj;
  struct JoltC_TwoBodyConstraint *superObj;
};
typedef struct JoltC_PathConstraint JoltC_PathConstraint_t;

struct JoltC_PathConstraintPath {
  void *obj;
};
typedef struct JoltC_PathConstraintPath JoltC_PathConstraintPath_t;

struct JoltC_PathConstraintPathEm {
  void *obj;
  struct JoltC_PathConstraintPath *superObj;
};
typedef struct JoltC_PathConstraintPathEm JoltC_PathConstraintPathEm_t;

struct JoltC_PathConstraintSettings {
  void *obj;
  struct JoltC_TwoBodyConstraintSettings *superObj;
};
typedef struct JoltC_PathConstraintSettings JoltC_PathConstraintSettings_t;

struct JoltC_PhysicsMaterial {
  void *obj;
};
typedef struct JoltC_PhysicsMaterial JoltC_PhysicsMaterial_t;

struct JoltC_PhysicsMaterialList {
  void *obj;
};
typedef struct JoltC_PhysicsMaterialList JoltC_PhysicsMaterialList_t;

struct JoltC_PhysicsSettings {
  void *obj;
};
typedef struct JoltC_PhysicsSettings JoltC_PhysicsSettings_t;

struct JoltC_PhysicsStepListener {
  void *obj;
};
typedef struct JoltC_PhysicsStepListener JoltC_PhysicsStepListener_t;

struct JoltC_PhysicsSystem {
  void *obj;
};
typedef struct JoltC_PhysicsSystem JoltC_PhysicsSystem_t;

struct JoltC_Plane {
  void *obj;
};
typedef struct JoltC_Plane JoltC_Plane_t;

struct JoltC_PointConstraint {
  void *obj;
  struct JoltC_TwoBodyConstraint *superObj;
};
typedef struct JoltC_PointConstraint JoltC_PointConstraint_t;

struct JoltC_PointConstraintSettings {
  void *obj;
  struct JoltC_TwoBodyConstraintSettings *superObj;
};
typedef struct JoltC_PointConstraintSettings JoltC_PointConstraintSettings_t;

struct JoltC_PulleyConstraint {
  void *obj;
  struct JoltC_TwoBodyConstraint *superObj;
};
typedef struct JoltC_PulleyConstraint JoltC_PulleyConstraint_t;

struct JoltC_PulleyConstraintSettings {
  void *obj;
  struct JoltC_TwoBodyConstraintSettings *superObj;
};
typedef struct JoltC_PulleyConstraintSettings JoltC_PulleyConstraintSettings_t;

struct JoltC_Quat {
  void *obj;
};
typedef struct JoltC_Quat JoltC_Quat_t;

struct JoltC_RMat44 {
  void *obj;
};
typedef struct JoltC_RMat44 JoltC_RMat44_t;

struct JoltC_RRayCast {
  void *obj;
};
typedef struct JoltC_RRayCast JoltC_RRayCast_t;

struct JoltC_RShapeCast {
  void *obj;
};
typedef struct JoltC_RShapeCast JoltC_RShapeCast_t;

struct JoltC_RVec3 {
  void *obj;
};
typedef struct JoltC_RVec3 JoltC_RVec3_t;

struct JoltC_RackAndPinionConstraint {
  void *obj;
  struct JoltC_TwoBodyConstraint *superObj;
};
typedef struct JoltC_RackAndPinionConstraint JoltC_RackAndPinionConstraint_t;

struct JoltC_RackAndPinionConstraintSettings {
  void *obj;
  struct JoltC_TwoBodyConstraintSettings *superObj;
};
typedef struct JoltC_RackAndPinionConstraintSettings JoltC_RackAndPinionConstraintSettings_t;

struct JoltC_Ragdoll {
  void *obj;
};
typedef struct JoltC_Ragdoll JoltC_Ragdoll_t;

struct JoltC_RagdollAdditionalConstraint {
  void *obj;
};
typedef struct JoltC_RagdollAdditionalConstraint JoltC_RagdollAdditionalConstraint_t;

struct JoltC_RagdollPart {
  void *obj;
  struct JoltC_BodyCreationSettings *superObj;
};
typedef struct JoltC_RagdollPart JoltC_RagdollPart_t;

struct JoltC_RagdollSettings {
  void *obj;
};
typedef struct JoltC_RagdollSettings JoltC_RagdollSettings_t;

struct JoltC_RayCast {
  void *obj;
};
typedef struct JoltC_RayCast JoltC_RayCast_t;

struct JoltC_RayCastBodyCollector {
  void *obj;
};
typedef struct JoltC_RayCastBodyCollector JoltC_RayCastBodyCollector_t;

struct JoltC_RayCastResult {
  void *obj;
  struct JoltC_BroadPhaseCastResult *superObj;
};
typedef struct JoltC_RayCastResult JoltC_RayCastResult_t;

struct JoltC_RayCastSettings {
  void *obj;
};
typedef struct JoltC_RayCastSettings JoltC_RayCastSettings_t;

struct JoltC_RotatedTranslatedShape {
  void *obj;
  struct JoltC_DecoratedShape *superObj;
};
typedef struct JoltC_RotatedTranslatedShape JoltC_RotatedTranslatedShape_t;

struct JoltC_RotatedTranslatedShapeSettings {
  void *obj;
  struct JoltC_DecoratedShapeSettings *superObj;
};
typedef struct JoltC_RotatedTranslatedShapeSettings JoltC_RotatedTranslatedShapeSettings_t;

struct JoltC_ScaledShape {
  void *obj;
  struct JoltC_DecoratedShape *superObj;
};
typedef struct JoltC_ScaledShape JoltC_ScaledShape_t;

struct JoltC_ScaledShapeSettings {
  void *obj;
  struct JoltC_DecoratedShapeSettings *superObj;
};
typedef struct JoltC_ScaledShapeSettings JoltC_ScaledShapeSettings_t;

struct JoltC_Shape {
  void *obj;
};
typedef struct JoltC_Shape JoltC_Shape_t;

struct JoltC_Shape_ShapeResult {
  void *obj;
};
typedef struct JoltC_Shape_ShapeResult JoltC_Shape_ShapeResult_t;

struct JoltC_ShapeCast {
  void *obj;
};
typedef struct JoltC_ShapeCast JoltC_ShapeCast_t;

struct JoltC_ShapeCastResult {
  void *obj;
  struct JoltC_CollideShapeResult *superObj;
};
typedef struct JoltC_ShapeCastResult JoltC_ShapeCastResult_t;

struct JoltC_ShapeCastSettings {
  void *obj;
  struct JoltC_CollideSettingsBase *superObj;
};
typedef struct JoltC_ShapeCastSettings JoltC_ShapeCastSettings_t;

struct JoltC_ShapeFilter {
  void *obj;
};
typedef struct JoltC_ShapeFilter JoltC_ShapeFilter_t;

struct JoltC_ShapeGetTriangles {
  void *obj;
};
typedef struct JoltC_ShapeGetTriangles JoltC_ShapeGetTriangles_t;

struct JoltC_ShapeSettings {
  void *obj;
};
typedef struct JoltC_ShapeSettings JoltC_ShapeSettings_t;

struct JoltC_SixDOFConstraint {
  void *obj;
  struct JoltC_TwoBodyConstraint *superObj;
};
typedef struct JoltC_SixDOFConstraint JoltC_SixDOFConstraint_t;

struct JoltC_SixDOFConstraintSettings {
  void *obj;
  struct JoltC_TwoBodyConstraintSettings *superObj;
};
typedef struct JoltC_SixDOFConstraintSettings JoltC_SixDOFConstraintSettings_t;

struct JoltC_SkeletalAnimation {
  void *obj;
};
typedef struct JoltC_SkeletalAnimation JoltC_SkeletalAnimation_t;

struct JoltC_SkeletalAnimationAnimatedJoint {
  void *obj;
};
typedef struct JoltC_SkeletalAnimationAnimatedJoint JoltC_SkeletalAnimationAnimatedJoint_t;

struct JoltC_SkeletalAnimationJointState {
  void *obj;
};
typedef struct JoltC_SkeletalAnimationJointState JoltC_SkeletalAnimationJointState_t;

struct JoltC_SkeletalAnimationKeyframe {
  void *obj;
  struct JoltC_SkeletalAnimationJointState *superObj;
};
typedef struct JoltC_SkeletalAnimationKeyframe JoltC_SkeletalAnimationKeyframe_t;

struct JoltC_Skeleton {
  void *obj;
};
typedef struct JoltC_Skeleton JoltC_Skeleton_t;

struct JoltC_SkeletonPose {
  void *obj;
};
typedef struct JoltC_SkeletonPose JoltC_SkeletonPose_t;

struct JoltC_SliderConstraint {
  void *obj;
  struct JoltC_TwoBodyConstraint *superObj;
};
typedef struct JoltC_SliderConstraint JoltC_SliderConstraint_t;

struct JoltC_SliderConstraintSettings {
  void *obj;
  struct JoltC_TwoBodyConstraintSettings *superObj;
};
typedef struct JoltC_SliderConstraintSettings JoltC_SliderConstraintSettings_t;

struct JoltC_SoftBodyContactListener {
  void *obj;
};
typedef struct JoltC_SoftBodyContactListener JoltC_SoftBodyContactListener_t;

struct JoltC_SoftBodyContactListenerEm {
  void *obj;
  struct JoltC_SoftBodyContactListener *superObj;
};
typedef struct JoltC_SoftBodyContactListenerEm JoltC_SoftBodyContactListenerEm_t;

struct JoltC_SoftBodyContactSettings {
  void *obj;
};
typedef struct JoltC_SoftBodyContactSettings JoltC_SoftBodyContactSettings_t;

struct JoltC_SoftBodyCreationSettings {
  void *obj;
};
typedef struct JoltC_SoftBodyCreationSettings JoltC_SoftBodyCreationSettings_t;

struct JoltC_SoftBodyManifold {
  void *obj;
};
typedef struct JoltC_SoftBodyManifold JoltC_SoftBodyManifold_t;

struct JoltC_SoftBodyMotionProperties {
  void *obj;
  struct JoltC_MotionProperties *superObj;
};
typedef struct JoltC_SoftBodyMotionProperties JoltC_SoftBodyMotionProperties_t;

struct JoltC_SoftBodyShape {
  void *obj;
  struct JoltC_Shape *superObj;
};
typedef struct JoltC_SoftBodyShape JoltC_SoftBodyShape_t;

struct JoltC_SoftBodySharedSettings {
  void *obj;
};
typedef struct JoltC_SoftBodySharedSettings JoltC_SoftBodySharedSettings_t;

struct JoltC_SoftBodySharedSettingsDihedralBend {
  void *obj;
};
typedef struct JoltC_SoftBodySharedSettingsDihedralBend JoltC_SoftBodySharedSettingsDihedralBend_t;

struct JoltC_SoftBodySharedSettingsEdge {
  void *obj;
};
typedef struct JoltC_SoftBodySharedSettingsEdge JoltC_SoftBodySharedSettingsEdge_t;

struct JoltC_SoftBodySharedSettingsFace {
  void *obj;
};
typedef struct JoltC_SoftBodySharedSettingsFace JoltC_SoftBodySharedSettingsFace_t;

struct JoltC_SoftBodySharedSettingsInvBind {
  void *obj;
};
typedef struct JoltC_SoftBodySharedSettingsInvBind JoltC_SoftBodySharedSettingsInvBind_t;

struct JoltC_SoftBodySharedSettingsLRA {
  void *obj;
};
typedef struct JoltC_SoftBodySharedSettingsLRA JoltC_SoftBodySharedSettingsLRA_t;

struct JoltC_SoftBodySharedSettingsSkinWeight {
  void *obj;
};
typedef struct JoltC_SoftBodySharedSettingsSkinWeight JoltC_SoftBodySharedSettingsSkinWeight_t;

struct JoltC_SoftBodySharedSettingsSkinned {
  void *obj;
};
typedef struct JoltC_SoftBodySharedSettingsSkinned JoltC_SoftBodySharedSettingsSkinned_t;

struct JoltC_SoftBodySharedSettingsVertex {
  void *obj;
};
typedef struct JoltC_SoftBodySharedSettingsVertex JoltC_SoftBodySharedSettingsVertex_t;

struct JoltC_SoftBodySharedSettingsVertexAttributes {
  void *obj;
};
typedef struct JoltC_SoftBodySharedSettingsVertexAttributes JoltC_SoftBodySharedSettingsVertexAttributes_t;

struct JoltC_SoftBodySharedSettingsVolume {
  void *obj;
};
typedef struct JoltC_SoftBodySharedSettingsVolume JoltC_SoftBodySharedSettingsVolume_t;

struct JoltC_SoftBodyVertex {
  void *obj;
};
typedef struct JoltC_SoftBodyVertex JoltC_SoftBodyVertex_t;

struct JoltC_SoftBodyVertexTraits {
  void *obj;
};
typedef struct JoltC_SoftBodyVertexTraits JoltC_SoftBodyVertexTraits_t;

struct JoltC_SpecifiedObjectLayerFilter {
  void *obj;
  struct JoltC_ObjectLayerFilter *superObj;
};
typedef struct JoltC_SpecifiedObjectLayerFilter JoltC_SpecifiedObjectLayerFilter_t;

struct JoltC_SphereShape {
  void *obj;
  struct JoltC_ConvexShape *superObj;
};
typedef struct JoltC_SphereShape JoltC_SphereShape_t;

struct JoltC_SphereShapeSettings {
  void *obj;
  struct JoltC_ConvexShapeSettings *superObj;
};
typedef struct JoltC_SphereShapeSettings JoltC_SphereShapeSettings_t;

struct JoltC_SpringSettings {
  void *obj;
};
typedef struct JoltC_SpringSettings JoltC_SpringSettings_t;

struct JoltC_StateRecorder {
  void *obj;
};
typedef struct JoltC_StateRecorder JoltC_StateRecorder_t;

struct JoltC_StateRecorderImpl {
  void *obj;
  struct JoltC_StateRecorder *superObj;
};
typedef struct JoltC_StateRecorderImpl JoltC_StateRecorderImpl_t;

struct JoltC_StaticCompoundShape {
  void *obj;
  struct JoltC_CompoundShape *superObj;
};
typedef struct JoltC_StaticCompoundShape JoltC_StaticCompoundShape_t;

struct JoltC_StaticCompoundShapeSettings {
  void *obj;
  struct JoltC_ShapeSettings *superObj;
};
typedef struct JoltC_StaticCompoundShapeSettings JoltC_StaticCompoundShapeSettings_t;

struct JoltC_SubShapeID {
  void *obj;
};
typedef struct JoltC_SubShapeID JoltC_SubShapeID_t;

struct JoltC_SubShapeIDPair {
  void *obj;
};
typedef struct JoltC_SubShapeIDPair JoltC_SubShapeIDPair_t;

struct JoltC_SwingTwistConstraint {
  void *obj;
  struct JoltC_TwoBodyConstraint *superObj;
};
typedef struct JoltC_SwingTwistConstraint JoltC_SwingTwistConstraint_t;

struct JoltC_SwingTwistConstraintSettings {
  void *obj;
  struct JoltC_TwoBodyConstraintSettings *superObj;
};
typedef struct JoltC_SwingTwistConstraintSettings JoltC_SwingTwistConstraintSettings_t;

struct JoltC_TaperedCapsuleShape {
  void *obj;
  struct JoltC_ConvexShape *superObj;
};
typedef struct JoltC_TaperedCapsuleShape JoltC_TaperedCapsuleShape_t;

struct JoltC_TaperedCapsuleShapeSettings {
  void *obj;
  struct JoltC_ConvexShapeSettings *superObj;
};
typedef struct JoltC_TaperedCapsuleShapeSettings JoltC_TaperedCapsuleShapeSettings_t;

struct JoltC_TempAllocator {
  void *obj;
};
typedef struct JoltC_TempAllocator JoltC_TempAllocator_t;

struct JoltC_TrackedVehicleController {
  void *obj;
  struct JoltC_VehicleController *superObj;
};
typedef struct JoltC_TrackedVehicleController JoltC_TrackedVehicleController_t;

struct JoltC_TrackedVehicleControllerSettings {
  void *obj;
  struct JoltC_VehicleControllerSettings *superObj;
};
typedef struct JoltC_TrackedVehicleControllerSettings JoltC_TrackedVehicleControllerSettings_t;

struct JoltC_TransformedShape {
  void *obj;
};
typedef struct JoltC_TransformedShape JoltC_TransformedShape_t;

struct JoltC_TransformedShapeCollector {
  void *obj;
};
typedef struct JoltC_TransformedShapeCollector JoltC_TransformedShapeCollector_t;

struct JoltC_Triangle {
  void *obj;
};
typedef struct JoltC_Triangle JoltC_Triangle_t;

struct JoltC_TriangleList {
  void *obj;
};
typedef struct JoltC_TriangleList JoltC_TriangleList_t;

struct JoltC_TwoBodyConstraint {
  void *obj;
  struct JoltC_Constraint *superObj;
};
typedef struct JoltC_TwoBodyConstraint JoltC_TwoBodyConstraint_t;

struct JoltC_TwoBodyConstraintSettings {
  void *obj;
  struct JoltC_ConstraintSettings *superObj;
};
typedef struct JoltC_TwoBodyConstraintSettings JoltC_TwoBodyConstraintSettings_t;

struct JoltC_Uint8MemRef {
  void *obj;
};
typedef struct JoltC_Uint8MemRef JoltC_Uint8MemRef_t;

struct JoltC_UintMemRef {
  void *obj;
};
typedef struct JoltC_UintMemRef JoltC_UintMemRef_t;

struct JoltC_Vec3 {
  void *obj;
};
typedef struct JoltC_Vec3 JoltC_Vec3_t;

struct JoltC_Vec3MemRef {
  void *obj;
};
typedef struct JoltC_Vec3MemRef JoltC_Vec3MemRef_t;

struct JoltC_Vec4 {
  void *obj;
};
typedef struct JoltC_Vec4 JoltC_Vec4_t;

struct JoltC_Vector2 {
  void *obj;
};
typedef struct JoltC_Vector2 JoltC_Vector2_t;

struct JoltC_VehicleAntiRollBar {
  void *obj;
};
typedef struct JoltC_VehicleAntiRollBar JoltC_VehicleAntiRollBar_t;

struct JoltC_VehicleCollisionTester {
  void *obj;
};
typedef struct JoltC_VehicleCollisionTester JoltC_VehicleCollisionTester_t;

struct JoltC_VehicleCollisionTesterCastCylinder {
  void *obj;
  struct JoltC_VehicleCollisionTester *superObj;
};
typedef struct JoltC_VehicleCollisionTesterCastCylinder JoltC_VehicleCollisionTesterCastCylinder_t;

struct JoltC_VehicleCollisionTesterCastSphere {
  void *obj;
  struct JoltC_VehicleCollisionTester *superObj;
};
typedef struct JoltC_VehicleCollisionTesterCastSphere JoltC_VehicleCollisionTesterCastSphere_t;

struct JoltC_VehicleCollisionTesterRay {
  void *obj;
  struct JoltC_VehicleCollisionTester *superObj;
};
typedef struct JoltC_VehicleCollisionTesterRay JoltC_VehicleCollisionTesterRay_t;

struct JoltC_VehicleConstraint {
  void *obj;
  struct JoltC_Constraint *superObj;
};
typedef struct JoltC_VehicleConstraint JoltC_VehicleConstraint_t;

struct JoltC_VehicleConstraintCallbacksEm {
  void *obj;
};
typedef struct JoltC_VehicleConstraintCallbacksEm JoltC_VehicleConstraintCallbacksEm_t;

struct JoltC_VehicleConstraintSettings {
  void *obj;
  struct JoltC_ConstraintSettings *superObj;
};
typedef struct JoltC_VehicleConstraintSettings JoltC_VehicleConstraintSettings_t;

struct JoltC_VehicleConstraintStepListener {
  void *obj;
  struct JoltC_PhysicsStepListener *superObj;
};
typedef struct JoltC_VehicleConstraintStepListener JoltC_VehicleConstraintStepListener_t;

struct JoltC_VehicleController {
  void *obj;
};
typedef struct JoltC_VehicleController JoltC_VehicleController_t;

struct JoltC_VehicleControllerSettings {
  void *obj;
};
typedef struct JoltC_VehicleControllerSettings JoltC_VehicleControllerSettings_t;

struct JoltC_VehicleDifferentialSettings {
  void *obj;
};
typedef struct JoltC_VehicleDifferentialSettings JoltC_VehicleDifferentialSettings_t;

struct JoltC_VehicleEngine {
  void *obj;
  struct JoltC_VehicleEngineSettings *superObj;
};
typedef struct JoltC_VehicleEngine JoltC_VehicleEngine_t;

struct JoltC_VehicleEngineSettings {
  void *obj;
};
typedef struct JoltC_VehicleEngineSettings JoltC_VehicleEngineSettings_t;

struct JoltC_VehicleTrack {
  void *obj;
  struct JoltC_VehicleTrackSettings *superObj;
};
typedef struct JoltC_VehicleTrack JoltC_VehicleTrack_t;

struct JoltC_VehicleTrackSettings {
  void *obj;
};
typedef struct JoltC_VehicleTrackSettings JoltC_VehicleTrackSettings_t;

struct JoltC_VehicleTransmission {
  void *obj;
  struct JoltC_VehicleTransmissionSettings *superObj;
};
typedef struct JoltC_VehicleTransmission JoltC_VehicleTransmission_t;

struct JoltC_VehicleTransmissionSettings {
  void *obj;
};
typedef struct JoltC_VehicleTransmissionSettings JoltC_VehicleTransmissionSettings_t;

struct JoltC_VertexList {
  void *obj;
};
typedef struct JoltC_VertexList JoltC_VertexList_t;

struct JoltC_Wheel {
  void *obj;
};
typedef struct JoltC_Wheel JoltC_Wheel_t;

struct JoltC_WheelSettings {
  void *obj;
};
typedef struct JoltC_WheelSettings JoltC_WheelSettings_t;

struct JoltC_WheelSettingsTV {
  void *obj;
  struct JoltC_WheelSettings *superObj;
};
typedef struct JoltC_WheelSettingsTV JoltC_WheelSettingsTV_t;

struct JoltC_WheelSettingsWV {
  void *obj;
  struct JoltC_WheelSettings *superObj;
};
typedef struct JoltC_WheelSettingsWV JoltC_WheelSettingsWV_t;

struct JoltC_WheelTV {
  void *obj;
  struct JoltC_Wheel *superObj;
};
typedef struct JoltC_WheelTV JoltC_WheelTV_t;

struct JoltC_WheelWV {
  void *obj;
  struct JoltC_Wheel *superObj;
};
typedef struct JoltC_WheelWV JoltC_WheelWV_t;

struct JoltC_WheeledVehicleController {
  void *obj;
  struct JoltC_VehicleController *superObj;
};
typedef struct JoltC_WheeledVehicleController JoltC_WheeledVehicleController_t;

struct JoltC_WheeledVehicleControllerSettings {
  void *obj;
  struct JoltC_VehicleControllerSettings *superObj;
};
typedef struct JoltC_WheeledVehicleControllerSettings JoltC_WheeledVehicleControllerSettings_t;

typedef enum {
  JoltC_EBodyType_RigidBody = 0,
  JoltC_EBodyType_SoftBody = 1,
} JoltC_EBodyType;

typedef enum {
  JoltC_EMotionType_Static = 0,
  JoltC_EMotionType_Kinematic = 1,
  JoltC_EMotionType_Dynamic = 2,
} JoltC_EMotionType;

typedef enum {
  JoltC_EMotionQuality_Discrete = 0,
  JoltC_EMotionQuality_LinearCast = 1,
} JoltC_EMotionQuality;

typedef enum {
  JoltC_EActivation_Activate = 0,
  JoltC_EActivation_DontActivate = 1,
} JoltC_EActivation;

typedef enum {
  JoltC_EShapeType_Convex = 0,
  JoltC_EShapeType_Compound = 1,
  JoltC_EShapeType_Decorated = 2,
  JoltC_EShapeType_Mesh = 3,
  JoltC_EShapeType_HeightField = 4,
} JoltC_EShapeType;

typedef enum {
  JoltC_EShapeSubType_Sphere = 0,
  JoltC_EShapeSubType_Box = 1,
  JoltC_EShapeSubType_Capsule = 2,
  JoltC_EShapeSubType_TaperedCapsule = 3,
  JoltC_EShapeSubType_Cylinder = 4,
  JoltC_EShapeSubType_ConvexHull = 5,
  JoltC_EShapeSubType_StaticCompound = 6,
  JoltC_EShapeSubType_MutableCompound = 7,
  JoltC_EShapeSubType_RotatedTranslated = 8,
  JoltC_EShapeSubType_Scaled = 9,
  JoltC_EShapeSubType_OffsetCenterOfMass = 10,
  JoltC_EShapeSubType_Mesh = 11,
  JoltC_EShapeSubType_HeightField = 12,
} JoltC_EShapeSubType;

typedef enum {
  JoltC_EConstraintSpace_LocalToBodyCOM = 0,
  JoltC_EConstraintSpace_WorldSpace = 1,
} JoltC_EConstraintSpace;

typedef enum {
  JoltC_ESpringMode_FrequencyAndDamping = 0,
  JoltC_ESpringMode_StiffnessAndDamping = 1,
} JoltC_ESpringMode;

typedef enum {
  JoltC_EOverrideMassProperties_CalculateMassAndInertia = 0,
  JoltC_EOverrideMassProperties_CalculateInertia = 1,
  JoltC_EOverrideMassProperties_MassAndInertiaProvided = 2,
} JoltC_EOverrideMassProperties;

typedef enum {
  JoltC_EAllowedDOFs_TranslationX = 0,
  JoltC_EAllowedDOFs_TranslationY = 1,
  JoltC_EAllowedDOFs_TranslationZ = 2,
  JoltC_EAllowedDOFs_RotationX = 3,
  JoltC_EAllowedDOFs_RotationY = 4,
  JoltC_EAllowedDOFs_RotationZ = 5,
  JoltC_EAllowedDOFs_Plane2D = 6,
  JoltC_EAllowedDOFs_All = 7,
} JoltC_EAllowedDOFs;

typedef enum {
  JoltC_EStateRecorderState_None = 0,
  JoltC_EStateRecorderState_Global = 1,
  JoltC_EStateRecorderState_Bodies = 2,
  JoltC_EStateRecorderState_Contacts = 3,
  JoltC_EStateRecorderState_Constraints = 4,
  JoltC_EStateRecorderState_All = 5,
} JoltC_EStateRecorderState;

typedef enum {
  JoltC_EBackFaceMode_IgnoreBackFaces = 0,
  JoltC_EBackFaceMode_CollideWithBackFaces = 1,
} JoltC_EBackFaceMode;

typedef enum {
  JoltC_EGroundState_OnGround = 0,
  JoltC_EGroundState_OnSteepGround = 1,
  JoltC_EGroundState_NotSupported = 2,
  JoltC_EGroundState_InAir = 3,
} JoltC_EGroundState;

typedef enum {
  JoltC_ValidateResult_AcceptAllContactsForThisBodyPair = 0,
  JoltC_ValidateResult_AcceptContact = 1,
  JoltC_ValidateResult_RejectContact = 2,
  JoltC_ValidateResult_RejectAllContactsForThisBodyPair = 3,
} JoltC_ValidateResult;

typedef enum {
  JoltC_SoftBodyValidateResult_AcceptContact = 0,
  JoltC_SoftBodyValidateResult_RejectContact = 1,
} JoltC_SoftBodyValidateResult;

typedef enum {
  JoltC_EActiveEdgeMode_CollideOnlyWithActive = 0,
  JoltC_EActiveEdgeMode_CollideWithAll = 1,
} JoltC_EActiveEdgeMode;

typedef enum {
  JoltC_ECollectFacesMode_CollectFaces = 0,
  JoltC_ECollectFacesMode_NoFaces = 1,
} JoltC_ECollectFacesMode;

typedef enum {
  JoltC_SixDOFConstraintSettings_EAxis_TranslationX = 0,
  JoltC_SixDOFConstraintSettings_EAxis_TranslationY = 1,
  JoltC_SixDOFConstraintSettings_EAxis_TranslationZ = 2,
  JoltC_SixDOFConstraintSettings_EAxis_RotationX = 3,
  JoltC_SixDOFConstraintSettings_EAxis_RotationY = 4,
  JoltC_SixDOFConstraintSettings_EAxis_RotationZ = 5,
} JoltC_SixDOFConstraintSettings_EAxis;

typedef enum {
  JoltC_EConstraintType_Constraint = 0,
  JoltC_EConstraintType_TwoBodyConstraint = 1,
} JoltC_EConstraintType;

typedef enum {
  JoltC_EConstraintSubType_Fixed = 0,
  JoltC_EConstraintSubType_Point = 1,
  JoltC_EConstraintSubType_Hinge = 2,
  JoltC_EConstraintSubType_Slider = 3,
  JoltC_EConstraintSubType_Distance = 4,
  JoltC_EConstraintSubType_Cone = 5,
  JoltC_EConstraintSubType_SwingTwist = 6,
  JoltC_EConstraintSubType_SixDOF = 7,
  JoltC_EConstraintSubType_Path = 8,
  JoltC_EConstraintSubType_Vehicle = 9,
  JoltC_EConstraintSubType_RackAndPinion = 10,
  JoltC_EConstraintSubType_Gear = 11,
  JoltC_EConstraintSubType_Pulley = 12,
} JoltC_EConstraintSubType;

typedef enum {
  JoltC_EMotorState_Off = 0,
  JoltC_EMotorState_Velocity = 1,
  JoltC_EMotorState_Position = 2,
} JoltC_EMotorState;

typedef enum {
  JoltC_ETransmissionMode_Auto = 0,
  JoltC_ETransmissionMode_Manual = 1,
} JoltC_ETransmissionMode;

typedef enum {
  JoltC_ETireFrictionDirection_Longitudinal = 0,
  JoltC_ETireFrictionDirection_Lateral = 1,
} JoltC_ETireFrictionDirection;

typedef enum {
  JoltC_ESwingType_Cone = 0,
  JoltC_ESwingType_Pyramid = 1,
} JoltC_ESwingType;

typedef enum {
  JoltC_EPathRotationConstraintType_Free = 0,
  JoltC_EPathRotationConstraintType_ConstrainAroundTangent = 1,
  JoltC_EPathRotationConstraintType_ConstrainAroundNormal = 2,
  JoltC_EPathRotationConstraintType_ConstrainAroundBinormal = 3,
  JoltC_EPathRotationConstraintType_ConstrainToPath = 4,
  JoltC_EPathRotationConstraintType_FullyConstrained = 5,
} JoltC_EPathRotationConstraintType;

typedef enum {
  JoltC_SoftBodySharedSettings_EBendType_None = 0,
  JoltC_SoftBodySharedSettings_EBendType_Distance = 1,
  JoltC_SoftBodySharedSettings_EBendType_Dihedral = 2,
} JoltC_SoftBodySharedSettings_EBendType;

typedef enum {
  JoltC_SoftBodySharedSettings_ELRAType_None = 0,
  JoltC_SoftBodySharedSettings_ELRAType_EuclideanDistance = 1,
  JoltC_SoftBodySharedSettings_ELRAType_GeodesicDistance = 2,
} JoltC_SoftBodySharedSettings_ELRAType;


#ifdef __cplusplus
}
#endif
