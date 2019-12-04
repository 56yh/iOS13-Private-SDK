//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRTermsAcknowledgementRegistry-Protocol.h>

@class NSString, NSXPCConnection;
@protocol NRTermsAcknowledgementRegistry;

@interface NRTermsAcknowledgementRegistry : NSObject <NRTermsAcknowledgementRegistry>
{
    id <NRTermsAcknowledgementRegistry> _proxy;
}

+ (id)errorWithEnum:(unsigned long long)arg1;
+ (id)errorStringWithEnum:(unsigned long long)arg1;
@property(readonly, nonatomic) id <NRTermsAcknowledgementRegistry> proxy; // @synthesize proxy=_proxy;
- (void)checkForAcknowledgement:(id)arg1 forDeviceID:(id)arg2 withCompletion:(id /* block */)arg3;
- (void)add:(id)arg1 forDeviceID:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)proxyWithErrorHandler:(id /* block */)arg1;
@property(readonly, nonatomic) NSXPCConnection *connection;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

