//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CNManagedProfileConnection;

@interface CNManagedConfiguration : NSObject
{
    NSString *_bundleIdentifier;
    id <CNManagedProfileConnection> _profileConnection;
}

+ (id)bundleIdentifierForAuditToken:(CDStruct_4c969caf *)arg1;
+ (id)bundleIdentifierFromInfoPlistForAuditToken:(CDStruct_4c969caf *)arg1;
+ (id)bundleIdentifierFromEntitlementForAuditToken:(CDStruct_4c969caf *)arg1;
+ (id)os_log;
@property(readonly, nonatomic) id <CNManagedProfileConnection> profileConnection; // @synthesize profileConnection=_profileConnection;
@property(readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
- (id)accountForIdentifier:(id)arg1;
- (id)readableAccountsFromAccounts:(id)arg1;
- (id)writableAccountsFromAccounts:(id)arg1;
- (id)writableAccountIdentifiersFromIdentifiers:(id)arg1;
- (id)readableAccountIdentifiersFromIdentifiers:(id)arg1;
- (_Bool)canWriteToAccountWithIdentifier:(id)arg1;
- (_Bool)canReadFromAccountWithIdentifier:(id)arg1;
- (_Bool)accountIsManagedForIdentifier:(id)arg1;
- (_Bool)accountIsManaged:(id)arg1;
- (_Bool)canWriteToLocalAccount;
- (_Bool)canReadFromLocalAccount;
- (_Bool)deviceHasManagementRestrictions;
- (id)initWithBundleIdentifier:(id)arg1 managedProfileConnection:(id)arg2;
- (id)initWithAuditToken:(CDStruct_4c969caf)arg1 managedProfileConnection:(id)arg2;

@end

