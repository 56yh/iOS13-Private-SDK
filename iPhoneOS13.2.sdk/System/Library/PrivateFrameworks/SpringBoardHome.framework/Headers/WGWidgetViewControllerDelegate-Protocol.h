//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class WGWidgetViewController;

@protocol WGWidgetViewControllerDelegate 

@optional
- (void)widgetViewControllerNeedsToBeRegisteredForRefreshNotification:(WGWidgetViewController *)arg1;
- (void)widgetViewControllerNeedsToBeUnregisteredForRefreshNotification:(WGWidgetViewController *)arg1;
- (void)remoteViewControllerViewDidAppearForWidgetViewController:(WGWidgetViewController *)arg1;
- (void)remoteViewControllerDidConnectForWidgetViewController:(WGWidgetViewController *)arg1;
@end

