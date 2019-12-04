//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol PXGImageRequestPerformer;

@interface PXGImageRequestQueue : NSObject
{
    struct PXGImageRequest *_requests;
    long long _capacity;
    long long _count;
    id <PXGImageRequestPerformer> _imageRequestPerformer;
}

@property(retain, nonatomic) id <PXGImageRequestPerformer> imageRequestPerformer; // @synthesize imageRequestPerformer=_imageRequestPerformer;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void)_discardIndexes:(id)arg1;
- (void)_removeAllRequests;
- (void)cancelTextureRequests:(id)arg1;
- (void)performRequestsWithAllowedIDs:(id)arg1;
- (void)enqueueRequestsWithSpriteIndexRange:(struct _PXGSpriteIndexRange)arg1 textureRequestIDs:(struct _NSRange)arg2 displayAssetFetchResult:(id)arg3 observer:(id)arg4 presentationStyles:(unsigned long long)arg5 targetSize:(struct CGSize)arg6 screenScale:(double)arg7;
- (void)dealloc;

@end

