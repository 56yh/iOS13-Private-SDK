//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class HMDLogEvent, NSString;
@protocol HomeKitEventRemoteLoginMetricProtocol;

@interface HMDRemoteLoginInitiatorSession : HMFObject
{
    NSString *_sessionID;
    HMDLogEvent<HomeKitEventRemoteLoginMetricProtocol> *_metric;
}

@property(retain, nonatomic) HMDLogEvent<HomeKitEventRemoteLoginMetricProtocol> *metric; // @synthesize metric=_metric;
@property(readonly, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
- (id)description;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1;

@end

