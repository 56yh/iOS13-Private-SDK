//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCRecordSource.h>

#import <NewsCore/FCJSONRecordSourceType-Protocol.h>

@class FCJSONRecordSourceSchema, NSISO8601DateFormatter;

@interface FCJSONRecordSource : FCRecordSource <FCJSONRecordSourceType>
{
    FCJSONRecordSourceSchema *_schema;
    NSISO8601DateFormatter *_dateFormatter;
}

@property(copy, nonatomic) NSISO8601DateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property(copy, nonatomic) FCJSONRecordSourceSchema *schema; // @synthesize schema=_schema;
- (id)recordFromCKRecord:(id)arg1 base:(id)arg2;
- (id)keyValueRepresentationOfRecord:(id)arg1;
- (id)recordIDPrefix;
- (unsigned long long)highThresholdDataSizeLimit;
- (unsigned long long)lowThresholdDataSizeLimit;
- (unsigned long long)storeVersion;
- (id)storeFilename;
- (id)localizableKeys;
- (id)nonLocalizableKeys;
- (int)pbRecordType;
- (id)recordType;
- (void)fetchRecordsWithIDs:(id)arg1 completion:(id /* block */)arg2;
- (void)fetchRecordsWithIDs:(id)arg1 cachePolicy:(id)arg2 completion:(id /* block */)arg3;
- (id)initWithSchema:(id)arg1 contentDatabase:(id)arg2 contentDirectory:(id)arg3 experimentationSuffix:(id)arg4 activeTreatmentID:(id)arg5;

@end
