//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface EFSQLSchema : NSObject
{
    NSDictionary *_tablesByName;
}

- (id)tableForName:(id)arg1;
- (id)indexDefinitionsWithDatabaseName:(id)arg1;
- (id)definitionWithDatabaseName:(id)arg1 includeIndexes:(_Bool)arg2;
- (id)definitionWithDatabaseName:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *tables;
- (id)description;
- (id)initWithTables:(id)arg1;

@end

