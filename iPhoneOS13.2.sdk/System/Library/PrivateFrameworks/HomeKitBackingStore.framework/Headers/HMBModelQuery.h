//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSArray, NSDictionary, NSMapTable, NSNumber, NSString;

@interface HMBModelQuery : HMFObject
{
    NSString *_sqlPredicate;
    NSArray *_sqlColumns;
    unsigned long long _maximumRowsPerSelect;
    NSNumber *_initialSequence;
    NSDictionary *_arguments;
    NSMapTable *_preparedQueries;
    Class _modelClass;
    NSString *_sqlSelect;
    NSDictionary *_argumentFields;
    NSDictionary *_defaultArgumentValues;
}

@property(readonly, nonatomic) NSDictionary *defaultArgumentValues; // @synthesize defaultArgumentValues=_defaultArgumentValues;
@property(readonly, nonatomic) NSDictionary *argumentFields; // @synthesize argumentFields=_argumentFields;
@property(readonly, nonatomic) NSString *sqlSelect; // @synthesize sqlSelect=_sqlSelect;
@property(retain, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(readonly, nonatomic) NSMapTable *preparedQueries; // @synthesize preparedQueries=_preparedQueries;
@property(readonly, nonatomic) NSDictionary *arguments; // @synthesize arguments=_arguments;
@property(readonly, nonatomic) NSNumber *initialSequence; // @synthesize initialSequence=_initialSequence;
@property(readonly, nonatomic) unsigned long long maximumRowsPerSelect; // @synthesize maximumRowsPerSelect=_maximumRowsPerSelect;
@property(readonly, nonatomic) NSArray *sqlColumns; // @synthesize sqlColumns=_sqlColumns;
@property(readonly, nonatomic) NSString *sqlPredicate; // @synthesize sqlPredicate=_sqlPredicate;
@property(readonly, nonatomic) _Bool hasExpectedIndexes;
- (id)performQueryOn:(id)arg1 arguments:(id)arg2;
- (id)description;
- (id)prepareOnTable:(id)arg1;
- (id)initWithSQLPredicate:(id)arg1 sqlColumns:(id)arg2 initialSequence:(id)arg3 maximumRowsPerSelect:(unsigned long long)arg4 arguments:(id)arg5;

@end

