//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface MCUIAppSigner : NSObject
{
    _Bool _appsRequireTrust;
    _Bool _appsRequireVerification;
    _Bool _hasFreeDeveloperProvisioningProfile;
    _Bool _hasUniversalProvisioningProfile;
    _Bool _appsRequireVerificationSoon;
    NSString *_displayName;
    NSString *_identity;
    NSArray *_applications;
    NSArray *_profiles;
    long long _numberOfAppsRequiringVerification;
    long long _numberOfAppsRequiringVerificationSoon;
}

+ (id)_uppProfilesBySignerIDWithOutFreeDevProfilesBySignerID:(id *)arg1;
+ (void)_addProfile:(id)arg1 toSignerIdentity:(id)arg2 inDictionary:(id)arg3;
+ (id)enterpriseAppSignersWithOutDeveloperAppSigners:(id *)arg1;
@property(nonatomic) long long numberOfAppsRequiringVerificationSoon; // @synthesize numberOfAppsRequiringVerificationSoon=_numberOfAppsRequiringVerificationSoon;
@property(nonatomic) _Bool appsRequireVerificationSoon; // @synthesize appsRequireVerificationSoon=_appsRequireVerificationSoon;
@property(nonatomic) _Bool hasUniversalProvisioningProfile; // @synthesize hasUniversalProvisioningProfile=_hasUniversalProvisioningProfile;
@property(nonatomic) _Bool hasFreeDeveloperProvisioningProfile; // @synthesize hasFreeDeveloperProvisioningProfile=_hasFreeDeveloperProvisioningProfile;
@property(nonatomic) long long numberOfAppsRequiringVerification; // @synthesize numberOfAppsRequiringVerification=_numberOfAppsRequiringVerification;
@property(nonatomic) _Bool appsRequireVerification; // @synthesize appsRequireVerification=_appsRequireVerification;
@property(nonatomic) _Bool appsRequireTrust; // @synthesize appsRequireTrust=_appsRequireTrust;
@property(retain, nonatomic) NSArray *profiles; // @synthesize profiles=_profiles;
@property(retain, nonatomic) NSArray *applications; // @synthesize applications=_applications;
@property(retain, nonatomic) NSString *identity; // @synthesize identity=_identity;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (_Bool)isTrusted;
- (void)removeApplications:(id)arg1;
- (void)removeApplication:(id)arg1;
- (void)addApplication:(id)arg1;
- (_Bool)_isTrustRequiredForBundleIDs:(id)arg1 outNotVerifiedAppCount:(long long *)arg2 outExpiringSoonAppCount:(long long *)arg3;
- (void)refreshApplications;
- (id)_displayNameFromIdentity:(id)arg1 hasFreeDev:(_Bool)arg2 hasUPP:(_Bool)arg3;
- (id)initWithIdentity:(id)arg1 applications:(id)arg2 profiles:(id)arg3 hasUPP:(_Bool)arg4 hasFreeDeveloper:(_Bool)arg5;

@end

