//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSString, STUsageDetailsViewModel;

@protocol STUsageDetailsViewModelCoordinator 
@property(readonly, getter=isRefreshing) _Bool refreshing;
@property(copy, nonatomic) NSString *selectedDeviceIdentifier;
@property(readonly, copy, nonatomic) NSArray *devices;
@property(readonly, nonatomic) STUsageDetailsViewModel *viewModel;
- (void)refreshUsageData;
- (void)stopRefreshingUsageData;
- (void)startRefreshingUsageData;
@end

