//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>



@class CPLChangeBatch, NSDictionary, NSMutableDictionary, NSMutableSet, NSSet, NSString;

@interface CPLExtractedBatch : NSObject <NSSecureCoding>
{
    NSDictionary *_uploadIdentifiers;
    NSMutableDictionary *_mutableUploadIdentifiers;
    NSSet *_untrustableScopedIdentifiers;
    NSMutableSet *_mutableUntrustableScopedIndentifiers;
    _Bool _resourceSizeIsCalculated;
    unsigned long long _resourceSize;
    _Bool _full;
    _Bool _batchCanLowerQuota;
    CPLChangeBatch *_batch;
    NSString *_clientCacheIdentifier;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *clientCacheIdentifier; // @synthesize clientCacheIdentifier=_clientCacheIdentifier;
@property(readonly, nonatomic) _Bool batchCanLowerQuota; // @synthesize batchCanLowerQuota=_batchCanLowerQuota;
@property(nonatomic, getter=isFull) _Bool full; // @synthesize full=_full;
@property(readonly, nonatomic) unsigned long long resourceSize; // @synthesize resourceSize=_resourceSize;
@property(readonly, nonatomic) CPLChangeBatch *batch; // @synthesize batch=_batch;
- (void)forceScopeIndexOnAllRecordsTo:(long long)arg1;
- (unsigned long long)effectiveResourceSizeToUploadUsingStorage:(id)arg1;
- (id)uploadIdentifiers;
- (void)addChange:(id)arg1 fromStorage:(id)arg2;
- (id)uploadIdentifierForChange:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end

