//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BSTransaction;

@interface _BSTransactionChildRelationship : NSObject
{
    BSTransaction *_childTransaction;
    unsigned long long _schedulingPolicy;
}

@property(readonly, nonatomic) unsigned long long schedulingPolicy; // @synthesize schedulingPolicy=_schedulingPolicy;
@property(readonly, nonatomic) BSTransaction *childTransaction; // @synthesize childTransaction=_childTransaction;
- (id)initWithChildTransaction:(id)arg1 schedulingPolicy:(unsigned long long)arg2;

@end

