//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewControllerPreviewingDelegate_Private-Protocol.h>

@class UIPreviewMenuItem, UIView, UIViewController;

@protocol UIViewControllerPreviewingDelegate_Deprecated <UIViewControllerPreviewingDelegate_Private>

@optional
- (void)didDismissWithPreviewMenuItem:(UIPreviewMenuItem *)arg1;
- (void)commitPreviewViewController:(UIViewController *)arg1 committedViewController:(UIViewController *)arg2;
- (UIViewController *)previewViewControllerForLocation:(struct CGPoint)arg1 inSourceView:(UIView *)arg2;
- (void)commitPreviewViewController:(UIViewController *)arg1;
- (void)willPresentPreviewViewController:(UIViewController *)arg1 forPosition:(struct CGPoint)arg2 inSourceView:(UIView *)arg3;
- (UIViewController *)previewViewControllerForPosition:(struct CGPoint)arg1 inSourceView:(UIView *)arg2;
@end

