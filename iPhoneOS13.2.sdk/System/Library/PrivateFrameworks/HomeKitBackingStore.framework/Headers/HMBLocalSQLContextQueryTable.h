//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSDictionary, NSMutableDictionary, NSSet;

@interface HMBLocalSQLContextQueryTable : HMFObject
{
    NSSet *_columnNames;
    NSMutableDictionary *_mutableIndexes;
}

@property(readonly, nonatomic) NSMutableDictionary *mutableIndexes; // @synthesize mutableIndexes=_mutableIndexes;
@property(readonly, nonatomic) NSSet *columnNames; // @synthesize columnNames=_columnNames;
- (id)description;
@property(readonly, nonatomic) NSDictionary *indexes;
- (id)initWithColumnNames:(id)arg1;

@end

