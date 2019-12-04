//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLChangeSessionUpdate.h>

@class CPLChangeBatch;

@interface CPLPullSessionUpdate : CPLChangeSessionUpdate
{
    CPLChangeBatch *_clientBatch;
    CPLChangeBatch *_cloudBatch;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) CPLChangeBatch *cloudBatch; // @synthesize cloudBatch=_cloudBatch;
@property(readonly, nonatomic) CPLChangeBatch *clientBatch; // @synthesize clientBatch=_clientBatch;
- (id)pendingRecordChangeForClientCacheWithLocalScopedIdentifier:(id)arg1;
- (id)statusDescription;
- (id)storageForStatusInStore:(id)arg1;
- (_Bool)discardFromStore:(id)arg1 error:(id *)arg2;
- (_Bool)applyToStore:(id)arg1 error:(id *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStore:(id)arg1 expandedClientBatch:(id)arg2 expandedCloudBatch:(id)arg3;

@end

