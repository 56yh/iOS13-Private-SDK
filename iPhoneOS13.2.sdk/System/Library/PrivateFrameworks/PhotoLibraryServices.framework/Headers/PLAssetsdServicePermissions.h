//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class NSArray;

@interface PLAssetsdServicePermissions : NSObject <NSCopying>
{
    _Bool _allowsAuthorizationWithPhotoKitEntitlement;
    long long _requiredAuthorization;
    NSArray *_requiredEntitlements;
}

@property(copy, nonatomic) NSArray *requiredEntitlements; // @synthesize requiredEntitlements=_requiredEntitlements;
@property(nonatomic) _Bool allowsAuthorizationWithPhotoKitEntitlement; // @synthesize allowsAuthorizationWithPhotoKitEntitlement=_allowsAuthorizationWithPhotoKitEntitlement;
@property(nonatomic) long long requiredAuthorization; // @synthesize requiredAuthorization=_requiredAuthorization;
- (id)_errorForMissingEntitlements:(id)arg1 withContext:(id)arg2;
- (id)_verifyEntitlementsWithContext:(id)arg1;
- (_Bool)_isAuthorizedViaPhotoKitEntitlementWithContext:(id)arg1;
- (_Bool)_isAuthorizedForWriteOnlyWithContext:(id)arg1;
- (_Bool)_isAuthorizedForReadWriteWithContext:(id)arg1;
- (_Bool)_isAuthorizedViaTCCWithContext:(id)arg1;
- (id)_verifyAuthorizationWithContext:(id)arg1;
- (id)verifyPermissionsWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPermissions:(id)arg1;

@end

