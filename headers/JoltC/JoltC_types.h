#pragma once

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

struct JPC_AABox {
  void *obj;
};
typedef struct JPC_AABox JPC_AABox_t;

struct JPC_AABoxCast {
  void *obj;
};
typedef struct JPC_AABoxCast JPC_AABoxCast_t;

struct JPC_ArrayCollidePointResult {
  void *obj;
};
typedef struct JPC_ArrayCollidePointResult JPC_ArrayCollidePointResult_t;

struct JPC_ArrayCollideShapeResult {
  void *obj;
};
typedef struct JPC_ArrayCollideShapeResult JPC_ArrayCollideShapeResult_t;

struct JPC_ArrayFloat {
  void *obj;
};
typedef struct JPC_ArrayFloat JPC_ArrayFloat_t;

struct JPC_ArrayMat44 {
  void *obj;
};
typedef struct JPC_ArrayMat44 JPC_ArrayMat44_t;

struct JPC_ArrayRagdollAdditionalConstraint {
  void *obj;
};
typedef struct JPC_ArrayRagdollAdditionalConstraint JPC_ArrayRagdollAdditionalConstraint_t;

struct JPC_ArrayRagdollPart {
  void *obj;
};
typedef struct JPC_ArrayRagdollPart JPC_ArrayRagdollPart_t;

struct JPC_ArrayRayCastResult {
  void *obj;
};
typedef struct JPC_ArrayRayCastResult JPC_ArrayRayCastResult_t;

struct JPC_ArrayShapeCastResult {
  void *obj;
};
typedef struct JPC_ArrayShapeCastResult JPC_ArrayShapeCastResult_t;

struct JPC_ArraySkeletonAnimatedJoint {
  void *obj;
};
typedef struct JPC_ArraySkeletonAnimatedJoint JPC_ArraySkeletonAnimatedJoint_t;

struct JPC_ArraySkeletonKeyframe {
  void *obj;
};
typedef struct JPC_ArraySkeletonKeyframe JPC_ArraySkeletonKeyframe_t;

struct JPC_ArraySoftBodySharedSettingsDihedralBend {
  void *obj;
};
typedef struct JPC_ArraySoftBodySharedSettingsDihedralBend JPC_ArraySoftBodySharedSettingsDihedralBend_t;

struct JPC_ArraySoftBodySharedSettingsEdge {
  void *obj;
};
typedef struct JPC_ArraySoftBodySharedSettingsEdge JPC_ArraySoftBodySharedSettingsEdge_t;

struct JPC_ArraySoftBodySharedSettingsFace {
  void *obj;
};
typedef struct JPC_ArraySoftBodySharedSettingsFace JPC_ArraySoftBodySharedSettingsFace_t;

struct JPC_ArraySoftBodySharedSettingsInvBind {
  void *obj;
};
typedef struct JPC_ArraySoftBodySharedSettingsInvBind JPC_ArraySoftBodySharedSettingsInvBind_t;

struct JPC_ArraySoftBodySharedSettingsLRA {
  void *obj;
};
typedef struct JPC_ArraySoftBodySharedSettingsLRA JPC_ArraySoftBodySharedSettingsLRA_t;

struct JPC_ArraySoftBodySharedSettingsSkinned {
  void *obj;
};
typedef struct JPC_ArraySoftBodySharedSettingsSkinned JPC_ArraySoftBodySharedSettingsSkinned_t;

struct JPC_ArraySoftBodySharedSettingsVertex {
  void *obj;
};
typedef struct JPC_ArraySoftBodySharedSettingsVertex JPC_ArraySoftBodySharedSettingsVertex_t;

struct JPC_ArraySoftBodySharedSettingsVertexAttributes {
  void *obj;
};
typedef struct JPC_ArraySoftBodySharedSettingsVertexAttributes JPC_ArraySoftBodySharedSettingsVertexAttributes_t;

struct JPC_ArraySoftBodySharedSettingsVolume {
  void *obj;
};
typedef struct JPC_ArraySoftBodySharedSettingsVolume JPC_ArraySoftBodySharedSettingsVolume_t;

struct JPC_ArraySoftBodyVertex {
  void *obj;
};
typedef struct JPC_ArraySoftBodyVertex JPC_ArraySoftBodyVertex_t;

struct JPC_ArrayUint {
  void *obj;
};
typedef struct JPC_ArrayUint JPC_ArrayUint_t;

struct JPC_ArrayUint8 {
  void *obj;
};
typedef struct JPC_ArrayUint8 JPC_ArrayUint8_t;

struct JPC_ArrayVec3 {
  void *obj;
};
typedef struct JPC_ArrayVec3 JPC_ArrayVec3_t;

struct JPC_ArrayVehicleAntiRollBar {
  void *obj;
};
typedef struct JPC_ArrayVehicleAntiRollBar JPC_ArrayVehicleAntiRollBar_t;

struct JPC_ArrayVehicleDifferentialSettings {
  void *obj;
};
typedef struct JPC_ArrayVehicleDifferentialSettings JPC_ArrayVehicleDifferentialSettings_t;

struct JPC_ArrayWheelSettings {
  void *obj;
};
typedef struct JPC_ArrayWheelSettings JPC_ArrayWheelSettings_t;

struct JPC_Body {
  void *obj;
};
typedef struct JPC_Body JPC_Body_t;

struct JPC_BodyActivationListener {
  void *obj;
};
typedef struct JPC_BodyActivationListener JPC_BodyActivationListener_t;

struct JPC_BodyCreationSettings {
  void *obj;
};
typedef struct JPC_BodyCreationSettings JPC_BodyCreationSettings_t;

struct JPC_BodyFilter {
  void *obj;
};
typedef struct JPC_BodyFilter JPC_BodyFilter_t;

struct JPC_BodyID {
  void *obj;
};
typedef struct JPC_BodyID JPC_BodyID_t;

struct JPC_BodyIDVector {
  void *obj;
};
typedef struct JPC_BodyIDVector JPC_BodyIDVector_t;

struct JPC_BodyInterface {
  void *obj;
};
typedef struct JPC_BodyInterface JPC_BodyInterface_t;

struct JPC_BodyLockInterface {
  void *obj;
};
typedef struct JPC_BodyLockInterface JPC_BodyLockInterface_t;

struct JPC_BodyLockInterfaceLocking {
  void *obj;
  struct JPC_BodyLockInterface *superObj;
};
typedef struct JPC_BodyLockInterfaceLocking JPC_BodyLockInterfaceLocking_t;

struct JPC_BodyLockInterfaceNoLock {
  void *obj;
  struct JPC_BodyLockInterface *superObj;
};
typedef struct JPC_BodyLockInterfaceNoLock JPC_BodyLockInterfaceNoLock_t;

struct JPC_BoxShape {
  void *obj;
  struct JPC_ConvexShape *superObj;
};
typedef struct JPC_BoxShape JPC_BoxShape_t;

struct JPC_BoxShapeSettings {
  void *obj;
  struct JPC_ConvexShapeSettings *superObj;
};
typedef struct JPC_BoxShapeSettings JPC_BoxShapeSettings_t;

struct JPC_BroadPhaseCastResult {
  void *obj;
};
typedef struct JPC_BroadPhaseCastResult JPC_BroadPhaseCastResult_t;

struct JPC_BroadPhaseLayer {
  void *obj;
};
typedef struct JPC_BroadPhaseLayer JPC_BroadPhaseLayer_t;

struct JPC_BroadPhaseLayerFilter {
  void *obj;
};
typedef struct JPC_BroadPhaseLayerFilter JPC_BroadPhaseLayerFilter_t;

struct JPC_BroadPhaseLayerInterface {
  void *obj;
};
typedef struct JPC_BroadPhaseLayerInterface JPC_BroadPhaseLayerInterface_t;

struct JPC_BroadPhaseLayerInterfaceEm {
  void *obj;
  struct JPC_BroadPhaseLayerInterface *superObj;
};
typedef struct JPC_BroadPhaseLayerInterfaceEm JPC_BroadPhaseLayerInterfaceEm_t;

struct JPC_BroadPhaseLayerInterfaceMask {
  void *obj;
  struct JPC_BroadPhaseLayerInterface *superObj;
};
typedef struct JPC_BroadPhaseLayerInterfaceMask JPC_BroadPhaseLayerInterfaceMask_t;

struct JPC_BroadPhaseLayerInterfaceTable {
  void *obj;
  struct JPC_BroadPhaseLayerInterface *superObj;
};
typedef struct JPC_BroadPhaseLayerInterfaceTable JPC_BroadPhaseLayerInterfaceTable_t;

struct JPC_BroadPhaseQuery {
  void *obj;
};
typedef struct JPC_BroadPhaseQuery JPC_BroadPhaseQuery_t;

struct JPC_CapsuleShape {
  void *obj;
  struct JPC_ConvexShape *superObj;
};
typedef struct JPC_CapsuleShape JPC_CapsuleShape_t;

struct JPC_CapsuleShapeSettings {
  void *obj;
  struct JPC_ConvexShapeSettings *superObj;
};
typedef struct JPC_CapsuleShapeSettings JPC_CapsuleShapeSettings_t;

struct JPC_CastRayAllHitCollisionCollector {
  void *obj;
  struct JPC_CastRayCollector *superObj;
};
typedef struct JPC_CastRayAllHitCollisionCollector JPC_CastRayAllHitCollisionCollector_t;

struct JPC_CastRayAnyHitCollisionCollector {
  void *obj;
  struct JPC_CastRayCollector *superObj;
};
typedef struct JPC_CastRayAnyHitCollisionCollector JPC_CastRayAnyHitCollisionCollector_t;

struct JPC_CastRayClosestHitCollisionCollector {
  void *obj;
  struct JPC_CastRayCollector *superObj;
};
typedef struct JPC_CastRayClosestHitCollisionCollector JPC_CastRayClosestHitCollisionCollector_t;

struct JPC_CastRayCollector {
  void *obj;
};
typedef struct JPC_CastRayCollector JPC_CastRayCollector_t;

struct JPC_CastShapeAllHitCollisionCollector {
  void *obj;
  struct JPC_CastShapeCollector *superObj;
};
typedef struct JPC_CastShapeAllHitCollisionCollector JPC_CastShapeAllHitCollisionCollector_t;

struct JPC_CastShapeAnyHitCollisionCollector {
  void *obj;
  struct JPC_CastShapeCollector *superObj;
};
typedef struct JPC_CastShapeAnyHitCollisionCollector JPC_CastShapeAnyHitCollisionCollector_t;

struct JPC_CastShapeBodyCollector {
  void *obj;
};
typedef struct JPC_CastShapeBodyCollector JPC_CastShapeBodyCollector_t;

struct JPC_CastShapeClosestHitCollisionCollector {
  void *obj;
  struct JPC_CastShapeCollector *superObj;
};
typedef struct JPC_CastShapeClosestHitCollisionCollector JPC_CastShapeClosestHitCollisionCollector_t;

struct JPC_CastShapeCollector {
  void *obj;
};
typedef struct JPC_CastShapeCollector JPC_CastShapeCollector_t;

struct JPC_CharacterBase {
  void *obj;
};
typedef struct JPC_CharacterBase JPC_CharacterBase_t;

struct JPC_CharacterBaseSettings {
  void *obj;
};
typedef struct JPC_CharacterBaseSettings JPC_CharacterBaseSettings_t;

struct JPC_CharacterContactListener {
  void *obj;
};
typedef struct JPC_CharacterContactListener JPC_CharacterContactListener_t;

struct JPC_CharacterContactListenerEm {
  void *obj;
  struct JPC_CharacterContactListener *superObj;
};
typedef struct JPC_CharacterContactListenerEm JPC_CharacterContactListenerEm_t;

struct JPC_CharacterContactSettings {
  void *obj;
};
typedef struct JPC_CharacterContactSettings JPC_CharacterContactSettings_t;

struct JPC_CharacterVirtual {
  void *obj;
  struct JPC_CharacterBase *superObj;
};
typedef struct JPC_CharacterVirtual JPC_CharacterVirtual_t;

struct JPC_CharacterVirtual_ExtendedUpdateSettings {
  void *obj;
};
typedef struct JPC_CharacterVirtual_ExtendedUpdateSettings JPC_CharacterVirtual_ExtendedUpdateSettings_t;

struct JPC_CharacterVirtualSettings {
  void *obj;
  struct JPC_CharacterBaseSettings *superObj;
};
typedef struct JPC_CharacterVirtualSettings JPC_CharacterVirtualSettings_t;

struct JPC_CollidePointAllHitCollisionCollector {
  void *obj;
  struct JPC_CollidePointCollector *superObj;
};
typedef struct JPC_CollidePointAllHitCollisionCollector JPC_CollidePointAllHitCollisionCollector_t;

struct JPC_CollidePointAnyHitCollisionCollector {
  void *obj;
  struct JPC_CollidePointCollector *superObj;
};
typedef struct JPC_CollidePointAnyHitCollisionCollector JPC_CollidePointAnyHitCollisionCollector_t;

struct JPC_CollidePointClosestHitCollisionCollector {
  void *obj;
  struct JPC_CollidePointCollector *superObj;
};
typedef struct JPC_CollidePointClosestHitCollisionCollector JPC_CollidePointClosestHitCollisionCollector_t;

struct JPC_CollidePointCollector {
  void *obj;
};
typedef struct JPC_CollidePointCollector JPC_CollidePointCollector_t;

struct JPC_CollidePointResult {
  void *obj;
};
typedef struct JPC_CollidePointResult JPC_CollidePointResult_t;

struct JPC_CollideSettingsBase {
  void *obj;
};
typedef struct JPC_CollideSettingsBase JPC_CollideSettingsBase_t;

struct JPC_CollideShapeAllHitCollisionCollector {
  void *obj;
  struct JPC_CollideShapeCollector *superObj;
};
typedef struct JPC_CollideShapeAllHitCollisionCollector JPC_CollideShapeAllHitCollisionCollector_t;

struct JPC_CollideShapeAnyHitCollisionCollector {
  void *obj;
  struct JPC_CollideShapeCollector *superObj;
};
typedef struct JPC_CollideShapeAnyHitCollisionCollector JPC_CollideShapeAnyHitCollisionCollector_t;

struct JPC_CollideShapeBodyCollector {
  void *obj;
};
typedef struct JPC_CollideShapeBodyCollector JPC_CollideShapeBodyCollector_t;

struct JPC_CollideShapeClosestHitCollisionCollector {
  void *obj;
  struct JPC_CollideShapeCollector *superObj;
};
typedef struct JPC_CollideShapeClosestHitCollisionCollector JPC_CollideShapeClosestHitCollisionCollector_t;

struct JPC_CollideShapeCollector {
  void *obj;
};
typedef struct JPC_CollideShapeCollector JPC_CollideShapeCollector_t;

struct JPC_CollideShapeResult {
  void *obj;
};
typedef struct JPC_CollideShapeResult JPC_CollideShapeResult_t;

struct JPC_CollideShapeResultFace {
  void *obj;
};
typedef struct JPC_CollideShapeResultFace JPC_CollideShapeResultFace_t;

struct JPC_CollideShapeSettings {
  void *obj;
  struct JPC_CollideSettingsBase *superObj;
};
typedef struct JPC_CollideShapeSettings JPC_CollideShapeSettings_t;

struct JPC_CollisionGroup {
  void *obj;
};
typedef struct JPC_CollisionGroup JPC_CollisionGroup_t;

struct JPC_CompoundShape {
  void *obj;
  struct JPC_Shape *superObj;
};
typedef struct JPC_CompoundShape JPC_CompoundShape_t;

struct JPC_CompoundShapeSubShape {
  void *obj;
};
typedef struct JPC_CompoundShapeSubShape JPC_CompoundShapeSubShape_t;

struct JPC_ConeConstraint {
  void *obj;
  struct JPC_TwoBodyConstraint *superObj;
};
typedef struct JPC_ConeConstraint JPC_ConeConstraint_t;

struct JPC_ConeConstraintSettings {
  void *obj;
  struct JPC_TwoBodyConstraintSettings *superObj;
};
typedef struct JPC_ConeConstraintSettings JPC_ConeConstraintSettings_t;

struct JPC_Constraint {
  void *obj;
};
typedef struct JPC_Constraint JPC_Constraint_t;

struct JPC_ConstraintSettings {
  void *obj;
};
typedef struct JPC_ConstraintSettings JPC_ConstraintSettings_t;

struct JPC_ContactListener {
  void *obj;
};
typedef struct JPC_ContactListener JPC_ContactListener_t;

struct JPC_ContactListenerEm {
  void *obj;
  struct JPC_ContactListener *superObj;
};
typedef struct JPC_ContactListenerEm JPC_ContactListenerEm_t;

struct JPC_ContactManifold {
  void *obj;
};
typedef struct JPC_ContactManifold JPC_ContactManifold_t;

struct JPC_ContactPoints {
  void *obj;
};
typedef struct JPC_ContactPoints JPC_ContactPoints_t;

struct JPC_ContactSettings {
  void *obj;
};
typedef struct JPC_ContactSettings JPC_ContactSettings_t;

struct JPC_ConvexHullShape {
  void *obj;
  struct JPC_ConvexShape *superObj;
};
typedef struct JPC_ConvexHullShape JPC_ConvexHullShape_t;

struct JPC_ConvexHullShapeSettings {
  void *obj;
  struct JPC_ConvexShapeSettings *superObj;
};
typedef struct JPC_ConvexHullShapeSettings JPC_ConvexHullShapeSettings_t;

struct JPC_ConvexShape {
  void *obj;
  struct JPC_Shape *superObj;
};
typedef struct JPC_ConvexShape JPC_ConvexShape_t;

struct JPC_ConvexShapeSettings {
  void *obj;
  struct JPC_ShapeSettings *superObj;
};
typedef struct JPC_ConvexShapeSettings JPC_ConvexShapeSettings_t;

struct JPC_CylinderShape {
  void *obj;
  struct JPC_ConvexShape *superObj;
};
typedef struct JPC_CylinderShape JPC_CylinderShape_t;

struct JPC_CylinderShapeSettings {
  void *obj;
  struct JPC_ConvexShapeSettings *superObj;
};
typedef struct JPC_CylinderShapeSettings JPC_CylinderShapeSettings_t;

struct JPC_DecoratedShape {
  void *obj;
  struct JPC_Shape *superObj;
};
typedef struct JPC_DecoratedShape JPC_DecoratedShape_t;

struct JPC_DecoratedShapeSettings {
  void *obj;
  struct JPC_ShapeSettings *superObj;
};
typedef struct JPC_DecoratedShapeSettings JPC_DecoratedShapeSettings_t;

struct JPC_DefaultBroadPhaseLayerFilter {
  void *obj;
  struct JPC_ObjectLayerFilter *superObj;
};
typedef struct JPC_DefaultBroadPhaseLayerFilter JPC_DefaultBroadPhaseLayerFilter_t;

struct JPC_DefaultObjectLayerFilter {
  void *obj;
  struct JPC_ObjectLayerFilter *superObj;
};
typedef struct JPC_DefaultObjectLayerFilter JPC_DefaultObjectLayerFilter_t;

struct JPC_DistanceConstraint {
  void *obj;
  struct JPC_TwoBodyConstraint *superObj;
};
typedef struct JPC_DistanceConstraint JPC_DistanceConstraint_t;

struct JPC_DistanceConstraintSettings {
  void *obj;
  struct JPC_TwoBodyConstraintSettings *superObj;
};
typedef struct JPC_DistanceConstraintSettings JPC_DistanceConstraintSettings_t;

struct JPC_FixedConstraintSettings {
  void *obj;
  struct JPC_TwoBodyConstraintSettings *superObj;
};
typedef struct JPC_FixedConstraintSettings JPC_FixedConstraintSettings_t;

struct JPC_Float3 {
  void *obj;
};
typedef struct JPC_Float3 JPC_Float3_t;

struct JPC_FloatMemRef {
  void *obj;
};
typedef struct JPC_FloatMemRef JPC_FloatMemRef_t;

struct JPC_GearConstraint {
  void *obj;
  struct JPC_TwoBodyConstraint *superObj;
};
typedef struct JPC_GearConstraint JPC_GearConstraint_t;

struct JPC_GearConstraintSettings {
  void *obj;
  struct JPC_TwoBodyConstraintSettings *superObj;
};
typedef struct JPC_GearConstraintSettings JPC_GearConstraintSettings_t;

struct JPC_GroupFilter {
  void *obj;
};
typedef struct JPC_GroupFilter JPC_GroupFilter_t;

struct JPC_GroupFilterTable {
  void *obj;
  struct JPC_GroupFilter *superObj;
};
typedef struct JPC_GroupFilterTable JPC_GroupFilterTable_t;

struct JPC_HeightFieldShape {
  void *obj;
  struct JPC_Shape *superObj;
};
typedef struct JPC_HeightFieldShape JPC_HeightFieldShape_t;

struct JPC_HeightFieldShapeConstantValues {
  void *obj;
};
typedef struct JPC_HeightFieldShapeConstantValues JPC_HeightFieldShapeConstantValues_t;

struct JPC_HeightFieldShapeSettings {
  void *obj;
  struct JPC_ShapeSettings *superObj;
};
typedef struct JPC_HeightFieldShapeSettings JPC_HeightFieldShapeSettings_t;

struct JPC_HingeConstraint {
  void *obj;
  struct JPC_TwoBodyConstraint *superObj;
};
typedef struct JPC_HingeConstraint JPC_HingeConstraint_t;

struct JPC_HingeConstraintSettings {
  void *obj;
  struct JPC_TwoBodyConstraintSettings *superObj;
};
typedef struct JPC_HingeConstraintSettings JPC_HingeConstraintSettings_t;

struct JPC_IgnoreMultipleBodiesFilter {
  void *obj;
  struct JPC_BodyFilter *superObj;
};
typedef struct JPC_IgnoreMultipleBodiesFilter JPC_IgnoreMultipleBodiesFilter_t;

struct JPC_IgnoreSingleBodyFilter {
  void *obj;
  struct JPC_BodyFilter *superObj;
};
typedef struct JPC_IgnoreSingleBodyFilter JPC_IgnoreSingleBodyFilter_t;

struct JPC_IndexedTriangle {
  void *obj;
};
typedef struct JPC_IndexedTriangle JPC_IndexedTriangle_t;

struct JPC_IndexedTriangleList {
  void *obj;
};
typedef struct JPC_IndexedTriangleList JPC_IndexedTriangleList_t;

struct JPC_JPHString {
  void *obj;
};
typedef struct JPC_JPHString JPC_JPHString_t;

struct JPC_JoltInterface {
  void *obj;
};
typedef struct JPC_JoltInterface JPC_JoltInterface_t;

struct JPC_JoltSettings {
  void *obj;
};
typedef struct JPC_JoltSettings JPC_JoltSettings_t;

struct JPC_LinearCurve {
  void *obj;
};
typedef struct JPC_LinearCurve JPC_LinearCurve_t;

struct JPC_MassProperties {
  void *obj;
};
typedef struct JPC_MassProperties JPC_MassProperties_t;

struct JPC_Mat44 {
  void *obj;
};
typedef struct JPC_Mat44 JPC_Mat44_t;

struct JPC_Mat44MemRef {
  void *obj;
};
typedef struct JPC_Mat44MemRef JPC_Mat44MemRef_t;

struct JPC_MeshShape {
  void *obj;
  struct JPC_Shape *superObj;
};
typedef struct JPC_MeshShape JPC_MeshShape_t;

struct JPC_MeshShapeSettings {
  void *obj;
  struct JPC_ShapeSettings *superObj;
};
typedef struct JPC_MeshShapeSettings JPC_MeshShapeSettings_t;

struct JPC_MotionProperties {
  void *obj;
};
typedef struct JPC_MotionProperties JPC_MotionProperties_t;

struct JPC_MotorSettings {
  void *obj;
};
typedef struct JPC_MotorSettings JPC_MotorSettings_t;

struct JPC_MotorcycleController {
  void *obj;
  struct JPC_WheeledVehicleController *superObj;
};
typedef struct JPC_MotorcycleController JPC_MotorcycleController_t;

struct JPC_MotorcycleControllerSettings {
  void *obj;
  struct JPC_WheeledVehicleControllerSettings *superObj;
};
typedef struct JPC_MotorcycleControllerSettings JPC_MotorcycleControllerSettings_t;

struct JPC_NarrowPhaseQuery {
  void *obj;
};
typedef struct JPC_NarrowPhaseQuery JPC_NarrowPhaseQuery_t;

struct JPC_ObjectLayerFilter {
  void *obj;
};
typedef struct JPC_ObjectLayerFilter JPC_ObjectLayerFilter_t;

struct JPC_ObjectLayerPairFilter {
  void *obj;
};
typedef struct JPC_ObjectLayerPairFilter JPC_ObjectLayerPairFilter_t;

struct JPC_ObjectLayerPairFilterMask {
  void *obj;
  struct JPC_ObjectLayerPairFilter *superObj;
};
typedef struct JPC_ObjectLayerPairFilterMask JPC_ObjectLayerPairFilterMask_t;

struct JPC_ObjectLayerPairFilterTable {
  void *obj;
  struct JPC_ObjectLayerPairFilter *superObj;
};
typedef struct JPC_ObjectLayerPairFilterTable JPC_ObjectLayerPairFilterTable_t;

struct JPC_ObjectVsBroadPhaseLayerFilter {
  void *obj;
};
typedef struct JPC_ObjectVsBroadPhaseLayerFilter JPC_ObjectVsBroadPhaseLayerFilter_t;

struct JPC_ObjectVsBroadPhaseLayerFilterEm {
  void *obj;
  struct JPC_ObjectVsBroadPhaseLayerFilter *superObj;
};
typedef struct JPC_ObjectVsBroadPhaseLayerFilterEm JPC_ObjectVsBroadPhaseLayerFilterEm_t;

struct JPC_ObjectVsBroadPhaseLayerFilterMask {
  void *obj;
  struct JPC_ObjectVsBroadPhaseLayerFilter *superObj;
};
typedef struct JPC_ObjectVsBroadPhaseLayerFilterMask JPC_ObjectVsBroadPhaseLayerFilterMask_t;

struct JPC_ObjectVsBroadPhaseLayerFilterTable {
  void *obj;
  struct JPC_ObjectVsBroadPhaseLayerFilter *superObj;
};
typedef struct JPC_ObjectVsBroadPhaseLayerFilterTable JPC_ObjectVsBroadPhaseLayerFilterTable_t;

struct JPC_OffsetCenterOfMassShape {
  void *obj;
  struct JPC_DecoratedShape *superObj;
};
typedef struct JPC_OffsetCenterOfMassShape JPC_OffsetCenterOfMassShape_t;

struct JPC_OffsetCenterOfMassShapeSettings {
  void *obj;
  struct JPC_DecoratedShapeSettings *superObj;
};
typedef struct JPC_OffsetCenterOfMassShapeSettings JPC_OffsetCenterOfMassShapeSettings_t;

struct JPC_OrientedBox {
  void *obj;
};
typedef struct JPC_OrientedBox JPC_OrientedBox_t;

struct JPC_PathConstraint {
  void *obj;
  struct JPC_TwoBodyConstraint *superObj;
};
typedef struct JPC_PathConstraint JPC_PathConstraint_t;

struct JPC_PathConstraintPath {
  void *obj;
};
typedef struct JPC_PathConstraintPath JPC_PathConstraintPath_t;

struct JPC_PathConstraintPathEm {
  void *obj;
  struct JPC_PathConstraintPath *superObj;
};
typedef struct JPC_PathConstraintPathEm JPC_PathConstraintPathEm_t;

struct JPC_PathConstraintSettings {
  void *obj;
  struct JPC_TwoBodyConstraintSettings *superObj;
};
typedef struct JPC_PathConstraintSettings JPC_PathConstraintSettings_t;

struct JPC_PhysicsMaterial {
  void *obj;
};
typedef struct JPC_PhysicsMaterial JPC_PhysicsMaterial_t;

struct JPC_PhysicsMaterialList {
  void *obj;
};
typedef struct JPC_PhysicsMaterialList JPC_PhysicsMaterialList_t;

struct JPC_PhysicsSettings {
  void *obj;
};
typedef struct JPC_PhysicsSettings JPC_PhysicsSettings_t;

struct JPC_PhysicsStepListener {
  void *obj;
};
typedef struct JPC_PhysicsStepListener JPC_PhysicsStepListener_t;

struct JPC_PhysicsSystem {
  void *obj;
};
typedef struct JPC_PhysicsSystem JPC_PhysicsSystem_t;

struct JPC_Plane {
  void *obj;
};
typedef struct JPC_Plane JPC_Plane_t;

struct JPC_PointConstraint {
  void *obj;
  struct JPC_TwoBodyConstraint *superObj;
};
typedef struct JPC_PointConstraint JPC_PointConstraint_t;

struct JPC_PointConstraintSettings {
  void *obj;
  struct JPC_TwoBodyConstraintSettings *superObj;
};
typedef struct JPC_PointConstraintSettings JPC_PointConstraintSettings_t;

struct JPC_PulleyConstraint {
  void *obj;
  struct JPC_TwoBodyConstraint *superObj;
};
typedef struct JPC_PulleyConstraint JPC_PulleyConstraint_t;

struct JPC_PulleyConstraintSettings {
  void *obj;
  struct JPC_TwoBodyConstraintSettings *superObj;
};
typedef struct JPC_PulleyConstraintSettings JPC_PulleyConstraintSettings_t;

struct JPC_Quat {
  void *obj;
};
typedef struct JPC_Quat JPC_Quat_t;

struct JPC_RMat44 {
  void *obj;
};
typedef struct JPC_RMat44 JPC_RMat44_t;

struct JPC_RRayCast {
  void *obj;
};
typedef struct JPC_RRayCast JPC_RRayCast_t;

struct JPC_RShapeCast {
  void *obj;
};
typedef struct JPC_RShapeCast JPC_RShapeCast_t;

struct JPC_RVec3 {
  void *obj;
};
typedef struct JPC_RVec3 JPC_RVec3_t;

struct JPC_RackAndPinionConstraint {
  void *obj;
  struct JPC_TwoBodyConstraint *superObj;
};
typedef struct JPC_RackAndPinionConstraint JPC_RackAndPinionConstraint_t;

struct JPC_RackAndPinionConstraintSettings {
  void *obj;
  struct JPC_TwoBodyConstraintSettings *superObj;
};
typedef struct JPC_RackAndPinionConstraintSettings JPC_RackAndPinionConstraintSettings_t;

struct JPC_Ragdoll {
  void *obj;
};
typedef struct JPC_Ragdoll JPC_Ragdoll_t;

struct JPC_RagdollAdditionalConstraint {
  void *obj;
};
typedef struct JPC_RagdollAdditionalConstraint JPC_RagdollAdditionalConstraint_t;

struct JPC_RagdollPart {
  void *obj;
  struct JPC_BodyCreationSettings *superObj;
};
typedef struct JPC_RagdollPart JPC_RagdollPart_t;

struct JPC_RagdollSettings {
  void *obj;
};
typedef struct JPC_RagdollSettings JPC_RagdollSettings_t;

struct JPC_RayCast {
  void *obj;
};
typedef struct JPC_RayCast JPC_RayCast_t;

struct JPC_RayCastBodyCollector {
  void *obj;
};
typedef struct JPC_RayCastBodyCollector JPC_RayCastBodyCollector_t;

struct JPC_RayCastResult {
  void *obj;
  struct JPC_BroadPhaseCastResult *superObj;
};
typedef struct JPC_RayCastResult JPC_RayCastResult_t;

struct JPC_RayCastSettings {
  void *obj;
};
typedef struct JPC_RayCastSettings JPC_RayCastSettings_t;

struct JPC_RotatedTranslatedShape {
  void *obj;
  struct JPC_DecoratedShape *superObj;
};
typedef struct JPC_RotatedTranslatedShape JPC_RotatedTranslatedShape_t;

struct JPC_RotatedTranslatedShapeSettings {
  void *obj;
  struct JPC_DecoratedShapeSettings *superObj;
};
typedef struct JPC_RotatedTranslatedShapeSettings JPC_RotatedTranslatedShapeSettings_t;

struct JPC_ScaledShape {
  void *obj;
  struct JPC_DecoratedShape *superObj;
};
typedef struct JPC_ScaledShape JPC_ScaledShape_t;

struct JPC_ScaledShapeSettings {
  void *obj;
  struct JPC_DecoratedShapeSettings *superObj;
};
typedef struct JPC_ScaledShapeSettings JPC_ScaledShapeSettings_t;

struct JPC_Shape {
  void *obj;
};
typedef struct JPC_Shape JPC_Shape_t;

struct JPC_Shape_ShapeResult {
  void *obj;
};
typedef struct JPC_Shape_ShapeResult JPC_Shape_ShapeResult_t;

struct JPC_ShapeCast {
  void *obj;
};
typedef struct JPC_ShapeCast JPC_ShapeCast_t;

struct JPC_ShapeCastResult {
  void *obj;
  struct JPC_CollideShapeResult *superObj;
};
typedef struct JPC_ShapeCastResult JPC_ShapeCastResult_t;

struct JPC_ShapeCastSettings {
  void *obj;
  struct JPC_CollideSettingsBase *superObj;
};
typedef struct JPC_ShapeCastSettings JPC_ShapeCastSettings_t;

struct JPC_ShapeFilter {
  void *obj;
};
typedef struct JPC_ShapeFilter JPC_ShapeFilter_t;

struct JPC_ShapeGetTriangles {
  void *obj;
};
typedef struct JPC_ShapeGetTriangles JPC_ShapeGetTriangles_t;

struct JPC_ShapeSettings {
  void *obj;
};
typedef struct JPC_ShapeSettings JPC_ShapeSettings_t;

struct JPC_SixDOFConstraint {
  void *obj;
  struct JPC_TwoBodyConstraint *superObj;
};
typedef struct JPC_SixDOFConstraint JPC_SixDOFConstraint_t;

struct JPC_SixDOFConstraintSettings {
  void *obj;
  struct JPC_TwoBodyConstraintSettings *superObj;
};
typedef struct JPC_SixDOFConstraintSettings JPC_SixDOFConstraintSettings_t;

struct JPC_SkeletalAnimation {
  void *obj;
};
typedef struct JPC_SkeletalAnimation JPC_SkeletalAnimation_t;

struct JPC_SkeletalAnimationAnimatedJoint {
  void *obj;
};
typedef struct JPC_SkeletalAnimationAnimatedJoint JPC_SkeletalAnimationAnimatedJoint_t;

struct JPC_SkeletalAnimationJointState {
  void *obj;
};
typedef struct JPC_SkeletalAnimationJointState JPC_SkeletalAnimationJointState_t;

struct JPC_SkeletalAnimationKeyframe {
  void *obj;
  struct JPC_SkeletalAnimationJointState *superObj;
};
typedef struct JPC_SkeletalAnimationKeyframe JPC_SkeletalAnimationKeyframe_t;

struct JPC_Skeleton {
  void *obj;
};
typedef struct JPC_Skeleton JPC_Skeleton_t;

struct JPC_SkeletonPose {
  void *obj;
};
typedef struct JPC_SkeletonPose JPC_SkeletonPose_t;

struct JPC_SliderConstraint {
  void *obj;
  struct JPC_TwoBodyConstraint *superObj;
};
typedef struct JPC_SliderConstraint JPC_SliderConstraint_t;

struct JPC_SliderConstraintSettings {
  void *obj;
  struct JPC_TwoBodyConstraintSettings *superObj;
};
typedef struct JPC_SliderConstraintSettings JPC_SliderConstraintSettings_t;

struct JPC_SoftBodyContactListener {
  void *obj;
};
typedef struct JPC_SoftBodyContactListener JPC_SoftBodyContactListener_t;

struct JPC_SoftBodyContactListenerEm {
  void *obj;
  struct JPC_SoftBodyContactListener *superObj;
};
typedef struct JPC_SoftBodyContactListenerEm JPC_SoftBodyContactListenerEm_t;

struct JPC_SoftBodyContactSettings {
  void *obj;
};
typedef struct JPC_SoftBodyContactSettings JPC_SoftBodyContactSettings_t;

struct JPC_SoftBodyCreationSettings {
  void *obj;
};
typedef struct JPC_SoftBodyCreationSettings JPC_SoftBodyCreationSettings_t;

struct JPC_SoftBodyManifold {
  void *obj;
};
typedef struct JPC_SoftBodyManifold JPC_SoftBodyManifold_t;

struct JPC_SoftBodyMotionProperties {
  void *obj;
  struct JPC_MotionProperties *superObj;
};
typedef struct JPC_SoftBodyMotionProperties JPC_SoftBodyMotionProperties_t;

struct JPC_SoftBodyShape {
  void *obj;
  struct JPC_Shape *superObj;
};
typedef struct JPC_SoftBodyShape JPC_SoftBodyShape_t;

struct JPC_SoftBodySharedSettings {
  void *obj;
};
typedef struct JPC_SoftBodySharedSettings JPC_SoftBodySharedSettings_t;

struct JPC_SoftBodySharedSettingsDihedralBend {
  void *obj;
};
typedef struct JPC_SoftBodySharedSettingsDihedralBend JPC_SoftBodySharedSettingsDihedralBend_t;

struct JPC_SoftBodySharedSettingsEdge {
  void *obj;
};
typedef struct JPC_SoftBodySharedSettingsEdge JPC_SoftBodySharedSettingsEdge_t;

struct JPC_SoftBodySharedSettingsFace {
  void *obj;
};
typedef struct JPC_SoftBodySharedSettingsFace JPC_SoftBodySharedSettingsFace_t;

struct JPC_SoftBodySharedSettingsInvBind {
  void *obj;
};
typedef struct JPC_SoftBodySharedSettingsInvBind JPC_SoftBodySharedSettingsInvBind_t;

struct JPC_SoftBodySharedSettingsLRA {
  void *obj;
};
typedef struct JPC_SoftBodySharedSettingsLRA JPC_SoftBodySharedSettingsLRA_t;

struct JPC_SoftBodySharedSettingsSkinWeight {
  void *obj;
};
typedef struct JPC_SoftBodySharedSettingsSkinWeight JPC_SoftBodySharedSettingsSkinWeight_t;

struct JPC_SoftBodySharedSettingsSkinned {
  void *obj;
};
typedef struct JPC_SoftBodySharedSettingsSkinned JPC_SoftBodySharedSettingsSkinned_t;

struct JPC_SoftBodySharedSettingsVertex {
  void *obj;
};
typedef struct JPC_SoftBodySharedSettingsVertex JPC_SoftBodySharedSettingsVertex_t;

struct JPC_SoftBodySharedSettingsVertexAttributes {
  void *obj;
};
typedef struct JPC_SoftBodySharedSettingsVertexAttributes JPC_SoftBodySharedSettingsVertexAttributes_t;

struct JPC_SoftBodySharedSettingsVolume {
  void *obj;
};
typedef struct JPC_SoftBodySharedSettingsVolume JPC_SoftBodySharedSettingsVolume_t;

struct JPC_SoftBodyVertex {
  void *obj;
};
typedef struct JPC_SoftBodyVertex JPC_SoftBodyVertex_t;

struct JPC_SoftBodyVertexTraits {
  void *obj;
};
typedef struct JPC_SoftBodyVertexTraits JPC_SoftBodyVertexTraits_t;

struct JPC_SpecifiedObjectLayerFilter {
  void *obj;
  struct JPC_ObjectLayerFilter *superObj;
};
typedef struct JPC_SpecifiedObjectLayerFilter JPC_SpecifiedObjectLayerFilter_t;

struct JPC_SphereShape {
  void *obj;
  struct JPC_ConvexShape *superObj;
};
typedef struct JPC_SphereShape JPC_SphereShape_t;

struct JPC_SphereShapeSettings {
  void *obj;
  struct JPC_ConvexShapeSettings *superObj;
};
typedef struct JPC_SphereShapeSettings JPC_SphereShapeSettings_t;

struct JPC_SpringSettings {
  void *obj;
};
typedef struct JPC_SpringSettings JPC_SpringSettings_t;

struct JPC_StateRecorder {
  void *obj;
};
typedef struct JPC_StateRecorder JPC_StateRecorder_t;

struct JPC_StateRecorderImpl {
  void *obj;
  struct JPC_StateRecorder *superObj;
};
typedef struct JPC_StateRecorderImpl JPC_StateRecorderImpl_t;

struct JPC_StaticCompoundShape {
  void *obj;
  struct JPC_CompoundShape *superObj;
};
typedef struct JPC_StaticCompoundShape JPC_StaticCompoundShape_t;

struct JPC_StaticCompoundShapeSettings {
  void *obj;
  struct JPC_ShapeSettings *superObj;
};
typedef struct JPC_StaticCompoundShapeSettings JPC_StaticCompoundShapeSettings_t;

struct JPC_SubShapeID {
  void *obj;
};
typedef struct JPC_SubShapeID JPC_SubShapeID_t;

struct JPC_SubShapeIDPair {
  void *obj;
};
typedef struct JPC_SubShapeIDPair JPC_SubShapeIDPair_t;

struct JPC_SwingTwistConstraint {
  void *obj;
  struct JPC_TwoBodyConstraint *superObj;
};
typedef struct JPC_SwingTwistConstraint JPC_SwingTwistConstraint_t;

struct JPC_SwingTwistConstraintSettings {
  void *obj;
  struct JPC_TwoBodyConstraintSettings *superObj;
};
typedef struct JPC_SwingTwistConstraintSettings JPC_SwingTwistConstraintSettings_t;

struct JPC_TaperedCapsuleShape {
  void *obj;
  struct JPC_ConvexShape *superObj;
};
typedef struct JPC_TaperedCapsuleShape JPC_TaperedCapsuleShape_t;

struct JPC_TaperedCapsuleShapeSettings {
  void *obj;
  struct JPC_ConvexShapeSettings *superObj;
};
typedef struct JPC_TaperedCapsuleShapeSettings JPC_TaperedCapsuleShapeSettings_t;

struct JPC_TempAllocator {
  void *obj;
};
typedef struct JPC_TempAllocator JPC_TempAllocator_t;

struct JPC_TrackedVehicleController {
  void *obj;
  struct JPC_VehicleController *superObj;
};
typedef struct JPC_TrackedVehicleController JPC_TrackedVehicleController_t;

struct JPC_TrackedVehicleControllerSettings {
  void *obj;
  struct JPC_VehicleControllerSettings *superObj;
};
typedef struct JPC_TrackedVehicleControllerSettings JPC_TrackedVehicleControllerSettings_t;

struct JPC_TransformedShape {
  void *obj;
};
typedef struct JPC_TransformedShape JPC_TransformedShape_t;

struct JPC_TransformedShapeCollector {
  void *obj;
};
typedef struct JPC_TransformedShapeCollector JPC_TransformedShapeCollector_t;

struct JPC_Triangle {
  void *obj;
};
typedef struct JPC_Triangle JPC_Triangle_t;

struct JPC_TriangleList {
  void *obj;
};
typedef struct JPC_TriangleList JPC_TriangleList_t;

struct JPC_TwoBodyConstraint {
  void *obj;
  struct JPC_Constraint *superObj;
};
typedef struct JPC_TwoBodyConstraint JPC_TwoBodyConstraint_t;

struct JPC_TwoBodyConstraintSettings {
  void *obj;
  struct JPC_ConstraintSettings *superObj;
};
typedef struct JPC_TwoBodyConstraintSettings JPC_TwoBodyConstraintSettings_t;

struct JPC_Uint8MemRef {
  void *obj;
};
typedef struct JPC_Uint8MemRef JPC_Uint8MemRef_t;

struct JPC_UintMemRef {
  void *obj;
};
typedef struct JPC_UintMemRef JPC_UintMemRef_t;

struct JPC_Vec3 {
  void *obj;
};
typedef struct JPC_Vec3 JPC_Vec3_t;

struct JPC_Vec3MemRef {
  void *obj;
};
typedef struct JPC_Vec3MemRef JPC_Vec3MemRef_t;

struct JPC_Vec4 {
  void *obj;
};
typedef struct JPC_Vec4 JPC_Vec4_t;

struct JPC_Vector2 {
  void *obj;
};
typedef struct JPC_Vector2 JPC_Vector2_t;

struct JPC_VehicleAntiRollBar {
  void *obj;
};
typedef struct JPC_VehicleAntiRollBar JPC_VehicleAntiRollBar_t;

struct JPC_VehicleCollisionTester {
  void *obj;
};
typedef struct JPC_VehicleCollisionTester JPC_VehicleCollisionTester_t;

struct JPC_VehicleCollisionTesterCastCylinder {
  void *obj;
  struct JPC_VehicleCollisionTester *superObj;
};
typedef struct JPC_VehicleCollisionTesterCastCylinder JPC_VehicleCollisionTesterCastCylinder_t;

struct JPC_VehicleCollisionTesterCastSphere {
  void *obj;
  struct JPC_VehicleCollisionTester *superObj;
};
typedef struct JPC_VehicleCollisionTesterCastSphere JPC_VehicleCollisionTesterCastSphere_t;

struct JPC_VehicleCollisionTesterRay {
  void *obj;
  struct JPC_VehicleCollisionTester *superObj;
};
typedef struct JPC_VehicleCollisionTesterRay JPC_VehicleCollisionTesterRay_t;

struct JPC_VehicleConstraint {
  void *obj;
  struct JPC_Constraint *superObj;
};
typedef struct JPC_VehicleConstraint JPC_VehicleConstraint_t;

struct JPC_VehicleConstraintCallbacksEm {
  void *obj;
};
typedef struct JPC_VehicleConstraintCallbacksEm JPC_VehicleConstraintCallbacksEm_t;

struct JPC_VehicleConstraintSettings {
  void *obj;
  struct JPC_ConstraintSettings *superObj;
};
typedef struct JPC_VehicleConstraintSettings JPC_VehicleConstraintSettings_t;

struct JPC_VehicleConstraintStepListener {
  void *obj;
  struct JPC_PhysicsStepListener *superObj;
};
typedef struct JPC_VehicleConstraintStepListener JPC_VehicleConstraintStepListener_t;

struct JPC_VehicleController {
  void *obj;
};
typedef struct JPC_VehicleController JPC_VehicleController_t;

struct JPC_VehicleControllerSettings {
  void *obj;
};
typedef struct JPC_VehicleControllerSettings JPC_VehicleControllerSettings_t;

struct JPC_VehicleDifferentialSettings {
  void *obj;
};
typedef struct JPC_VehicleDifferentialSettings JPC_VehicleDifferentialSettings_t;

struct JPC_VehicleEngine {
  void *obj;
  struct JPC_VehicleEngineSettings *superObj;
};
typedef struct JPC_VehicleEngine JPC_VehicleEngine_t;

struct JPC_VehicleEngineSettings {
  void *obj;
};
typedef struct JPC_VehicleEngineSettings JPC_VehicleEngineSettings_t;

struct JPC_VehicleTrack {
  void *obj;
  struct JPC_VehicleTrackSettings *superObj;
};
typedef struct JPC_VehicleTrack JPC_VehicleTrack_t;

struct JPC_VehicleTrackSettings {
  void *obj;
};
typedef struct JPC_VehicleTrackSettings JPC_VehicleTrackSettings_t;

struct JPC_VehicleTransmission {
  void *obj;
  struct JPC_VehicleTransmissionSettings *superObj;
};
typedef struct JPC_VehicleTransmission JPC_VehicleTransmission_t;

struct JPC_VehicleTransmissionSettings {
  void *obj;
};
typedef struct JPC_VehicleTransmissionSettings JPC_VehicleTransmissionSettings_t;

struct JPC_VertexList {
  void *obj;
};
typedef struct JPC_VertexList JPC_VertexList_t;

struct JPC_Wheel {
  void *obj;
};
typedef struct JPC_Wheel JPC_Wheel_t;

struct JPC_WheelSettings {
  void *obj;
};
typedef struct JPC_WheelSettings JPC_WheelSettings_t;

struct JPC_WheelSettingsTV {
  void *obj;
  struct JPC_WheelSettings *superObj;
};
typedef struct JPC_WheelSettingsTV JPC_WheelSettingsTV_t;

struct JPC_WheelSettingsWV {
  void *obj;
  struct JPC_WheelSettings *superObj;
};
typedef struct JPC_WheelSettingsWV JPC_WheelSettingsWV_t;

struct JPC_WheelTV {
  void *obj;
  struct JPC_Wheel *superObj;
};
typedef struct JPC_WheelTV JPC_WheelTV_t;

struct JPC_WheelWV {
  void *obj;
  struct JPC_Wheel *superObj;
};
typedef struct JPC_WheelWV JPC_WheelWV_t;

struct JPC_WheeledVehicleController {
  void *obj;
  struct JPC_VehicleController *superObj;
};
typedef struct JPC_WheeledVehicleController JPC_WheeledVehicleController_t;

struct JPC_WheeledVehicleControllerSettings {
  void *obj;
  struct JPC_VehicleControllerSettings *superObj;
};
typedef struct JPC_WheeledVehicleControllerSettings JPC_WheeledVehicleControllerSettings_t;

typedef enum {
  JPC_EBodyType_RigidBody = 0,
  JPC_EBodyType_SoftBody = 1,
} JPC_EBodyType;

typedef enum {
  JPC_EMotionType_Static = 0,
  JPC_EMotionType_Kinematic = 1,
  JPC_EMotionType_Dynamic = 2,
} JPC_EMotionType;

typedef enum {
  JPC_EMotionQuality_Discrete = 0,
  JPC_EMotionQuality_LinearCast = 1,
} JPC_EMotionQuality;

typedef enum {
  JPC_EActivation_Activate = 0,
  JPC_EActivation_DontActivate = 1,
} JPC_EActivation;

typedef enum {
  JPC_EShapeType_Convex = 0,
  JPC_EShapeType_Compound = 1,
  JPC_EShapeType_Decorated = 2,
  JPC_EShapeType_Mesh = 3,
  JPC_EShapeType_HeightField = 4,
} JPC_EShapeType;

typedef enum {
  JPC_EShapeSubType_Sphere = 0,
  JPC_EShapeSubType_Box = 1,
  JPC_EShapeSubType_Capsule = 2,
  JPC_EShapeSubType_TaperedCapsule = 3,
  JPC_EShapeSubType_Cylinder = 4,
  JPC_EShapeSubType_ConvexHull = 5,
  JPC_EShapeSubType_StaticCompound = 6,
  JPC_EShapeSubType_MutableCompound = 7,
  JPC_EShapeSubType_RotatedTranslated = 8,
  JPC_EShapeSubType_Scaled = 9,
  JPC_EShapeSubType_OffsetCenterOfMass = 10,
  JPC_EShapeSubType_Mesh = 11,
  JPC_EShapeSubType_HeightField = 12,
} JPC_EShapeSubType;

typedef enum {
  JPC_EConstraintSpace_LocalToBodyCOM = 0,
  JPC_EConstraintSpace_WorldSpace = 1,
} JPC_EConstraintSpace;

typedef enum {
  JPC_ESpringMode_FrequencyAndDamping = 0,
  JPC_ESpringMode_StiffnessAndDamping = 1,
} JPC_ESpringMode;

typedef enum {
  JPC_EOverrideMassProperties_CalculateMassAndInertia = 0,
  JPC_EOverrideMassProperties_CalculateInertia = 1,
  JPC_EOverrideMassProperties_MassAndInertiaProvided = 2,
} JPC_EOverrideMassProperties;

typedef enum {
  JPC_EAllowedDOFs_TranslationX = 0,
  JPC_EAllowedDOFs_TranslationY = 1,
  JPC_EAllowedDOFs_TranslationZ = 2,
  JPC_EAllowedDOFs_RotationX = 3,
  JPC_EAllowedDOFs_RotationY = 4,
  JPC_EAllowedDOFs_RotationZ = 5,
  JPC_EAllowedDOFs_Plane2D = 6,
  JPC_EAllowedDOFs_All = 7,
} JPC_EAllowedDOFs;

typedef enum {
  JPC_EStateRecorderState_None = 0,
  JPC_EStateRecorderState_Global = 1,
  JPC_EStateRecorderState_Bodies = 2,
  JPC_EStateRecorderState_Contacts = 3,
  JPC_EStateRecorderState_Constraints = 4,
  JPC_EStateRecorderState_All = 5,
} JPC_EStateRecorderState;

typedef enum {
  JPC_EBackFaceMode_IgnoreBackFaces = 0,
  JPC_EBackFaceMode_CollideWithBackFaces = 1,
} JPC_EBackFaceMode;

typedef enum {
  JPC_EGroundState_OnGround = 0,
  JPC_EGroundState_OnSteepGround = 1,
  JPC_EGroundState_NotSupported = 2,
  JPC_EGroundState_InAir = 3,
} JPC_EGroundState;

typedef enum {
  JPC_ValidateResult_AcceptAllContactsForThisBodyPair = 0,
  JPC_ValidateResult_AcceptContact = 1,
  JPC_ValidateResult_RejectContact = 2,
  JPC_ValidateResult_RejectAllContactsForThisBodyPair = 3,
} JPC_ValidateResult;

typedef enum {
  JPC_SoftBodyValidateResult_AcceptContact = 0,
  JPC_SoftBodyValidateResult_RejectContact = 1,
} JPC_SoftBodyValidateResult;

typedef enum {
  JPC_EActiveEdgeMode_CollideOnlyWithActive = 0,
  JPC_EActiveEdgeMode_CollideWithAll = 1,
} JPC_EActiveEdgeMode;

typedef enum {
  JPC_ECollectFacesMode_CollectFaces = 0,
  JPC_ECollectFacesMode_NoFaces = 1,
} JPC_ECollectFacesMode;

typedef enum {
  JPC_SixDOFConstraintSettings_EAxis_TranslationX = 0,
  JPC_SixDOFConstraintSettings_EAxis_TranslationY = 1,
  JPC_SixDOFConstraintSettings_EAxis_TranslationZ = 2,
  JPC_SixDOFConstraintSettings_EAxis_RotationX = 3,
  JPC_SixDOFConstraintSettings_EAxis_RotationY = 4,
  JPC_SixDOFConstraintSettings_EAxis_RotationZ = 5,
} JPC_SixDOFConstraintSettings_EAxis;

typedef enum {
  JPC_EConstraintType_Constraint = 0,
  JPC_EConstraintType_TwoBodyConstraint = 1,
} JPC_EConstraintType;

typedef enum {
  JPC_EConstraintSubType_Fixed = 0,
  JPC_EConstraintSubType_Point = 1,
  JPC_EConstraintSubType_Hinge = 2,
  JPC_EConstraintSubType_Slider = 3,
  JPC_EConstraintSubType_Distance = 4,
  JPC_EConstraintSubType_Cone = 5,
  JPC_EConstraintSubType_SwingTwist = 6,
  JPC_EConstraintSubType_SixDOF = 7,
  JPC_EConstraintSubType_Path = 8,
  JPC_EConstraintSubType_Vehicle = 9,
  JPC_EConstraintSubType_RackAndPinion = 10,
  JPC_EConstraintSubType_Gear = 11,
  JPC_EConstraintSubType_Pulley = 12,
} JPC_EConstraintSubType;

typedef enum {
  JPC_EMotorState_Off = 0,
  JPC_EMotorState_Velocity = 1,
  JPC_EMotorState_Position = 2,
} JPC_EMotorState;

typedef enum {
  JPC_ETransmissionMode_Auto = 0,
  JPC_ETransmissionMode_Manual = 1,
} JPC_ETransmissionMode;

typedef enum {
  JPC_ETireFrictionDirection_Longitudinal = 0,
  JPC_ETireFrictionDirection_Lateral = 1,
} JPC_ETireFrictionDirection;

typedef enum {
  JPC_ESwingType_Cone = 0,
  JPC_ESwingType_Pyramid = 1,
} JPC_ESwingType;

typedef enum {
  JPC_EPathRotationConstraintType_Free = 0,
  JPC_EPathRotationConstraintType_ConstrainAroundTangent = 1,
  JPC_EPathRotationConstraintType_ConstrainAroundNormal = 2,
  JPC_EPathRotationConstraintType_ConstrainAroundBinormal = 3,
  JPC_EPathRotationConstraintType_ConstrainToPath = 4,
  JPC_EPathRotationConstraintType_FullyConstrained = 5,
} JPC_EPathRotationConstraintType;

typedef enum {
  JPC_SoftBodySharedSettings_EBendType_None = 0,
  JPC_SoftBodySharedSettings_EBendType_Distance = 1,
  JPC_SoftBodySharedSettings_EBendType_Dihedral = 2,
} JPC_SoftBodySharedSettings_EBendType;

typedef enum {
  JPC_SoftBodySharedSettings_ELRAType_None = 0,
  JPC_SoftBodySharedSettings_ELRAType_EuclideanDistance = 1,
  JPC_SoftBodySharedSettings_ELRAType_GeodesicDistance = 2,
} JPC_SoftBodySharedSettings_ELRAType;


#ifdef __cplusplus
}
#endif
