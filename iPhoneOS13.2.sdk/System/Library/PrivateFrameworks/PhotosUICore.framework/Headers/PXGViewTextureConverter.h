//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXGTextureConverter-Protocol.h>

@class NSString, PXGImageTexture;
@protocol OS_dispatch_queue;

@interface PXGViewTextureConverter : NSObject <PXGTextureConverter>
{
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property(retain, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
- (id)createTextureAtlasManagerForImageDataSpec:(CDStruct_1b544862)arg1;
@property(readonly, nonatomic) PXGImageTexture *transparentTexture;
@property(readonly, nonatomic) _Bool supportsTextureAtlas;
- (id)createPayloadTextureFromPayload:(id)arg1;
- (id)createTextureFromCVPixelBuffer:(struct __CVBuffer *)arg1 transform:(struct CGAffineTransform)arg2;
- (id)createTextureFromCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2;
@property(readonly, nonatomic) int presentationType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

