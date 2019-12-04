//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/AVAssetResourceLoaderDelegate-Protocol.h>

@class NSString, TSPFileDataStorage;
@protocol OS_dispatch_queue, TSUReadChannel;

@interface TSPAVAssetResourceLoaderDelegate : NSObject <AVAssetResourceLoaderDelegate>
{
    TSPFileDataStorage *_dataStorage;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id <TSUReadChannel> _readChannel;
    NSObject<OS_dispatch_queue> *_concurrentRequestQueue;
    NSString *_contentTypeUTI;
}

- (_Bool)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;
- (void)dealloc;
- (void)_provideData:(id)arg1 untilRequestCancelledForResourceLoadingRequest:(id)arg2;
- (id)delegateQueue;
- (id)initWithTSPFileDataStorage:(id)arg1 contentTypeUTI:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

