//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIApplicationRotationFollowingWindow.h>

@class UIAlertController;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerShimPresenterWindow : UIApplicationRotationFollowingWindow
{
    UIAlertController *_alertController;
}

@property(readonly, retain, nonatomic) UIAlertController *alertController;
- (void)presentAlertController:(id)arg1 animated:(_Bool)arg2 completionBlock:(id /* block */)arg3;
- (id)_presentationViewController;
- (id)initWithWindowScene:(id)arg1;
- (id)init;

@end

