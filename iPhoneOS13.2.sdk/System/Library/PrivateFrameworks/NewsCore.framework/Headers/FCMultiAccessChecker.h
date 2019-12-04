//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCAccessChecker.h>

@class NSArray;

@interface FCMultiAccessChecker : FCAccessChecker
{
    NSArray *_accessCheckers;
}

@property(readonly, copy, nonatomic) NSArray *accessCheckers; // @synthesize accessCheckers=_accessCheckers;
- (void)checkAccessToItem:(id)arg1 withQualityOfService:(long long)arg2 completion:(id /* block */)arg3;
- (_Bool)hasAccessToItem:(id)arg1 blockedReason:(unsigned long long *)arg2 error:(id *)arg3;
- (_Bool)canSynchronouslyCheckAccessToItem:(id)arg1;
- (id)initWithAccessCheckers:(id)arg1;
- (id)init;

@end

