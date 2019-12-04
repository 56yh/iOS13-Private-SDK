//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SIMSetupSupport/TSSIMSetupFlow.h>

#import <SIMSetupSupport/TSCellularPlanManagerCacheDelegate-Protocol.h>
#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@class NSError, NSMutableArray, NSString, UIBarButtonItem, UIViewController;
@protocol TSSetupFlowItem;

@interface TSSIMSetupPublicApiInstallFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate>
{
    _Bool _requireSetup;
    _Bool _skipGeneralInstallConsent;
    NSError *_planInstallError;
    NSMutableArray *_danglingPlanItems;
    NSString *_carrierName;
    NSString *_installName;
    UIViewController<TSSetupFlowItem> *_currentViewController;
    unsigned long long _userConsentType;
    UIBarButtonItem *_cancelButton;
    _Bool _confirmationCodeRequired;
    long long _signupConsentResponse;
    _Bool _isPreinstallingViewControllerActive;
}

@property _Bool isPreinstallingViewControllerActive; // @synthesize isPreinstallingViewControllerActive=_isPreinstallingViewControllerActive;
- (void)_maybeShowPreinstallConsentOnViewController:(id)arg1;
- (void)planItemsUpdated:(id)arg1 planListError:(id)arg2;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;
- (long long)signupUserConsentResponse;
- (id)nextViewControllerFrom:(id)arg1;
- (void)firstViewController:(id /* block */)arg1;
- (id)firstViewController;
- (void)dealloc;
- (id)initWithAppName:(id)arg1 requireSetup:(_Bool)arg2 skipGeneralInstallConsent:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

