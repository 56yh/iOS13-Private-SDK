//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraMetricsLogEvent.h>

#import <HomeKitDaemon/HMDAWDLogEvent-Protocol.h>

@class NSNumber, NSString;

@interface HMDCameraMetricsStreamLogEvent : HMDCameraMetricsLogEvent <HMDAWDLogEvent>
{
    NSNumber *_referenceTimestamp;
}

+ (id)uuid;
+ (void)initialize;
@property(retain, nonatomic) NSNumber *referenceTimestamp; // @synthesize referenceTimestamp=_referenceTimestamp;
- (id)initWithSessionID:(id)arg1 cameraAccessory:(id)arg2 isLocal:(_Bool)arg3;
- (id)metricForAWD;
- (void)addStreamMessaging:(id)arg1;
- (void)addIDSSession:(id)arg1;
- (void)addIDSConnectionSetup:(id)arg1;
- (void)addReconfiguration:(id)arg1;
- (void)addInitialConfiguration:(id)arg1;
- (unsigned int)timeSinceReference:(id)arg1;
- (unsigned int)AWDMessageType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

