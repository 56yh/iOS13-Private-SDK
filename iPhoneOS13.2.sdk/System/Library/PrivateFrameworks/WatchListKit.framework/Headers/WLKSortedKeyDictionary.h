//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/Foundation.h>

@interface WLKSortedKeyDictionary : NSDictionary
{
    NSDictionary *_underlyingDictionary;
}

@property(copy, nonatomic) NSDictionary *underlyingDictionary; // @synthesize underlyingDictionary=_underlyingDictionary;
- (id)keyEnumerator;
- (id)objectForKey:(id)arg1;
- (unsigned long long)count;
- (id)initWithObjects:(const id *)arg1 forKeys:(const id *)arg2 count:(unsigned long long)arg3;

@end

