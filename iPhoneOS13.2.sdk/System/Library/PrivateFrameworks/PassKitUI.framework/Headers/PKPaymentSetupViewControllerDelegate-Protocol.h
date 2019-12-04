//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSError, PKFeatureApplication, PKPasscodeUpgradeFlowController, UIViewController;

@protocol PKPaymentSetupViewControllerDelegate 
- (void)viewControllerDidTerminateSetupFlow:(UIViewController *)arg1;

@optional
- (void)viewController:(UIViewController *)arg1 canProceedWithInstallment:(_Bool)arg2 featureApplication:(PKFeatureApplication *)arg3 completion:(void (^)(void))arg4;
- (void)viewController:(UIViewController *)arg1 didExitPasscodeUpgradeWithShouldContinue:(_Bool)arg2 error:(NSError *)arg3;
- (void)viewController:(UIViewController *)arg1 requestPasscodeUpgradeWithCompletion:(void (^)(_Bool, NSError *))arg2;
- (void)viewControllerDidFailToChangePasscodeComplex:(UIViewController *)arg1;
- (void)viewControllerDidFinishChangingPasscodeComplex:(UIViewController *)arg1;
- (void)viewControllerWillPresentChangePasscodeComplex:(UIViewController *)arg1;
- (void)viewController:(UIViewController *)arg1 didExitPasscodeUpgradeForPasscodeUpgradeFlowController:(PKPasscodeUpgradeFlowController *)arg2 withShouldContinue:(_Bool)arg3 error:(NSError *)arg4;
- (void)viewController:(UIViewController *)arg1 requestPasscodeUpgradeForPasscodeUpgradeFlowController:(PKPasscodeUpgradeFlowController *)arg2 completion:(void (^)(_Bool, NSError *))arg3;
- (void)viewController:(UIViewController *)arg1 willPerformPasscodeUpgradeWithCompletionHandler:(void (^)(NSString *))arg2;
- (void)viewControllerDidShowEligibilityIssue:(UIViewController *)arg1;
- (void)viewController:(UIViewController *)arg1 didShowProvisioningError:(NSError *)arg2;
- (void)viewControllerDidCancelSetupFlow:(UIViewController *)arg1;
@end

