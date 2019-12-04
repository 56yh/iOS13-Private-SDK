//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUFeatureOnboardingFlow-Protocol.h>

@class HMHome, NAFuture, NSDictionary, NSString, UIViewController;
@protocol HUConfigurationViewController;

@interface HULanguageSetupOnboardingFlow : NSObject <HUFeatureOnboardingFlow>
{
    _Bool _shouldAbortThisOnboardingFlowGroup;
    _Bool _shouldAbortAllOnboarding;
    _Bool _forceOnboardingFinishedForErrorRecovery;
    HMHome *_home;
    NAFuture *_onboardingFuture;
    UIViewController<HUConfigurationViewController> *_initialViewController;
    unsigned long long _languageOnboardingFlowType;
    NSDictionary *_usageOptions;
    NSString *_assistantDeviceIntendedRecognitionLanguage;
}

@property(retain, nonatomic) NSString *assistantDeviceIntendedRecognitionLanguage; // @synthesize assistantDeviceIntendedRecognitionLanguage=_assistantDeviceIntendedRecognitionLanguage;
@property(retain, nonatomic) NSDictionary *usageOptions; // @synthesize usageOptions=_usageOptions;
@property(nonatomic) unsigned long long languageOnboardingFlowType; // @synthesize languageOnboardingFlowType=_languageOnboardingFlowType;
@property(nonatomic) _Bool forceOnboardingFinishedForErrorRecovery; // @synthesize forceOnboardingFinishedForErrorRecovery=_forceOnboardingFinishedForErrorRecovery;
@property(nonatomic) _Bool shouldAbortAllOnboarding; // @synthesize shouldAbortAllOnboarding=_shouldAbortAllOnboarding;
@property(nonatomic) _Bool shouldAbortThisOnboardingFlowGroup; // @synthesize shouldAbortThisOnboardingFlowGroup=_shouldAbortThisOnboardingFlowGroup;
@property(retain, nonatomic) UIViewController<HUConfigurationViewController> *initialViewController; // @synthesize initialViewController=_initialViewController;
@property(retain, nonatomic) NAFuture *onboardingFuture; // @synthesize onboardingFuture=_onboardingFuture;
@property(retain, nonatomic) HMHome *home; // @synthesize home=_home;
- (id)processUserInput:(id)arg1;
@property(readonly, copy) NSString *description;
- (id)_determineNextViewControllerWithPriorResults:(id)arg1;
- (id)initWithUsageOptions:(id)arg1 home:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

