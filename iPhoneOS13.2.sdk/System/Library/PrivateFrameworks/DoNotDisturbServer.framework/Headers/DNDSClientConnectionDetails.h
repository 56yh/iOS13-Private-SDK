//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>




@class NSSet, NSUUID;

@interface DNDSClientConnectionDetails : NSObject <NSCopying, NSMutableCopying>
{
    NSUUID *_interruptionInvalidationAssertionUUID;
    NSSet *_assertionUpdateClientIdentifiers;
    _Bool _wantsStateUpdates;
    _Bool _wantsSettingsUpdates;
}

@property(readonly, nonatomic) _Bool wantsSettingsUpdates; // @synthesize wantsSettingsUpdates=_wantsSettingsUpdates;
@property(readonly, nonatomic) _Bool wantsStateUpdates; // @synthesize wantsStateUpdates=_wantsStateUpdates;
@property(readonly, copy, nonatomic) NSSet *assertionUpdateClientIdentifiers; // @synthesize assertionUpdateClientIdentifiers=_assertionUpdateClientIdentifiers;
@property(readonly, copy, nonatomic) NSUUID *interruptionInvalidationAssertionUUID; // @synthesize interruptionInvalidationAssertionUUID=_interruptionInvalidationAssertionUUID;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)_initWithInterruptionInvalidationAssertionUUID:(id)arg1 assertionUpdateClientIdentifiers:(id)arg2 wantsStateUpdates:(_Bool)arg3 wantsSettingsUpdates:(_Bool)arg4;
- (id)_initWithDetails:(id)arg1;
- (id)init;

@end

