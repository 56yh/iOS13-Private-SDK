//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HDSQLiteDatabaseColumnSchema : NSObject
{
    _Bool _isAutoincrement;
    _Bool _isPrimaryKey;
    _Bool _isNullable;
    NSString *_name;
    NSString *_type;
    NSString *_defaultValue;
    NSString *_foreignKeyTargetTable;
    NSString *_foreignKeyTargetColumn;
    long long _deletionAction;
}

@property(nonatomic) long long deletionAction; // @synthesize deletionAction=_deletionAction;
@property(copy, nonatomic) NSString *foreignKeyTargetColumn; // @synthesize foreignKeyTargetColumn=_foreignKeyTargetColumn;
@property(copy, nonatomic) NSString *foreignKeyTargetTable; // @synthesize foreignKeyTargetTable=_foreignKeyTargetTable;
@property(copy, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(nonatomic) _Bool isNullable; // @synthesize isNullable=_isNullable;
@property(nonatomic) _Bool isPrimaryKey; // @synthesize isPrimaryKey=_isPrimaryKey;
@property(nonatomic) _Bool isAutoincrement; // @synthesize isAutoincrement=_isAutoincrement;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;

@end

