//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class APUIShortLookViewController;

@protocol APUIShortLookViewControllerDelegate 

@optional
- (void)shortLookViewController:(APUIShortLookViewController *)arg1 didCompleteActionWithResult:(long long)arg2;
- (void)shortLookViewController:(APUIShortLookViewController *)arg1 didDismissLongLookWithReason:(long long)arg2 actionCompleted:(_Bool)arg3 shouldClearAction:(_Bool)arg4;
- (void)shortLookViewController:(APUIShortLookViewController *)arg1 willDismissLongLookWithReason:(long long)arg2 actionCompleted:(_Bool)arg3 shouldClearAction:(_Bool)arg4;
- (void)shortLookViewController:(APUIShortLookViewController *)arg1 willDisplayLongLookWithReason:(long long)arg2;
- (void)shortLookViewControllerWillBeginUserInteraction:(APUIShortLookViewController *)arg1;
@end

