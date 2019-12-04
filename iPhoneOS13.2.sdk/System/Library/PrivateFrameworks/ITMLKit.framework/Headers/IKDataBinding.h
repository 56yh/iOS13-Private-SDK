//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface IKDataBinding : NSObject
{
    NSDictionary *_entriesByKey;
    NSMutableSet *_unresolvedKeys;
    struct NSDictionary *_keyValues;
    NSSet *_dataBoundKeys;
}

@property(readonly, nonatomic) NSSet *dataBoundKeys; // @synthesize dataBoundKeys=_dataBoundKeys;
@property(copy, nonatomic) NSDictionary *keyValues; // @synthesize keyValues=_keyValues;
- (void)markResolvedForKey:(id)arg1;
- (void)setNeedsResolutionForAllKeys;
- (void)setNeedsResolutionForKey:(id)arg1;
- (id)unresolvedKeysWithAnyOfAttributes:(unsigned long long)arg1;
- (id)dataBoundKeysWithAnyOfAttributes:(unsigned long long)arg1;
- (id)keysWithAnyOfAttributes:(unsigned long long)arg1;
@property(readonly, nonatomic) NSSet *unresolvedKeys;
- (id)initWithEntries:(id)arg1;

@end

