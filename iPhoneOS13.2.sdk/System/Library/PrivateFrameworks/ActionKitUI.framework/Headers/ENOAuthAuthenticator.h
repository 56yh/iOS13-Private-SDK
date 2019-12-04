//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ActionKitUI/ENAuthenticator-Protocol.h>
#import <ActionKitUI/ENLoadingViewControllerDelegate-Protocol.h>
#import <ActionKitUI/ENOAuthViewControllerDelegate-Protocol.h>

@class ENCredentialStore, ENOAuthViewController, NSArray, NSMutableData, NSString, NSURLResponse, UINavigationController, UIViewController;
@protocol ENAuthenticatorDelegate;

__attribute__((visibility("hidden")))
@interface ENOAuthAuthenticator : NSObject <ENLoadingViewControllerDelegate, ENOAuthViewControllerDelegate, ENAuthenticator>
{
    _Bool _supportsLinkedAppNotebook;
    _Bool _useWebAuthenticationOnly;
    _Bool _preferRegistration;
    _Bool _inProgress;
    _Bool _isCancelled;
    _Bool _isMultitaskLoginDisabled;
    _Bool _isSwitchingInProgress;
    _Bool _isActiveBecauseOfCallback;
    _Bool _userSelectedLinkedAppNotebook;
    id <ENAuthenticatorDelegate> _delegate;
    NSString *_consumerKey;
    NSString *_consumerSecret;
    NSString *_host;
    UIViewController *_hostViewController;
    UINavigationController *_authenticationViewController;
    ENOAuthViewController *_oauthViewController;
    long long _state;
    NSArray *_profiles;
    NSString *_currentProfile;
    ENCredentialStore *_credentialStore;
    NSString *_tokenSecret;
    NSMutableData *_receivedData;
    NSURLResponse *_response;
}

+ (id)parametersFromQueryString:(id)arg1;
+ (id)queryStringFromParameters:(id)arg1;
+ (id)scrubString:(id)arg1 usingRegex:(id)arg2 withMaxLength:(unsigned short)arg3;
+ (id)deviceDescription;
+ (id)deviceIdentifier;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property(retain, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property(nonatomic) _Bool userSelectedLinkedAppNotebook; // @synthesize userSelectedLinkedAppNotebook=_userSelectedLinkedAppNotebook;
@property(nonatomic) _Bool isActiveBecauseOfCallback; // @synthesize isActiveBecauseOfCallback=_isActiveBecauseOfCallback;
@property(nonatomic) _Bool isSwitchingInProgress; // @synthesize isSwitchingInProgress=_isSwitchingInProgress;
@property(nonatomic) _Bool isMultitaskLoginDisabled; // @synthesize isMultitaskLoginDisabled=_isMultitaskLoginDisabled;
@property(copy, nonatomic) NSString *tokenSecret; // @synthesize tokenSecret=_tokenSecret;
@property(retain, nonatomic) ENCredentialStore *credentialStore; // @synthesize credentialStore=_credentialStore;
@property(copy, nonatomic) NSString *currentProfile; // @synthesize currentProfile=_currentProfile;
@property(retain, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
@property(nonatomic) long long state; // @synthesize state=_state;
@property(retain, nonatomic) ENOAuthViewController *oauthViewController; // @synthesize oauthViewController=_oauthViewController;
@property(retain, nonatomic) UINavigationController *authenticationViewController; // @synthesize authenticationViewController=_authenticationViewController;
@property(retain, nonatomic) UIViewController *hostViewController; // @synthesize hostViewController=_hostViewController;
@property(nonatomic) _Bool isCancelled; // @synthesize isCancelled=_isCancelled;
@property(nonatomic) _Bool inProgress; // @synthesize inProgress=_inProgress;
@property(nonatomic) _Bool preferRegistration; // @synthesize preferRegistration=_preferRegistration;
@property(nonatomic) _Bool useWebAuthenticationOnly; // @synthesize useWebAuthenticationOnly=_useWebAuthenticationOnly;
@property(nonatomic) _Bool supportsLinkedAppNotebook; // @synthesize supportsLinkedAppNotebook=_supportsLinkedAppNotebook;
@property(copy, nonatomic) NSString *host; // @synthesize host=_host;
@property(copy, nonatomic) NSString *consumerSecret; // @synthesize consumerSecret=_consumerSecret;
@property(copy, nonatomic) NSString *consumerKey; // @synthesize consumerKey=_consumerKey;
@property(nonatomic) __weak id <ENAuthenticatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void)loadingViewControllerDidCancel:(id)arg1;
- (void)getOAuthTokenForURL:(id)arg1;
- (void)oauthViewController:(id)arg1 receivedOAuthCallbackURL:(id)arg2;
- (void)gotCallbackURL:(id)arg1;
- (_Bool)canHandleSwitchProfileURL:(id)arg1;
- (void)disableIsActiveBecauseOfCallback;
- (void)enableIsActiveBecauseOfCallback;
- (_Bool)handleOpenURL:(id)arg1;
- (void)oauthViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)oauthViewControllerDidSwitchProfile:(id)arg1;
- (void)oauthViewControllerDidCancel:(id)arg1;
- (void)verifyCFBundleURLSchemes;
- (void)updateCurrentBootstrapProfileWithName:(id)arg1;
- (void)switchProfile;
- (void)completeAuthenticationWithError:(id)arg1;
- (void)completeAuthenticationWithCredentials:(id)arg1 usesLinkedAppNotebook:(_Bool)arg2;
- (void)openOAuthViewControllerWithURL:(id)arg1;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)handleDidBecomeActive;
- (id)userAuthorizationURLStringWithParameters:(id)arg1;
- (id)oauthCallback;
- (id)callbackScheme;
- (void)startOauthAuthentication;
- (void)authenticateWithViewController:(id)arg1;
- (void)emptyCookieJar;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

