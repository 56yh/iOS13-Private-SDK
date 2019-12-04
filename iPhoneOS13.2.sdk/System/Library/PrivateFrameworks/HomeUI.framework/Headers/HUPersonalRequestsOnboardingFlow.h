//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUFeatureOnboardingFlow-Protocol.h>

@class HMHome, NAFuture, NSString, UIViewController;
@protocol HUConfigurationViewController;

@interface HUPersonalRequestsOnboardingFlow : NSObject <HUFeatureOnboardingFlow>
{
    _Bool _shouldAbortThisOnboardingFlowGroup;
    _Bool _shouldAbortAllOnboarding;
    HMHome *_home;
    NAFuture *_onboardingFuture;
    UIViewController<HUConfigurationViewController> *_initialViewController;
}

@property(nonatomic) _Bool shouldAbortAllOnboarding; // @synthesize shouldAbortAllOnboarding=_shouldAbortAllOnboarding;
@property(nonatomic) _Bool shouldAbortThisOnboardingFlowGroup; // @synthesize shouldAbortThisOnboardingFlowGroup=_shouldAbortThisOnboardingFlowGroup;
@property(retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController; // @synthesize initialViewController=_initialViewController;
@property(retain, nonatomic) NAFuture *onboardingFuture; // @synthesize onboardingFuture=_onboardingFuture;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)processUserInput:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

