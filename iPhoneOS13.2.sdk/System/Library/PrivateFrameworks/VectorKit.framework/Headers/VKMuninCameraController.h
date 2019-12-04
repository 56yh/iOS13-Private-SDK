//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKCameraController.h>

#import <VectorKit/VKGesturingCameraController-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VKMuninCameraController : VKCameraController <VKGesturingCameraController>
{
    struct MuninSceneLogic *_muninSceneLogic;
    shared_ptr_e963992e _taskContext;
    struct optional<(anonymous namespace)::PointSegment> _currentPointSegment;
    struct unique_ptr<(anonymous namespace)::PathAnimator, std::__1::default_delete<(anonymous namespace)::PathAnimator>> _pathAnimator;
    struct unique_ptr<(anonymous namespace)::BumpAnimator, std::__1::default_delete<(anonymous namespace)::BumpAnimator>> _bumpAnimator;
    _Bool _panning;
    _Bool _panStopping;
    Matrix_8746f91e _panTranslation;
    struct _retain_ptr<VKTimedAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _panAnimation;
    _Bool _pinching;
    Matrix_8746f91e _pinchZoomOffset;
    Unit_3d259e8a _pinchStartFieldOfView;
    struct _retain_ptr<VKTimedAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _pinchResetAnimation;
    _Bool _virtualParallaxEnabled;
    float _cameraOffsetFactor;
    struct _retain_ptr<VKTimedAnimation *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc> _offsetAnimation;
    double _lastUpdateTime;
    struct Spring<double, 1, mdc::SpringType::Angular> _panSpring;
    Unit_3d259e8a _heading;
    Unit_3d259e8a _pitch;
    _Bool _restrictWidestFieldOfView;
    Unit_3d259e8a _widestFieldOfView;
    Coordinate3D_bc242218 _rigPosition;
    CameraFrame_406dbd31 _previousCameraFrame;
}

@property(nonatomic) _Bool virtualParallaxEnabled; // @synthesize virtualParallaxEnabled=_virtualParallaxEnabled;
- (id).cxx_construct;
- (double)zoomLevelAdjustmentForTileSize:(long long)arg1;
- (id)viewportInfo;
- (double)topDownMinimumZoomLevelForTileSize:(long long)arg1;
- (_Bool)restoreViewportFromInfo:(id)arg1;
- (double)minimumZoomLevelForTileSize:(long long)arg1;
- (double)maximumZoomLevelForTileSize:(long long)arg1;
- (double)currentZoomLevelForTileSize:(long long)arg1;
- (_Bool)canZoomOutForTileSize:(long long)arg1;
- (_Bool)canZoomInForTileSize:(long long)arg1;
- (void)zoom:(double)arg1 withFocusPoint:(struct CGPoint)arg2 completionHandler:(id /* block */)arg3;
- (void)transferGestureState:(id)arg1;
- (void)stopRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)updateRotationWithFocusPoint:(struct CGPoint)arg1 newValue:(double)arg2;
- (void)startRotatingWithFocusPoint:(struct CGPoint)arg1;
- (void)stopPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePitchWithFocusPoint:(struct CGPoint)arg1 translation:(double)arg2;
- (void)startPitchingWithFocusPoint:(struct CGPoint)arg1;
- (void)zoomAnimated:(Unit_3d259e8a)arg1 completion:(id /* block */)arg2;
- (void)zoomAnimatedWithDuration:(Unit_3d259e8a)arg1 duration:(float)arg2 completion:(id /* block */)arg3;
- (void)stopPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)updatePinchWithFocusPoint:(struct CGPoint)arg1 oldFactor:(double)arg2 newFactor:(double)arg3;
- (void)startPinchingWithFocusPoint:(struct CGPoint)arg1;
- (void)setWidestFieldOfView:(Unit_3d259e8a)arg1;
- (double)_zoomRubberBandFov:(double)arg1;
- (void)stopPanningAtPoint:(struct CGPoint)arg1;
- (void)willStopPanningAtPoint:(struct CGPoint)arg1 withVelocity:(struct CGPoint)arg2;
- (void)updatePanWithTranslation:(struct CGPoint)arg1;
- (Unit_3d259e8a)_verticalFieldOfView:(Unit_3d259e8a)arg1;
- (Unit_3d259e8a)_horizontalFieldOfView:(Unit_3d259e8a)arg1;
- (void)startPanningAtPoint:(struct CGPoint)arg1 panAtStartPoint:(_Bool)arg2;
- (_Bool)tapAtPoint:(struct CGPoint)arg1;
- (void)runBumpAnimation:(const Geocentric_d8fde6f2 *)arg1 targetPoint:(const Geocentric_d8fde6f2 *)arg2;
- (void)animatePath:(vector_e91c9c3b *)arg1 withTarget:(const Geocentric_d8fde6f2 *)arg2 lookAtTarget:(_Bool)arg3 constantLod:(_Bool)arg4 completionHandler:(id /* block */)arg5;
- (_Bool)isAnimationsRunning;
- (_Bool)isAnimationsRunningExceptBump;
- (_Bool)cancelPendingMoveExceptBump;
- (_Bool)cancelPendingMove;
- (void)stopAnimations;
- (void)stopAnimationsExceptBump;
- (void)setCurrentSegment:(struct PointSegment *)arg1;
- (_Bool)moveToPoint:(const struct CollectionPoint *)arg1 withHeading:(Unit_3d259e8a)arg2 withPitch:(Unit_3d259e8a)arg3 animated:(_Bool)arg4 completionHandler:(id /* block */)arg5;
- (void)selectLabelMarker:(const shared_ptr_2d33c5e4 *)arg1 completion:(id /* block */)arg2;
- (Matrix_8746f91e)screenPointWithOffset:(struct CGPoint)arg1;
- (void)updateCurrentPointView:(_Bool)arg1;
- (const struct CollectionPoint *)currentPoint;
- (void)setCurrentPoint:(const struct CollectionPoint *)arg1;
- (void)setCenterCoordinate:(CDStruct_c3b9c2ee)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(id /* block */)arg7 completion:(id /* block */)arg8;
- (void)setCameraFrame:(CameraFrame_406dbd31)arg1;
- (void)setCamera:(id)arg1;
- (double)altitude;
- (double)pitch;
- (void)_setHeading:(Unit_3d259e8a)arg1;
- (double)heading;
- (CDStruct_c3b9c2ee)centerCoordinate;
- (void)updateWithTimestamp:(double)arg1;
- (id)initWithTaskContext:(shared_ptr_e963992e)arg1 mapDataAccess:(struct MapDataAccess *)arg2 animationRunner:(struct AnimationRunner *)arg3 runLoopController:(struct RunLoopController *)arg4 cameraDelegate:(id)arg5 muninSceneLogic:(struct MuninSceneLogic *)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

