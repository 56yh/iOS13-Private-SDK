//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface AMSBagKeySetAggregator : NSObject
{
    NSMutableDictionary *_bagKeySets;
}

@property(retain, nonatomic) NSMutableDictionary *bagKeySets; // @synthesize bagKeySets=_bagKeySets;
- (_Bool)hasBagKeySetForConsumer:(Class)arg1;
- (id)generateAggregatedBagKeySet;
- (void)addBagKeySet:(id)arg1 forConsumer:(Class)arg2;
- (id)init;

@end

