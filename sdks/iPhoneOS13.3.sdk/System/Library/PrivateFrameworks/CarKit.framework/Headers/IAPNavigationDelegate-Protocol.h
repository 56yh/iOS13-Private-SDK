//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class IAPNavigationAccessory, IAPNavigationAccessoryComponent;

@protocol IAPNavigationDelegate <NSObject>
- (void)IAPNavigationAccessory:(IAPNavigationAccessory *)arg1 didDisableNavigationUpdatesForComponent:(IAPNavigationAccessoryComponent *)arg2;
- (void)IAPNavigationAccessory:(IAPNavigationAccessory *)arg1 didEnableNavigationUpdatesForComponent:(IAPNavigationAccessoryComponent *)arg2;
- (void)IAPNavigationAccessoryDidBecomeUnavailable:(IAPNavigationAccessory *)arg1;
- (void)IAPNavigationAccessoryDidBecomeAvailable:(IAPNavigationAccessory *)arg1;
@end

