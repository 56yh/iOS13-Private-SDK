//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface _PASStringPairs : NSObject
{
    NSArray *_keys;
    NSArray *_values;
}

@property(readonly, nonatomic) NSArray *values; // @synthesize values=_values;
@property(readonly, nonatomic) NSArray *keys; // @synthesize keys=_keys;
- (id)valueAtIndex:(unsigned long long)arg1;
- (id)keyAtIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;
- (id)initWithKeys:(id)arg1 values:(id)arg2;

@end

