//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSVoiceTriggerXPCClientDelegate, OS_xpc_object;

@interface CSVoiceTriggerXPCClient : NSObject
{
    id <CSVoiceTriggerXPCClientDelegate> _delegate;
    NSObject<OS_xpc_object> *_xpcConnection;
}

@property(retain, nonatomic) NSObject<OS_xpc_object> *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
@property(nonatomic) __weak id <CSVoiceTriggerXPCClientDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_sendMessage:(id)arg1 connection:(id)arg2 completion:(id /* block */)arg3;
- (void)notifyVoiceTriggeredSiriSessionCancelled;
- (void)setPhraseSpotterBypassing:(_Bool)arg1 timeout:(double)arg2;
- (void)enableVoiceTrigger:(_Bool)arg1 withAssertion:(id)arg2 timestamp:(double)arg3;
- (void)_handleListenerDisconnectedError:(id)arg1;
- (void)_handleListenerError:(id)arg1;
- (void)_handleListenerEvent:(id)arg1;
- (void)dealloc;
- (void)connect;
- (id)init;

@end

