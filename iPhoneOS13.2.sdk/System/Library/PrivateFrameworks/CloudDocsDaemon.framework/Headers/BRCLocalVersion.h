//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudDocsDaemon/BRCVersion.h>

@class CKRecord, NSError;

__attribute__((visibility("hidden")))
@interface BRCLocalVersion : BRCVersion
{
    CKRecord *_uploadedAssets;
    NSError *_uploadError;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSError *uploadError; // @synthesize uploadError=_uploadError;
@property(retain, nonatomic) CKRecord *uploadedAssets; // @synthesize uploadedAssets=_uploadedAssets;
- (void)sqliteBind:(struct sqlite3_stmt *)arg1 index:(int)arg2;
- (void)updateLocationAndMetaFromFSAtPath:(id)arg1 updateFilename:(_Bool)arg2 filenameOverride:(id)arg3;
- (void)updateFromFSAtPath:(id)arg1 filenameOverride:(id)arg2;
- (void)_clearSignatures:(unsigned long long)arg1 isPackage:(_Bool)arg2;
- (_Bool)isMissingUploadsWithDiffs:(unsigned long long)arg1;
- (_Bool)shouldRecreateUploadJobGivenDiffs:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalVersion:(id)arg1;
- (id)initWithServerVersion:(id)arg1;
- (id)initWithVersion:(id)arg1;
- (id)initForPackage:(_Bool)arg1;
- (unsigned long long)diffAgainstLocalVersion:(id)arg1;
- (id)initFromResultSet:(id)arg1 pos:(int)arg2;
- (id)descriptionWithContext:(id)arg1;
- (id)sizeObj;
- (id)isPackageObj;

@end

