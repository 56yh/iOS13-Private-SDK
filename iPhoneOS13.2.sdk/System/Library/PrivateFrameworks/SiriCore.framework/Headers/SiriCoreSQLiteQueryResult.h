//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, SiriCoreSQLiteQuery, SiriCoreSQLiteStatement;

@interface SiriCoreSQLiteQueryResult : NSObject
{
    SiriCoreSQLiteQuery *_query;
    unsigned long long _beginMachTime;
    unsigned long long _endMachTime;
    SiriCoreSQLiteStatement *_statement;
    NSArray *_columnNameTuple;
    NSArray *_columnValueTuples;
    NSDictionary *_columnValuesMap;
    NSArray *_rowValueTuples;
    NSArray *_rowValueMaps;
    NSArray *_records;
    NSError *_error;
}

@property(readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, copy, nonatomic) NSArray *records; // @synthesize records=_records;
@property(readonly, copy, nonatomic) NSArray *rowValueMaps; // @synthesize rowValueMaps=_rowValueMaps;
@property(readonly, copy, nonatomic) NSArray *rowValueTuples; // @synthesize rowValueTuples=_rowValueTuples;
@property(readonly, copy, nonatomic) NSDictionary *columnValuesMap; // @synthesize columnValuesMap=_columnValuesMap;
@property(readonly, copy, nonatomic) NSArray *columnValueTuples; // @synthesize columnValueTuples=_columnValueTuples;
@property(readonly, copy, nonatomic) NSArray *columnNameTuple; // @synthesize columnNameTuple=_columnNameTuple;
@property(readonly, nonatomic) SiriCoreSQLiteStatement *statement; // @synthesize statement=_statement;
@property(readonly, nonatomic) unsigned long long endMachTime; // @synthesize endMachTime=_endMachTime;
@property(readonly, nonatomic) unsigned long long beginMachTime; // @synthesize beginMachTime=_beginMachTime;
@property(readonly, copy, nonatomic) SiriCoreSQLiteQuery *query; // @synthesize query=_query;
- (id)description;
- (id)initWithQuery:(id)arg1 beginMachTime:(unsigned long long)arg2 endMachTime:(unsigned long long)arg3 statement:(id)arg4 columnNameTuple:(id)arg5 columnValueTuples:(id)arg6 columnValuesMap:(id)arg7 rowValueTuples:(id)arg8 rowValueMaps:(id)arg9 records:(id)arg10 error:(id)arg11;

@end

