//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUI/SBSRemoteAlertHandleObserver-Protocol.h>

@class NSString;

@interface TPInCallUILauncher : NSObject <SBSRemoteAlertHandleObserver>
{
    id /* block */ _launchSOSCompletion;
}

+ (id)TPRemoteAlertActivationReasonForTPInCallUILaunchReason:(long long)arg1;
+ (id)sharedInCallUILauncher;
@property(copy, nonatomic) id /* block */ launchSOSCompletion; // @synthesize launchSOSCompletion=_launchSOSCompletion;
- (void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2;
- (void)remoteAlertHandleDidDeactivate:(id)arg1;
- (void)remoteAlertHandleDidActivate:(id)arg1;
- (void)launchInCallUIForReason:(long long)arg1 withRequestURL:(id)arg2 completion:(id /* block */)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

