//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface HKSleepPeriodChartPointOffset : NSObject
{
    _Bool _continuation;
    NSNumber *_value;
}

+ (id)chartPointOffsetWithValue:(id)arg1 continuation:(_Bool)arg2;
@property(readonly, nonatomic) _Bool continuation; // @synthesize continuation=_continuation;
@property(readonly, nonatomic) NSNumber *value; // @synthesize value=_value;
- (id)initWithValue:(id)arg1 continuation:(_Bool)arg2;

@end

