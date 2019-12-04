//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMFUnfairLock, NSMapTable, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMIAnalysisService : HMFObject <HMFLogging>
{
    _Bool _runRemotely;
    int _nextRequestID;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFUnfairLock *_lock;
    NSMapTable *_requests;
}

+ (id)logCategory;
@property _Bool runRemotely; // @synthesize runRemotely=_runRemotely;
@property(readonly) NSMapTable *requests; // @synthesize requests=_requests;
@property(readonly, nonatomic) HMFUnfairLock *lock; // @synthesize lock=_lock;
@property int nextRequestID; // @synthesize nextRequestID=_nextRequestID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (_Bool)cancelRequest:(int)arg1;
- (int)requestAnalysisForAssetData:(id)arg1 withProperties:(id)arg2 andCompletionHandler:(id /* block */)arg3;
- (int)getNextRequestID;
- (int)requestAnalysisForPixelBuffer:(struct __CVBuffer *)arg1 withProperties:(id)arg2 andCompletionHandler:(id /* block */)arg3;
- (id)expectedClasses;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

