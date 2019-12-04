//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKImageCanvas.h>

#import <VectorKit/MDSnapshotMap-Protocol.h>
#import <VectorKit/VKMapModelDelegate-Protocol.h>

@class NSString, VKCamera, VKMapModel;

__attribute__((visibility("hidden")))
@interface VKMapImageCanvas : VKImageCanvas <VKMapModelDelegate, MDSnapshotMap>
{
    VKMapModel *_mapModel;
    VKCamera *_camera;
    // Error parsing type: ^{MapEngine=^^?{shared_ptr<md::TaskContext>=^{TaskContext}^{__shared_weak_count}}^{Device}{_retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> >={__compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> >=^{DisplayLink}}}{unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> >={__compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> >=^{SnapshotRunLoop}}}^{RunLoop}{unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager> >={__compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager> >=^{AnimationManager}}}{unique_ptr<md::AnimationRunner, std::__1::default_delete<md::AnimationRunner> >={__compressed_pair<md::AnimationRunner *, std::__1::default_delete<md::AnimationRunner> >=^{AnimationRunner}}}{shared_ptr<md::RunLoopController>=^{RunLoopController}^{__shared_weak_count}}@@@@{unique_ptr<md::CartographicRenderer, std::__1::default_delete<md::CartographicRenderer> >={__compressed_pair<md::CartographicRenderer *, std::__1::default_delete<md::CartographicRenderer> >=^{CartographicRenderer}}}{unique_ptr<md::realistic::RealisticRenderer, std::__1::default_delete<md::realistic::RealisticRenderer> >={__compressed_pair<md::realistic::RealisticRenderer *, std::__1::default_delete<md::realistic::RealisticRenderer> >=^{RealisticRenderer}}}^{Renderer}{unique_ptr<md::World, std::__1::default_delete<md::World> >={__compressed_pair<md::World *, std::__1::default_delete<md::World> >=^{World}}}{unique_ptr<md::MapDataAccess, std::__1::default_delete<md::MapDataAccess> >={__compressed_pair<md::MapDataAccess *, std::__1::default_delete<md::MapDataAccess> >=^{MapDataAccess}}}{unique_ptr<md::LayoutContext, std::__1::default_delete<md::LayoutContext> >={__compressed_pair<md::LayoutContext *, std::__1::default_delete<md::LayoutContext> >=^{LayoutContext}}}{_retain_ptr<VKCamera *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{shared_ptr<mdc::Camera>=^{Camera}^{__shared_weak_count}}{_retain_ptr<VKCameraDelegateMediator *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{unique_ptr<md::LogicManager, std::__1::default_delete<md::LogicManager> >={__compressed_pair<md::LogicManager *, std::__1::default_delete<md::LogicManager> >=^{LogicManager}}}{unique_ptr<md::MapEngineSettings, std::__1::default_delete<md::MapEngineSettings> >={__compressed_pair<md::MapEngineSettings *, std::__1::default_delete<md::MapEngineSettings> >=^{MapEngineSettings}}}{unique_ptr<mdc::LoadingStatusTracker, std::__1::default_delete<mdc::LoadingStatusTracker> >={__compressed_pair<mdc::LoadingStatusTracker *, std::__1::default_delete<mdc::LoadingStatusTracker> >=^{LoadingStatusTracker}}}{shared_ptr<mdc::Statistics>=^{Statistics}^{__shared_weak_count}}BBB{atomic<bool>=AB}{atomic<bool>=AB}B{MapEngineConfigPair=C{unique_ptr<md::MapEngineMode, std::__1::default_delete<md::MapEngineMode> >={__compressed_pair<md::MapEngineMode *, std::__1::default_delete<md::MapEngineMode> >=^{MapEngineMode}}}}{MapEngineConfigPair=C{unique_ptr<md::MapEngineMode, std::__1::default_delete<md::MapEngineMode> >={__compressed_pair<md::MapEngineMode *, std::__1::default_delete<md::MapEngineMode> >=^{MapEngineMode}}}}{unique_ptr<md::MapEngineConfiguration, std::__1::default_delete<md::MapEngineConfiguration> >={__compressed_pair<md::MapEngineConfiguration *, std::__1::default_delete<md::MapEngineConfiguration> >=^{MapEngineConfiguration}}}{_retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}QQ}, name: _mapEngine
}

- (void)mapModelDidUpdateMinMaxZoomLevel:(id)arg1;
- (void)mapModelLabelsDidLayout:(id)arg1;
- (void)mapModel:(id)arg1 labelMarkerDidChangeState:(const shared_ptr_2d33c5e4 *)arg2;
- (void)mapModel:(id)arg1 selectedLabelMarkerWillDisappear:(const shared_ptr_2d33c5e4 *)arg2;
- (void)cancelTileRequests;
- (void)clearScene;
- (void)setMapDisplayStyle:(struct DisplayStyle)arg1;
- (void)setMapType:(int)arg1;
- (void)resetCameraController;
- (void)updateWithTimestamp:(double)arg1;
- (void)dealloc;
-     // Error parsing type: @24@0:8^{MapEngine=^^?{shared_ptr<md::TaskContext>=^{TaskContext}^{__shared_weak_count}}^{Device}{_retain_ptr<_MapEngineRenderQueueSource *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{unique_ptr<ggl::DisplayLink, std::__1::default_delete<ggl::DisplayLink> >={__compressed_pair<ggl::DisplayLink *, std::__1::default_delete<ggl::DisplayLink> >=^{DisplayLink}}}{unique_ptr<ggl::SnapshotRunLoop, std::__1::default_delete<ggl::SnapshotRunLoop> >={__compressed_pair<ggl::SnapshotRunLoop *, std::__1::default_delete<ggl::SnapshotRunLoop> >=^{SnapshotRunLoop}}}^{RunLoop}{unique_ptr<md::AnimationManager, std::__1::default_delete<md::AnimationManager> >={__compressed_pair<md::AnimationManager *, std::__1::default_delete<md::AnimationManager> >=^{AnimationManager}}}{unique_ptr<md::AnimationRunner, std::__1::default_delete<md::AnimationRunner> >={__compressed_pair<md::AnimationRunner *, std::__1::default_delete<md::AnimationRunner> >=^{AnimationRunner}}}{shared_ptr<md::RunLoopController>=^{RunLoopController}^{__shared_weak_count}}@@@@{unique_ptr<md::CartographicRenderer, std::__1::default_delete<md::CartographicRenderer> >={__compressed_pair<md::CartographicRenderer *, std::__1::default_delete<md::CartographicRenderer> >=^{CartographicRenderer}}}{unique_ptr<md::realistic::RealisticRenderer, std::__1::default_delete<md::realistic::RealisticRenderer> >={__compressed_pair<md::realistic::RealisticRenderer *, std::__1::default_delete<md::realistic::RealisticRenderer> >=^{RealisticRenderer}}}^{Renderer}{unique_ptr<md::World, std::__1::default_delete<md::World> >={__compressed_pair<md::World *, std::__1::default_delete<md::World> >=^{World}}}{unique_ptr<md::MapDataAccess, std::__1::default_delete<md::MapDataAccess> >={__compressed_pair<md::MapDataAccess *, std::__1::default_delete<md::MapDataAccess> >=^{MapDataAccess}}}{unique_ptr<md::LayoutContext, std::__1::default_delete<md::LayoutContext> >={__compressed_pair<md::LayoutContext *, std::__1::default_delete<md::LayoutContext> >=^{LayoutContext}}}{_retain_ptr<VKCamera *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{shared_ptr<mdc::Camera>=^{Camera}^{__shared_weak_count}}{_retain_ptr<VKCameraDelegateMediator *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}{unique_ptr<md::LogicManager, std::__1::default_delete<md::LogicManager> >={__compressed_pair<md::LogicManager *, std::__1::default_delete<md::LogicManager> >=^{LogicManager}}}{unique_ptr<md::MapEngineSettings, std::__1::default_delete<md::MapEngineSettings> >={__compressed_pair<md::MapEngineSettings *, std::__1::default_delete<md::MapEngineSettings> >=^{MapEngineSettings}}}{unique_ptr<mdc::LoadingStatusTracker, std::__1::default_delete<mdc::LoadingStatusTracker> >={__compressed_pair<mdc::LoadingStatusTracker *, std::__1::default_delete<mdc::LoadingStatusTracker> >=^{LoadingStatusTracker}}}{shared_ptr<mdc::Statistics>=^{Statistics}^{__shared_weak_count}}BBB{atomic<bool>=AB}{atomic<bool>=AB}B{MapEngineConfigPair=C{unique_ptr<md::MapEngineMode, std::__1::default_delete<md::MapEngineMode> >={__compressed_pair<md::MapEngineMode *, std::__1::default_delete<md::MapEngineMode> >=^{MapEngineMode}}}}{MapEngineConfigPair=C{unique_ptr<md::MapEngineMode, std::__1::default_delete<md::MapEngineMode> >={__compressed_pair<md::MapEngineMode *, std::__1::default_delete<md::MapEngineMode> >=^{MapEngineMode}}}}{unique_ptr<md::MapEngineConfiguration, std::__1::default_delete<md::MapEngineConfiguration> >={__compressed_pair<md::MapEngineConfiguration *, std::__1::default_delete<md::MapEngineConfiguration> >=^{MapEngineConfiguration}}}{_retain_ptr<VKManifestTileGroupObserverProxy *, geo::_retain_objc, geo::_release_objc, geo::_hash_objc, geo::_equal_objc>=^^?@{_retain_objc=}{_release_objc=}}QQ}16, name: initWithMapEngine:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

