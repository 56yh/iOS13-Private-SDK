//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class AMSProcessInfo, NSDictionary, NSString, NSURL;

@interface AMSAuthenticateOptions : NSObject <NSCopying, NSSecureCoding>
{
    unsigned long long _authenticationType;
    _Bool _allowServerDialogs;
    _Bool _canMakeAccountActive;
    _Bool _usernameEditable;
    _Bool _allowSecondaryCredentialSource;
    _Bool _remoteProxyAuthentication;
    NSString *_appProvidedContext;
    NSDictionary *_appProvidedData;
    NSDictionary *_createAccountQueryParams;
    AMSProcessInfo *_clientInfo;
    NSString *_defaultButtonString;
    NSDictionary *_HTTPHeaders;
    NSURL *_iconBundleURL;
    NSString *_logKey;
    NSString *_promptTitle;
    NSString *_proxyAppBundleID;
    NSString *_proxyAppName;
    NSString *_reason;
    NSString *_userAgent;
    NSString *_userAgentSuffix;
    unsigned long long _credentialSource;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic, getter=isRemoteProxyAuthentication) _Bool remoteProxyAuthentication; // @synthesize remoteProxyAuthentication=_remoteProxyAuthentication;
@property(nonatomic) unsigned long long credentialSource; // @synthesize credentialSource=_credentialSource;
@property(nonatomic) _Bool allowSecondaryCredentialSource; // @synthesize allowSecondaryCredentialSource=_allowSecondaryCredentialSource;
@property(nonatomic) _Bool usernameEditable; // @synthesize usernameEditable=_usernameEditable;
@property(retain, nonatomic) NSString *userAgentSuffix; // @synthesize userAgentSuffix=_userAgentSuffix;
@property(retain, nonatomic) NSString *userAgent; // @synthesize userAgent=_userAgent;
@property(retain, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(retain, nonatomic) NSString *proxyAppName; // @synthesize proxyAppName=_proxyAppName;
@property(retain, nonatomic) NSString *proxyAppBundleID; // @synthesize proxyAppBundleID=_proxyAppBundleID;
@property(retain, nonatomic) NSString *promptTitle; // @synthesize promptTitle=_promptTitle;
@property(retain, nonatomic) NSString *logKey; // @synthesize logKey=_logKey;
@property(retain, nonatomic) NSURL *iconBundleURL; // @synthesize iconBundleURL=_iconBundleURL;
@property(retain, nonatomic) NSDictionary *HTTPHeaders; // @synthesize HTTPHeaders=_HTTPHeaders;
@property(retain, nonatomic) NSString *defaultButtonString; // @synthesize defaultButtonString=_defaultButtonString;
@property(retain, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property(retain, nonatomic) NSDictionary *createAccountQueryParams; // @synthesize createAccountQueryParams=_createAccountQueryParams;
@property(nonatomic) _Bool canMakeAccountActive; // @synthesize canMakeAccountActive=_canMakeAccountActive;
@property(copy, nonatomic) NSDictionary *appProvidedData; // @synthesize appProvidedData=_appProvidedData;
@property(copy, nonatomic) NSString *appProvidedContext; // @synthesize appProvidedContext=_appProvidedContext;
@property(nonatomic) _Bool allowServerDialogs; // @synthesize allowServerDialogs=_allowServerDialogs;
- (void)setPresentingViewController:(id)arg1;
- (void)setMediaType:(id)arg1;
- (void)setAuthKitData:(id)arg1;
- (id)presentingViewController;
- (id)mediaType;
- (id)authKitData;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)description;
@property(nonatomic) unsigned long long authenticationType;
- (id)optionsDictionaryForRemoteProxyAuthentication;
- (id)optionsDictionary;
@property(readonly, nonatomic) _Bool allowSilentAuthentication;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithOptionsDictionary:(id)arg1;
- (id)init;

@end

