//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class CKServerChangeToken, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface MSPCloudContainerCache : NSObject <NSSecureCoding>
{
    CKServerChangeToken *_serverToken;
    NSString *_cacheName;
    NSString *_accountIdentifier;
    long long _accountEnvironment;
    NSMutableDictionary *_stagedRecords;
    NSMutableSet *_stagedTombstones;
    NSDictionary *_cachedRecords;
    NSSet *_cachedTombstoneRecords;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSSet *cachedTombstoneRecords; // @synthesize cachedTombstoneRecords=_cachedTombstoneRecords;
@property(retain, nonatomic) NSDictionary *cachedRecords; // @synthesize cachedRecords=_cachedRecords;
@property(retain, nonatomic) NSMutableSet *stagedTombstones; // @synthesize stagedTombstones=_stagedTombstones;
@property(retain, nonatomic) NSMutableDictionary *stagedRecords; // @synthesize stagedRecords=_stagedRecords;
@property(nonatomic) long long accountEnvironment; // @synthesize accountEnvironment=_accountEnvironment;
@property(copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property(copy, nonatomic) NSString *cacheName; // @synthesize cacheName=_cacheName;
@property(retain, nonatomic) CKServerChangeToken *serverToken; // @synthesize serverToken=_serverToken;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)cachedRecordForIdentifier:(id)arg1;
- (id)cachedRecordForRecord:(id)arg1;
- (void)addRecordsFromChangeSet:(id)arg1;
- (_Bool)hasRecord:(id)arg1 withIdentifier:(id)arg2;
- (void)addRecord:(id)arg1 withIdentifier:(id)arg2;
- (id)cacheURL;
- (void)load;
- (void)save;
- (void)merge;
- (void)reset;
- (id)initWithName:(id)arg1 accountIdentifier:(id)arg2 accountEnvironment:(long long)arg3;
- (id)initWithName:(id)arg1 accountIdentifier:(id)arg2;

@end

