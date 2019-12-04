//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraProtocolParameters, HMDCameraStreamSessionID, HMDCameraVideoTierParameters, HMDStreamingCapabilities, HMDStreamingManager, NSString;

@interface HMDCameraStreamSession : HMFObject <HMFLogging>
{
    HMDCameraStreamSessionID *_sessionID;
    HMDStreamingManager *_streamingManager;
    HMDStreamingCapabilities *_streamingCapabilities;
    HMDCameraProtocolParameters *_protocolParameters;
    HMDCameraVideoTierParameters *_videoTierParameters;
}

+ (id)logCategory;
@property(retain, nonatomic) HMDCameraVideoTierParameters *videoTierParameters; // @synthesize videoTierParameters=_videoTierParameters;
@property(retain, nonatomic) HMDCameraProtocolParameters *protocolParameters; // @synthesize protocolParameters=_protocolParameters;
@property(readonly, nonatomic) HMDStreamingCapabilities *streamingCapabilities; // @synthesize streamingCapabilities=_streamingCapabilities;
@property(retain, nonatomic) HMDStreamingManager *streamingManager; // @synthesize streamingManager=_streamingManager;
@property(readonly, nonatomic) HMDCameraStreamSessionID *sessionID; // @synthesize sessionID=_sessionID;
- (id)negotiatedParameters;
- (id)logIdentifier;
- (id)initWithSessionID:(id)arg1 streamingTierType:(unsigned long long)arg2 remoteCapabilities:(id)arg3 streamPreference:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

