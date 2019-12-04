//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKContainer, NSString;

@interface MSPCloudKitAccountAccess : NSObject
{
    CKContainer *_container;
    CKContainer *_containerWithZoneWidePCS;
    CKContainer *_secureContainer;
    CKContainer *_secureContainerWithZoneWidePCS;
    _Bool _useSecureContainer;
    _Bool _disableDeviceToDeviceEncryption;
    NSString *_accountIdentifier;
}

+ (void)fetchDeviceToDeviceEncryptionStatus:(id /* block */)arg1;
+ (id)sharedAccess;
+ (long long)containerEnvironmentForAccessEnvironment:(long long)arg1;
+ (long long)defaultEnvironment;
+ (_Bool)hasCloudKitEntitlement;
+ (_Bool)useLongLivedOperations;
@property(nonatomic) _Bool disableDeviceToDeviceEncryption; // @synthesize disableDeviceToDeviceEncryption=_disableDeviceToDeviceEncryption;
@property(retain, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(nonatomic) _Bool useSecureContainer; // @synthesize useSecureContainer=_useSecureContainer;
- (id)description;
- (void)fetchDeviceToDeviceEncryptionStatus:(id /* block */)arg1;
- (void)fetchAccountStatus:(id /* block */)arg1;
- (void)fetchAccountIdentifierWithCompletion:(id /* block */)arg1;
- (id)containerForAccount;
- (id)containerWithZoneWidePCS:(_Bool)arg1;
- (id)initWithEnvironment:(long long)arg1 createContainers:(_Bool)arg2;
- (id)initWithEnvironment:(long long)arg1;

@end

