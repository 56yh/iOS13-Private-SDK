//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCompanionLinkClient-Protocol.h>

@class NSString, RPCompanionLinkClient;

@interface HMDCompanionLinkClient : NSObject <HMDCompanionLinkClient>
{
    RPCompanionLinkClient *_client;
}

@property(retain, nonatomic) RPCompanionLinkClient *client; // @synthesize client=_client;
- (void)stop;
- (void)start;
@property(copy, nonatomic) id /* block */ deviceLostHandler;
@property(copy, nonatomic) id /* block */ deviceChangedHandler;
@property(copy, nonatomic) id /* block */ deviceFoundHandler;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

