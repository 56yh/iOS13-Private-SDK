//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HUIDCMessage, HUIDCRemoteController, NSError;
@protocol HUIDCManagerSecurityDelegate;

@protocol HUIDCRemoteControllerDelegate 
@property(nonatomic) __weak id <HUIDCManagerSecurityDelegate> securityDelegate;
- (void)controller:(HUIDCRemoteController *)arg1 didCloseConnectionWithError:(NSError *)arg2;
- (void)controllerDidFinishConnecting:(HUIDCRemoteController *)arg1;
- (void)controller:(HUIDCRemoteController *)arg1 didFinishSendingData:(HUIDCMessage *)arg2;
- (void)controller:(HUIDCRemoteController *)arg1 didReceiveData:(HUIDCMessage *)arg2;
@end

