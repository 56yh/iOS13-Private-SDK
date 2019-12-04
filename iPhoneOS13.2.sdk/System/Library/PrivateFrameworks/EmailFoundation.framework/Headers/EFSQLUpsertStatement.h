//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class EFSQLInsertStatement, EFSQLUpdateStatement, NSArray, NSString;
@protocol EFSQLExpressable, EFSQLInsertStatementValue, EFSQLUpdateStatementValue;

@interface EFSQLUpsertStatement : NSObject
{
    EFSQLInsertStatement *_insertStatement;
    EFSQLUpdateStatement *_updateStatement;
    NSArray *_conflictTarget;
}

@property(readonly, nonatomic) NSArray *conflictTarget; // @synthesize conflictTarget=_conflictTarget;
@property(readonly, nonatomic) EFSQLUpdateStatement *updateStatement; // @synthesize updateStatement=_updateStatement;
@property(readonly, nonatomic) EFSQLInsertStatement *insertStatement; // @synthesize insertStatement=_insertStatement;
- (id)excludedColumnExpressionForColumnName:(id)arg1;
@property(readonly, copy, nonatomic) NSString *queryString;
@property(readonly, nonatomic) _Bool isEmpty;
- (void)enumerateBindingNamesAndValuesUsingBlock:(id /* block */)arg1;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)objectForKeyedSubscript:(id)arg1;
@property(retain, nonatomic) id <EFSQLExpressable> whereClause;
@property(readonly, nonatomic) id <EFSQLUpdateStatementValue> updateValue;
@property(readonly, nonatomic) id <EFSQLInsertStatementValue> insertValue;
- (id)initWithTable:(id)arg1 conflictTarget:(id)arg2;

@end

