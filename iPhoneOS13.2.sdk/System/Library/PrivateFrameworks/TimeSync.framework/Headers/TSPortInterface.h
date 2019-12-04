//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TimeSync/TSgPTPNetworkPortClient-Protocol.h>

@class NSString, TSgPTPPort;
@protocol OS_dispatch_queue;

@interface TSPortInterface : NSObject <TSgPTPNetworkPortClient>
{
    NSObject<OS_dispatch_queue> *_notificationsQueue;
    CDUnknownFunctionPointerType _macLookupTimeoutCallback;
    void *_macLookupTimeoutRefcon;
    TSgPTPPort *_port;
}

@property(retain, nonatomic) TSgPTPPort *port; // @synthesize port=_port;
- (void)dealloc;
- (void)didTimeoutOnMACLookupForPort:(id)arg1;
- (void)setMACLookupTimeoutCallback:(CDUnknownFunctionPointerType)arg1 refcon:(void *)arg2;
- (id)initWithgPTPPort:(id)arg1 onClockIdentifier:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

