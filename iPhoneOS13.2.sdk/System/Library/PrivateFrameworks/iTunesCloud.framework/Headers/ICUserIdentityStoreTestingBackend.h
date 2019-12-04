//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICUserIdentityStoreBackend-Protocol.h>

@class ICLocalStoreAccountProperties, NSMutableDictionary, NSNumber, NSString;
@protocol ICUserIdentityStoreBackendDelegate;

@interface ICUserIdentityStoreTestingBackend : NSObject <ICUserIdentityStoreBackend>
{
    NSNumber *_activeAccountDSID;
    NSNumber *_activeLockerAccountDSID;
    NSMutableDictionary *_identityProperties;
    ICLocalStoreAccountProperties *_localStoreAccountProperties;
    id <ICUserIdentityStoreBackendDelegate> _delegate;
}

+ (_Bool)supportsSecureCoding;
+ (void)setDefaultStorefrontIdentifier:(id)arg1;
+ (void)setDefaultActiveLockerAccountDSID:(id)arg1;
+ (void)setDefaultActiveAccountDSID:(id)arg1;
@property(nonatomic) __weak id <ICUserIdentityStoreBackendDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_propertiesToSaveForProperties:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setLocalStoreAccountProperties:(id)arg1 completion:(id /* block */)arg2;
- (id)localStoreAccountPropertiesWithError:(id *)arg1;
- (void)localStoreAccountPropertiesWithCompletion:(id /* block */)arg1;
- (void)verificationContextForDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)verificationContextForAccountEstablishmentWithCompletion:(id /* block */)arg1;
- (void)synchronize;
- (void)replaceIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(id /* block */)arg3;
- (void)removeIdentityForDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)identityPropertiesForPrimaryICloudAccountWithCompletion:(id /* block */)arg1;
- (void)setIdentityProperties:(id)arg1 forDSID:(id)arg2 completion:(id /* block */)arg3;
- (void)identityPropertiesForDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)updateActiveLockerAccountDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)activeLockerAccountDSIDWithCompletion:(id /* block */)arg1;
- (void)updateActiveAccountDSID:(id)arg1 completion:(id /* block */)arg2;
- (void)activeAccountDSIDWithCompletion:(id /* block */)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

