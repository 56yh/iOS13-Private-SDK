//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSString, TSKPopoverBasedViewController, UIView;

@protocol TSKPopoverBasedViewControllerDelegate <NSObject>

@optional
- (void)popoverController:(TSKPopoverBasedViewController *)arg1 learnMoreAPDIDTapped:(NSString *)arg2;
- (double)paddingAboveHalfHeightAtTopOfScreen;
- (BOOL)popoverController:(TSKPopoverBasedViewController *)arg1 shouldReceiveOutsideTouchAtLocation:(CGPoint)arg2 inView:(UIView *)arg3;
- (BOOL)wantsCloseArrowForPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
- (void)popoverControllerDidDismissPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
- (void)popoverControllerWillDismissPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
- (void)popoverControllerWillShowPopoverBasedViewController:(TSKPopoverBasedViewController *)arg1;
@end

