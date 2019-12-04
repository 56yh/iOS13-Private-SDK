//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface ARUIAnimatableObject : NSObject
{
    NSMutableDictionary *_animatableProperties;
}

- (id)_newAnimatablePropertyForType:(unsigned long long)arg1;
- (id)endingValueForPropertyType:(unsigned long long)arg1;
- (id)_animatablePropertyForType:(unsigned long long)arg1;
- (_Bool)areAnimationsInProgress;
- (void)removeAllAnimationsForPropertyType:(unsigned long long)arg1;
- (void)addAnimation:(id)arg1 forPropertyType:(unsigned long long)arg2;
- (void)setValue:(id)arg1 forPropertyType:(unsigned long long)arg2;
- (void)update:(double)arg1;

@end

