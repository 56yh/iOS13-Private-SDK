//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSUUID, _UIActivityUserDefaultsViewController;

@protocol _UIActivityUserDefaultsViewControllerDelegate 
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didSelectActivityWithIdentifier:(NSUUID *)arg2 activityCategory:(long long)arg3;
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didUpdateFavoritesProxies:(NSArray *)arg2 activityCategory:(long long)arg3;
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didFavoriteActivity:(_Bool)arg2 withIdentifier:(NSUUID *)arg3 activityCategory:(long long)arg4;
- (void)userDefaultsViewController:(_UIActivityUserDefaultsViewController *)arg1 didToggleActivityWithIdentifier:(NSUUID *)arg2 activityCategory:(long long)arg3;
@end

