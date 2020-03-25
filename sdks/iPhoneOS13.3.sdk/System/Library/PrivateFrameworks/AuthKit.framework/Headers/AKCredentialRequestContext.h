//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class AKAuthorizationRequest, AKPasswordRequest, NSArray, NSData, NSNumber, NSString, NSUUID, NSValue;

@interface AKCredentialRequestContext : NSObject <NSSecureCoding>
{
    BOOL _passcodeProtected;
    BOOL _shouldForceUI;
    BOOL _shouldSkipBiometrics;
    BOOL _shouldSkipAuthorizationUI;
    BOOL _shouldForcePrivateEmail;
    BOOL _requirePassword;
    BOOL _isWebLogin;
    BOOL _isFirstPartyLogin;
    BOOL _isRapportLogin;
    NSString *_informativeText;
    NSString *_iconName;
    NSData *_iconData;
    NSNumber *_iconScale;
    NSValue *_iconSize;
    NSString *_proxiedClientAppName;
    NSString *_proxiedClientBundleID;
    NSString *_proxiedClientAppID;
    NSString *_proxiedClientTeamID;
    NSArray *_proxiedAssociatedDomains;
    NSString *_callerBundleID;
    NSString *_proxiedDeviceName;
    NSString *_proxiedDeviceClass;
    NSString *_proxiedClientServiceID;
    NSUUID *_requestIdentifier;
    AKAuthorizationRequest *_authorizationRequest;
    AKPasswordRequest *_passwordRequest;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) AKPasswordRequest *passwordRequest; // @synthesize passwordRequest=_passwordRequest;
@property(retain, nonatomic) AKAuthorizationRequest *authorizationRequest; // @synthesize authorizationRequest=_authorizationRequest;
@property(readonly, copy, nonatomic) NSUUID *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(retain, nonatomic) NSString *_proxiedClientServiceID; // @synthesize _proxiedClientServiceID;
@property(retain, nonatomic) NSString *_proxiedDeviceClass; // @synthesize _proxiedDeviceClass;
@property(retain, nonatomic) NSString *_proxiedDeviceName; // @synthesize _proxiedDeviceName;
@property(retain, nonatomic) NSString *_callerBundleID; // @synthesize _callerBundleID;
@property(nonatomic) BOOL _isRapportLogin; // @synthesize _isRapportLogin;
@property(nonatomic) BOOL _isFirstPartyLogin; // @synthesize _isFirstPartyLogin;
@property(nonatomic) BOOL _isWebLogin; // @synthesize _isWebLogin;
@property(retain, nonatomic) NSArray *_proxiedAssociatedDomains; // @synthesize _proxiedAssociatedDomains;
@property(retain, nonatomic) NSString *_proxiedClientTeamID; // @synthesize _proxiedClientTeamID;
@property(retain, nonatomic) NSString *_proxiedClientAppID; // @synthesize _proxiedClientAppID;
@property(retain, nonatomic) NSString *_proxiedClientBundleID; // @synthesize _proxiedClientBundleID;
@property(retain, nonatomic) NSString *_proxiedClientAppName; // @synthesize _proxiedClientAppName;
@property(nonatomic) BOOL _shouldForcePrivateEmail; // @synthesize _shouldForcePrivateEmail;
@property(copy, nonatomic) NSValue *_iconSize; // @synthesize _iconSize;
@property(copy, nonatomic) NSNumber *_iconScale; // @synthesize _iconScale;
@property(copy, nonatomic) NSData *_iconData; // @synthesize _iconData;
@property(copy, nonatomic) NSString *_iconName; // @synthesize _iconName;
@property(copy, nonatomic) NSString *_informativeText; // @synthesize _informativeText;
@property(nonatomic) BOOL _shouldSkipAuthorizationUI; // @synthesize _shouldSkipAuthorizationUI;
@property(nonatomic) BOOL _shouldSkipBiometrics; // @synthesize _shouldSkipBiometrics;
@property(nonatomic) BOOL _shouldForceUI; // @synthesize _shouldForceUI;
// - (void).cxx_destruct;
- (id)description;
// - (id)copyWithZone:(_NSZone )arg1;
@property(nonatomic) BOOL _requirePassword; // @synthesize _requirePassword;
@property(retain, nonatomic) NSArray *credentialRequests;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
