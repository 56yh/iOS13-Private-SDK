//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSDictionary.h>

@interface WLKSortedKeyDictionary : NSDictionary
{
    NSDictionary *_underlyingDictionary;
}

@property(copy, nonatomic) NSDictionary *underlyingDictionary; // @synthesize underlyingDictionary=_underlyingDictionary;
// - (void).cxx_destruct;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (NSUInteger)count;
- (id)initWithObjects:(const id )arg1 forKeys:(const id )arg2 count:(NSUInteger)arg3;

@end
