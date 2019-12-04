//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AuthKitUI/AKAppleIDAuthenticationInAppContext.h>

#import <AuthKitUI/RemoteUIControllerDelegate-Protocol.h>

@class NSString, RUIStyle;

@interface AKAppleIDAuthenticationWatchBuddyContext : AKAppleIDAuthenticationInAppContext <RemoteUIControllerDelegate>
{
    NSString *_password;
    RUIStyle *_remoteUIStyle;
}

@property(retain, nonatomic) RUIStyle *remoteUIStyle; // @synthesize remoteUIStyle=_remoteUIStyle;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
- (void)willPresentModalNavigationController:(id)arg1;
- (void)presentBiometricOrPasscodeValidationForAppleID:(id)arg1 completion:(id /* block */)arg2;
- (void)presentLoginAlertWithError:(id)arg1 title:(id)arg2 message:(id)arg3 completion:(id /* block */)arg4;
- (void)dismissBasicLoginUIWithCompletion:(id /* block */)arg1;
- (void)presentBasicLoginUIWithCompletion:(id /* block */)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

