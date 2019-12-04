//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface VSViewControllerFactory : NSObject
{
    NSOperationQueue *_privateQueue;
}

+ (id)sharedFactory;
@property(retain, nonatomic) NSOperationQueue *privateQueue; // @synthesize privateQueue=_privateQueue;
- (id)viewControllerForPlaybackActivityReportingFromAppsWithBundleIDs:(id)arg1 grantingVouchers:(_Bool)arg2 appleAccount:(id)arg3 identityProvider:(id)arg4 completionHandler:(id /* block */)arg5;
- (id)viewControllerForAppsSupportedByIdentityProvider:(id)arg1 delegate:(id)arg2;
- (id)viewControllerForUnsupportedProvider:(id)arg1 withRequestingAppDisplayName:(id)arg2 storage:(id)arg3 acknowledgementHandler:(id /* block */)arg4;
- (id)viewControllerToConfirmDeveloperIdentityProviderDeletionWithConfirmationHandler:(id /* block */)arg1;
- (id)viewControllerToConfirmAccountDeletionForIdentityProviderDisplayName:(id)arg1 preferredStyle:(long long)arg2 confirmationHandler:(id /* block */)arg3;
- (id)loadingViewController;
- (id)authenticationViewControllerForViewModel:(id)arg1;
- (id)identityProviderPickerViewControllerWithIdentityProviders:(id)arg1;
- (void)viewServiceRemoteViewControllerWithCompletion:(id /* block */)arg1;
- (id)init;

@end

