//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AttentionAwareness/AWUnitTestSampler-Protocol.h>

@class AWUnitTestFaceDetectOperation;
@protocol BKDevicePearlDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AWUnitTestPearlDevice : NSObject <AWUnitTestSampler>
{
    CDStruct_2c6bab44 _sampleStats;
    NSObject<OS_dispatch_queue> *_awQueue;
    AWUnitTestFaceDetectOperation *_lastOperation;
    id /* block */ _displayCallback;
    id /* block */ _smartCoverCallback;
    _Bool _facePresent;
    _Bool _pearlError;
    id <BKDevicePearlDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_queue;
    CDStruct_2c6bab44 *_sampleStatsPtr;
}

+ (id)sharedDevice;
@property _Bool pearlError; // @synthesize pearlError=_pearlError;
@property _Bool facePresent; // @synthesize facePresent=_facePresent;
@property CDStruct_2c6bab44 *sampleStatsPtr; // @synthesize sampleStatsPtr=_sampleStatsPtr;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak id <BKDevicePearlDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setPearlErrorState:(_Bool)arg1 reply:(id /* block */)arg2;
- (void)setPearlErrorState:(_Bool)arg1;
- (void)setSmartCoverCallback:(id /* block */)arg1;
- (void)setSmartCoverClosed:(_Bool)arg1 reply:(id /* block */)arg2;
- (void)setSmartCoverClosed:(_Bool)arg1;
- (void)setDisplayCallback:(id /* block */)arg1;
- (void)setDisplayState:(_Bool)arg1 reply:(id /* block */)arg2;
- (void)setDisplayState:(_Bool)arg1;
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2 reply:(id /* block */)arg3;
- (void)setSampleState:(_Bool)arg1 deliverEvent:(_Bool)arg2;
- (void)setSampleState:(_Bool)arg1 reply:(id /* block */)arg2;
- (void)setSampleState:(_Bool)arg1;
- (void)resetStats;
- (void)getStatsWithBlock:(id /* block */)arg1;
- (void)deliverPearlDeviceState:(long long)arg1;
- (void)deliverPearlDeviceEvent:(long long)arg1;
- (id)createPresenceDetectOperationWithError:(id *)arg1;
- (id)init;

@end

