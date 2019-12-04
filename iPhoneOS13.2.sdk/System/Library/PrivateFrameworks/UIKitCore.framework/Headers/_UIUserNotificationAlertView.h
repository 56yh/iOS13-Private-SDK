//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIAlertView.h>

__attribute__((visibility("hidden")))
@interface _UIUserNotificationAlertView : UIAlertView
{
    struct __CFUserNotification *_userNotification;
    struct __CFRunLoopSource *_userNotificationRunLoopSource;
    id _strongDelegate;
    id _retainedSelf;
}

+ (void)initialize;
- (void)dealloc;
- (void)dismissWithClickedButtonIndex:(long long)arg1 animated:(_Bool)arg2;
- (void)_removeObservervations;
- (void)_cancelUserNotification;
- (void)cancelAlertView;
- (void)setRemoteViewController:(id)arg1;
- (void)setHostedWindow:(id)arg1;
- (long long)addButtonWithTitle:(id)arg1;
- (id)textFieldAtIndex:(long long)arg1;
- (_Bool)isVisible;
- (void)show;

@end

