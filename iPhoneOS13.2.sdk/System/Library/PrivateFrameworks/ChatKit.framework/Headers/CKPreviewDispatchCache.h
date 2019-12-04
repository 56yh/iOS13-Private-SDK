//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ChatKit/IMSystemMonitorListener-Protocol.h>

@class CKDispatchCache, CKMultiDict;

@interface CKPreviewDispatchCache : NSObject <IMSystemMonitorListener>
{
    CKDispatchCache *_dispatchCache;
    CKMultiDict *_pendingBlocks;
}

+ (void)_invalidateStickerPreviewCache;
+ (id)stickerPreviewCache;
+ (id)snapshotCache;
+ (id)detailsPreviewCache;
+ (id)transcriptPreviewCache;
+ (id)previewPrewarmQueue;
+ (id)mapThumbnailQueue;
@property(retain, nonatomic) CKMultiDict *pendingBlocks; // @synthesize pendingBlocks=_pendingBlocks;
@property(retain, nonatomic) CKDispatchCache *dispatchCache; // @synthesize dispatchCache=_dispatchCache;
- (void)clearQueueAndCachedPreviews;
- (_Bool)shouldReplaceCachedPreview:(id)arg1 withPreview:(id)arg2;
- (void)transferRemoved:(id)arg1;
- (void)transferFinished:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)flush;
- (void)systemApplicationDidSuspend;
- (id)notificationCenter;
- (id)mediaObjectManager;
- (void)suspend;
- (void)resume;
- (void)endGeneratingForKey:(id)arg1;
- (void)beginGeneratingForKey:(id)arg1;
- (_Bool)isGeneratingPreviewForKey:(id)arg1;
- (void)setCachedPreview:(id)arg1 key:(id)arg2;
- (id)cachedPreviewForKey:(id)arg1;
- (void)enqueueGenerationBlock:(id /* block */)arg1 completion:(id /* block */)arg2 withPriority:(long long)arg3 forKey:(id)arg4;
- (void)enqueueSaveBlock:(id /* block */)arg1 withPriority:(long long)arg2;
- (id)init;
- (id)initWithCacheLimit:(unsigned long long)arg1;
- (void)dealloc;
- (void)enqueueSaveBlock:(id /* block */)arg1 forMediaObject:(id)arg2 withPriority:(long long)arg3;

@end
