//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SIMSetupSupport/TSSIMSetupFlow.h>

#import <SIMSetupSupport/TSCellularPlanManagerCacheDelegate-Protocol.h>
#import <SIMSetupSupport/TSSIMSetupFlowDelegate-Protocol.h>

@class NSError, NSString, UIBarButtonItem, UIViewController;
@protocol TSSetupFlowItem;

@interface TSActivationCodeOnlyFlow : TSSIMSetupFlow <TSSIMSetupFlowDelegate, TSCellularPlanManagerCacheDelegate>
{
    _Bool _confirmationCodeRequired;
    NSError *_planInstallError;
    NSString *_carrierName;
    unsigned long long _userConsentType;
    UIBarButtonItem *_cancelButton;
    UIViewController<TSSetupFlowItem> *_currentViewController;
    _Bool _isPreinstallingViewControllerActive;
}

@property _Bool isPreinstallingViewControllerActive; // @synthesize isPreinstallingViewControllerActive=_isPreinstallingViewControllerActive;
- (void)planItemsUpdated:(id)arg1 planListError:(id)arg2;
- (void)popViewController:(id)arg1;
- (void)setDefaultNavigationItems:(id)arg1;
- (void)viewControllerDidComplete:(id)arg1;
- (long long)signupUserConsentResponse;
- (id)nextViewControllerFrom:(id)arg1;
- (void)firstViewController:(id /* block */)arg1;
- (id)firstViewController;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

