//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXAssetTile-Protocol.h>
#import <PhotosUICore/PXAutoplayTile-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXReusableObject-Protocol.h>
#import <PhotosUICore/PXUIViewBasicTile-Protocol.h>

@class NSString, PXImageRequester, PXVideoSession, PXVideoSessionUIView, UIView, _PXAssetLoopUIView;

@interface PXAssetLoopUIViewTile : NSObject <PXChangeObserver, PXReusableObject, PXAssetTile, PXUIViewBasicTile, PXAutoplayTile>
{
    unsigned long long _requestCount;
    _PXAssetLoopUIView *_view;
    PXVideoSession *_videoSession;
    PXVideoSessionUIView *_videoView;
    PXImageRequester *_imageRequester;
    double _cornerRadius;
    long long _desiredPlayState;
    struct CGSize _contentSize;
    struct CGRect _desiredContentsRect;
    CDStruct_e83c9415 _bestPlaybackTimeRange;
}

@property(nonatomic) struct CGSize contentSize; // @synthesize contentSize=_contentSize;
@property(nonatomic) struct CGRect desiredContentsRect; // @synthesize desiredContentsRect=_desiredContentsRect;
@property(retain, nonatomic) PXVideoSession *videoSession; // @synthesize videoSession=_videoSession;
@property(nonatomic) CDStruct_e83c9415 bestPlaybackTimeRange; // @synthesize bestPlaybackTimeRange=_bestPlaybackTimeRange;
@property(nonatomic) long long desiredPlayState; // @synthesize desiredPlayState=_desiredPlayState;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(retain, nonatomic) PXImageRequester *imageRequester; // @synthesize imageRequester=_imageRequester;
- (void)dealloc;
- (void)_reloadVideoSessionIfNecessary;
- (void)_updateVideoSession;
- (void)_updateImageRequester;
- (void)_updateLayer;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
@property(readonly, nonatomic) UIView *view;
- (void)didApplyGeometry:(struct PXTileGeometry)arg1 withUserData:(id)arg2;
- (void)prepareForReuse;
- (void)becomeReusable;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

