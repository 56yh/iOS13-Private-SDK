//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class GKDashboardMultiplayerPickerViewController, GKMessageComposeViewController, NSArray, NSString;

@protocol GKMessageComposeViewControllerDelegate 
- (void)messageComposeViewController:(GKMessageComposeViewController *)arg1 didFinishWithResult:(long long)arg2 message:(NSString *)arg3 contactPlayers:(NSArray *)arg4 friendPlayers:(NSArray *)arg5;

@optional
- (void)messageComposeViewController:(GKMessageComposeViewController *)arg1 willSend:(_Bool)arg2 message:(NSString *)arg3;
- (void)messageComposeViewController:(GKMessageComposeViewController *)arg1 willPresentPlayerPicker:(GKDashboardMultiplayerPickerViewController *)arg2;
@end

