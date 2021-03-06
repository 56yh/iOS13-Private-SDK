//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSMutableDictionary;

@interface RBProcessStateChangeSet : NSObject <NSFastEnumeration>
{
    NSMutableDictionary *_stateChangesByIdentity;
}

// - (void).cxx_destruct;
- (void)_diffOriginalStatesByIdentity:(id)arg1 withUpdatedStatesByIdentity:(id)arg2;
- (NSUInteger)countByEnumeratingWithState:(CDStruct_70511ce9 )arg1 objects:(id )arg2 count:(NSUInteger)arg3;
- (id)processIdentities;
- (id)processStateChangeForIdentity:(id)arg1;
- (void)applyChanges:(id)arg1;
@property(readonly, nonatomic) BOOL hasChanges;
- (id)initWithOriginalStatesByIdentity:(id)arg1 updatedStatesByIdentity:(id)arg2;
- (id)initWithChanges:(id)arg1;

@end

