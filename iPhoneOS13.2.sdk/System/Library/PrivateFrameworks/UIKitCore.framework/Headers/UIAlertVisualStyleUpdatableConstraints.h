//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIAlertVisualStyleUpdatableConstraints : NSObject
{
    NSMutableDictionary *_constraintsByKey;
}

- (id)constraintForKey:(id)arg1;
- (void)addConstraint:(id)arg1 forKey:(id)arg2;
- (_Bool)hasUpdatableConstraints;
- (id)init;

@end

