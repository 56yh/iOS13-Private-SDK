//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APSConnection, NSMutableArray, NSString;
@protocol OS_dispatch_queue;

@interface CKDPushConnection : NSObject
{
    NSString *_apsEnvironmentString;
    APSConnection *_apsConnection;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_completionBlocks;
}

+ (id)sharedConnectionForAPSEnvironmentString:(id)arg1;
@property(retain, nonatomic) NSMutableArray *completionBlocks; // @synthesize completionBlocks=_completionBlocks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) APSConnection *apsConnection; // @synthesize apsConnection=_apsConnection;
@property(retain, nonatomic, setter=setAPSEnvironmentString:) NSString *apsEnvironmentString; // @synthesize apsEnvironmentString=_apsEnvironmentString;
- (void)connectionDidReconnect:(id)arg1;
- (void)connection:(id)arg1 didChangeConnectedStatus:(_Bool)arg2;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)getToken:(id /* block */)arg1;
- (void)dealloc;
- (id)initWithEnvironment:(id)arg1;

@end

