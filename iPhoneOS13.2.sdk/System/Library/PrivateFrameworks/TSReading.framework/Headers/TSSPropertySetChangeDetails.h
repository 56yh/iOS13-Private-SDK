//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class TSSMutablePropertySet;

@interface TSSPropertySetChangeDetails : NSObject
{
    TSSMutablePropertySet *mChangedProperties;
}

- (id)changedProperties;
- (void)addChangedProperties:(id)arg1;
- (void)addChangedProperty:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithChangedProperties:(id)arg1;

@end

