//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIViewController;

@interface FLNetworkStatePrompter : NSObject
{
    UIViewController *_presenter;
}

- (void)dealloc;
- (void)_mainQueue_verificationFailedAlert;
- (id)_cancelActionWithCompletionHandler:(id /* block */)arg1;
- (id)_disableAirplaneActionWithCompletionHandler:(id /* block */)arg1;
- (void)_mainQueue_promptToDisableAirplaneModeWithCompletionHandler:(id /* block */)arg1;
- (void)preflightNetworkStateWithCompletionHandler:(id /* block */)arg1;
- (id)initWithPresenter:(id)arg1;

@end

