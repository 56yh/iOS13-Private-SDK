//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CNObservable, NSNotificationCenter;
@protocol CNDDonationPreferences, CNSchedulerProvider;

@protocol CNDDonationPreferences <NSObject>
+ (CNObservable *)observableWithPreferences:(id <CNDDonationPreferences>)arg1 notificationCenter:(NSNotificationCenter *)arg2 schedulerProvider:(id <CNSchedulerProvider>)arg3;
@property(nonatomic, getter=isDonationsEnabled) BOOL donationsEnabled;
@end

