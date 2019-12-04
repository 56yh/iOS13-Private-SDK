//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class HKDateCache, HKHealthStore, NSMutableDictionary;
@protocol HROnboardingManagerDelegate;

@protocol HROnboardingPageViewControllerDelegate 
- (id <HROnboardingManagerDelegate>)onboardingManagerDelegate;
- (HKDateCache *)dateCache;
- (HKHealthStore *)healthStore;
- (void)stepForward;

@optional
@property(readonly, nonatomic) _Bool firstTimeOnboarding;
@property(retain, nonatomic) NSMutableDictionary *userInfo;
- (void)notNowTapped;
@end

