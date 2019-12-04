//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXChangeObserver-Protocol.h>
#import <PhotosUICore/PXGDisplayAssetPixelBufferSource-Protocol.h>

@class NSString, PXVideoSession;
@protocol PXGVideoSessionPixelBufferSourceDelegate;

@interface PXGVideoSessionPixelBufferSource : NSObject <PXChangeObserver, PXGDisplayAssetPixelBufferSource>
{
    PXVideoSession *_videoSession;
    NSString *_bufferRequestIdentifier;
    id /* block */ _pixelBufferDidChangeHandler;
    long long _desiredPlayState;
    id <PXGVideoSessionPixelBufferSourceDelegate> _delegate;
}

@property(nonatomic) __weak id <PXGVideoSessionPixelBufferSourceDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long desiredPlayState; // @synthesize desiredPlayState=_desiredPlayState;
@property(copy, nonatomic) id /* block */ pixelBufferDidChangeHandler; // @synthesize pixelBufferDidChangeHandler=_pixelBufferDidChangeHandler;
@property(readonly, nonatomic) struct CGAffineTransform videoRotationTransform;
@property(readonly, nonatomic) struct __CVBuffer *currentPixelBuffer;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateVideoSession:(id)arg1;
- (void)_prepareVideoSession;
- (void)dealloc;
- (id)initWithDisplayAsset:(id)arg1 mediaProvider:(id)arg2;
- (id)initWithVideoSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

