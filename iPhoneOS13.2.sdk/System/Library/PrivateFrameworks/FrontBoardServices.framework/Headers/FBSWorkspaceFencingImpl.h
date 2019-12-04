//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/FBSWorkspaceFencing-Protocol.h>

@class BSMutableIntegerMap, FBSSerialQueue, NSString;
@protocol OS_dispatch_queue;

@interface FBSWorkspaceFencingImpl : NSObject <FBSWorkspaceFencing>
{
    NSObject<OS_dispatch_queue> *_queue;
    FBSSerialQueue *_callOutQueue;
    unsigned long long _signpostName;
    BSMutableIntegerMap *_triggerToFenceNameMap;
    _Bool _synchronizingFence;
}

- (void)synchronizeSystemAnimationFencesWithCleanUpBlock:(id /* block */)arg1;
- (_Bool)trackSystemAnimationFence:(id)arg1;
- (_Bool)isTrackingAnySystemAnimationFence;
- (id)requestSystemAnimationFence;
- (id)initWithQueue:(id)arg1 calloutQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

