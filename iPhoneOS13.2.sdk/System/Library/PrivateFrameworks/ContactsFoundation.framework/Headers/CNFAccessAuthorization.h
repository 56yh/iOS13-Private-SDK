//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CNFAuditToken, NSNumber;
@protocol CNTCC;

@interface CNFAccessAuthorization : NSObject
{
    id <CNTCC> _tcc;
    CNFAuditToken *_auditToken;
    long long _addressBookPreflightStatus;
    long long _contactsFullPreflightStatus;
    long long _contactsLimitedPreflightStatus;
    struct NSNumber *_isClientLegacyImpl;
    struct NSNumber *_isNotesAccessGrantedCachedValue;
}

+ (id)sharedInstance;
+ (id)os_log;
@property(retain, nonatomic) NSNumber *isNotesAccessGrantedCachedValue; // @synthesize isNotesAccessGrantedCachedValue=_isNotesAccessGrantedCachedValue;
@property(retain, nonatomic) NSNumber *isClientLegacyImpl; // @synthesize isClientLegacyImpl=_isClientLegacyImpl;
@property(nonatomic) long long contactsLimitedPreflightStatus; // @synthesize contactsLimitedPreflightStatus=_contactsLimitedPreflightStatus;
@property(nonatomic) long long contactsFullPreflightStatus; // @synthesize contactsFullPreflightStatus=_contactsFullPreflightStatus;
@property(nonatomic) long long addressBookPreflightStatus; // @synthesize addressBookPreflightStatus=_addressBookPreflightStatus;
@property(retain, nonatomic) CNFAuditToken *auditToken; // @synthesize auditToken=_auditToken;
@property(retain, nonatomic) id <CNTCC> tcc; // @synthesize tcc=_tcc;
- (id)_readFileData:(int)arg1 offset:(int)arg2 size:(unsigned long long)arg3;
- (_Bool)_isPid:(int)arg1 linkedOnOrAfter:(CDStruct_c0454aff)arg2;
@property(readonly, nonatomic) _Bool isClientLegacy;
@property(readonly, nonatomic) _Bool isClientWhitelisted;
- (_Bool)doesClientHaveNotesEntitlement;
- (struct NSNumber *)resolveFuture:(id)arg1;
- (_Bool)isAccessGrantedRequestingAccessIfNeeded;
- (void)updatePreflightStatus:(long long)arg1 forService:(long long)arg2;
- (id)accessGrantedFutureForService:(long long)arg1;
- (id)sharedAccessGrantedFutureForRequest:(long long)arg1;
- (_Bool)isAccessGrantedWithError:(id *)arg1;
- (void)requestAuthorizationWithCompletionHandler:(id /* block */)arg1;
- (struct NSNumber *)_checkIfNotesAccessGranted;
@property(readonly, nonatomic) _Bool isNotesAccessGranted;
- (_Bool)isAddressBookAccessGranted;
@property(readonly, nonatomic) _Bool isFullAccessGranted;
@property(readonly, nonatomic) _Bool isLimitedAccessGranted;
@property(readonly, nonatomic) _Bool isAccessGranted;
- (void)requestAuthorization:(long long)arg1 completionHandler:(id /* block */)arg2;
@property(readonly, nonatomic) _Bool isAccessRestricted;
@property(readonly, nonatomic) long long authorizationStatus;
- (id)initWithAuditToken:(id)arg1 tcc:(id)arg2;
- (id)initWithAuditToken:(id)arg1;
- (id)init;

@end

