//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SBLockStateAggregator : NSObject
{
    unsigned long long _lockState;
}

+ (id)sharedInstance;
- (void)_updateLockState;
- (_Bool)hasAnyLockState;
- (unsigned long long)lockState;
- (id)description;
- (id)_descriptionForLockState:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

