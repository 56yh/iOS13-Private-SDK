//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PHAJobWorkInfoReader : NSObject
{
    NSMutableArray *_workInfosQueue;
    unsigned long long _fetchLimit;
}

@property(nonatomic) unsigned long long fetchLimit; // @synthesize fetchLimit=_fetchLimit;
- (id)workInfoWithCount:(unsigned long long)arg1 fetchBlock:(id /* block */)arg2;
@property(readonly, nonatomic) unsigned long long queueCount;
- (id)init;

@end

