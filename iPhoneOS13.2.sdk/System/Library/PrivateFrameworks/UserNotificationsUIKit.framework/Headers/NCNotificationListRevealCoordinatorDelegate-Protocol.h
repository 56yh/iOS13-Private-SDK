//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NCNotificationListRevealCoordinator, NSArray;

@protocol NCNotificationListRevealCoordinatorDelegate 
- (void)revealCoordinatorDidScrollToReveal:(NCNotificationListRevealCoordinator *)arg1;
- (void)notificationListRevealCoordinator:(NCNotificationListRevealCoordinator *)arg1 updatedRevealState:(_Bool)arg2;
- (NSArray *)subListsForNotificationListRevealCoordinator:(NCNotificationListRevealCoordinator *)arg1;
- (_Bool)notificationListRevealCoordinatorShouldAllowReveal:(NCNotificationListRevealCoordinator *)arg1;
@end

