//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDSimpleGraphDatabase;

@interface HDSimpleGraphObject : NSObject
{
    HDSimpleGraphDatabase *_database;
    long long _rowID;
}

@property(nonatomic) long long rowID; // @synthesize rowID=_rowID;
@property(nonatomic) __weak HDSimpleGraphDatabase *database; // @synthesize database=_database;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithDatabase:(id)arg1 rowID:(long long)arg2;
- (id)init;

@end

