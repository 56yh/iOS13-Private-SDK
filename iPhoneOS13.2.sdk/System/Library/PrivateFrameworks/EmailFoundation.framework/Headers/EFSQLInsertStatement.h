//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <EmailFoundation/EFSQLInsertStatementValue-Protocol.h>

@class NSMutableArray, NSMutableOrderedSet, NSString;

@interface EFSQLInsertStatement : NSObject <EFSQLInsertStatementValue>
{
    NSString *_table;
    unsigned long long _conflictResolution;
    NSMutableArray *_values;
    NSMutableOrderedSet *_requiredColumns;
}

@property(retain, nonatomic) NSMutableOrderedSet *requiredColumns; // @synthesize requiredColumns=_requiredColumns;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) unsigned long long conflictResolution; // @synthesize conflictResolution=_conflictResolution;
@property(retain, nonatomic) NSString *table; // @synthesize table=_table;
- (id)addValue;
- (void)enumerateBindingNamesAndValuesUsingBlock:(id /* block */)arg1;
- (void)enumerateBindingIndicesAndValuesUsingBlock:(id /* block */)arg1;
- (id)_valuesForNamedBindings:(_Bool)arg1;
- (id)_queryStringForNamedBindings:(_Bool)arg1;
@property(readonly, copy, nonatomic) NSString *queryStringForNamedBindings;
@property(readonly, copy, nonatomic) NSString *queryString;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
- (id)initWithTable:(id)arg1 conflictResolution:(unsigned long long)arg2;
- (id)initWithTable:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

