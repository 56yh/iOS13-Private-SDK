//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface _UIAlternateApplicationIconsAlertContentViewController : UIViewController
{
    UILabel *_messageLabel;
}

- (void)loadView;
- (void)didMoveToParentViewController:(id)arg1;
- (void)_updateWithContainingAlertControllerVisualStyle;
- (void)__updateWithVisualStyle:(id)arg1;
- (void)_containingAlertControllerDidChangeVisualStyle:(id)arg1;
@property(copy, nonatomic) NSString *messageText;

@end

