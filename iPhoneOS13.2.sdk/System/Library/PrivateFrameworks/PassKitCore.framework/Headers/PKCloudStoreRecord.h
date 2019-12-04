//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableDictionary;

@interface PKCloudStoreRecord : NSObject
{
    NSMutableDictionary *_records;
    NSDictionary *_cloudStoreSpecificKeys;
}

@property(copy, nonatomic) NSDictionary *cloudStoreSpecificKeys; // @synthesize cloudStoreSpecificKeys=_cloudStoreSpecificKeys;
- (id)description;
- (void)addRecord:(id)arg1;
@property(readonly, nonatomic) NSArray *records;
- (id)recordsWithRecordType:(id)arg1;
- (id)initWithRecords:(id)arg1;

@end

