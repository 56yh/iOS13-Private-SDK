//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSData;

@interface HMBLocalSQLContextRowQueryTuple : HMFObject
{
    unsigned long long _queryRow;
    NSData *_queryData;
}

@property(readonly, nonatomic) NSData *queryData; // @synthesize queryData=_queryData;
@property(readonly, nonatomic) unsigned long long queryRow; // @synthesize queryRow=_queryRow;
- (id)initWithQueryRow:(unsigned long long)arg1 data:(id)arg2;

@end

