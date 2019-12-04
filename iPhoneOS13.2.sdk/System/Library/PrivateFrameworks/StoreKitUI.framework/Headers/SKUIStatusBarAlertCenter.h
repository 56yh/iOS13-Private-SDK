//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/_SKUIStatusBarAlertViewControllerDelegate-Protocol.h>

@class NSString, _SKUIClickThroughWindow, _SKUIStatusBarAlertViewController;

__attribute__((visibility("hidden")))
@interface SKUIStatusBarAlertCenter : NSObject <_SKUIStatusBarAlertViewControllerDelegate>
{
    double _duration;
    id /* block */ _actionBlock;
    _SKUIClickThroughWindow *_window;
    _SKUIStatusBarAlertViewController *_rootViewController;
}

+ (id)sharedCenter;
@property(readonly, nonatomic) _SKUIStatusBarAlertViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(readonly, nonatomic) _SKUIClickThroughWindow *window; // @synthesize window=_window;
@property(copy, nonatomic) id /* block */ actionBlock; // @synthesize actionBlock=_actionBlock;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void)statusBarAlertViewControllerWasTapped:(id)arg1;
- (void)dismiss;
- (void)scheduleDismiss;
- (void)unscheduleDismiss;
- (void)showMessage:(id)arg1 withStyle:(long long)arg2 forDuration:(double)arg3 actionBlock:(id /* block */)arg4;
@property(readonly, copy, nonatomic) NSString *message;
@property(nonatomic, getter=isVisible) _Bool visible;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

