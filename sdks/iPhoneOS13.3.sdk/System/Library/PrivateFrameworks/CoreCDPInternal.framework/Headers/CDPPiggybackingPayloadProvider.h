//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreCDPInternal/CDPKeychainCircleProxy-Protocol.h>

@class KCJoiningRequestAccountCircleDelegate, KCJoiningRequestCircleSession;

@interface CDPPiggybackingPayloadProvider : NSObject <CDPKeychainCircleProxy>
{
    KCJoiningRequestCircleSession *_session;
    KCJoiningRequestAccountCircleDelegate *_delegate;
}

+ (id)proxyWithSession:(id)arg1 error:(id )arg2;
// - (void).cxx_destruct;
- (BOOL)requiresInitialSync;
- (BOOL)supportsInteractiveAuth;
- (BOOL)isComplete;
- (id)processIncomingPayload:(id)arg1 error:(id )arg2;
- (id)initiatingPayload:(id )arg1;

@end

