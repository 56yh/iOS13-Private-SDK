//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ASCredentialIdentityStoreState : NSObject
{
    BOOL _enabled;
    BOOL _supportsIncrementalUpdates;
}

@property(readonly, nonatomic) BOOL supportsIncrementalUpdates; // @synthesize supportsIncrementalUpdates=_supportsIncrementalUpdates;
@property(readonly, nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
- (id)description;
- (id)initWithEnabledState:(BOOL)arg1 supportsIncrementalUpdates:(BOOL)arg2;

@end

