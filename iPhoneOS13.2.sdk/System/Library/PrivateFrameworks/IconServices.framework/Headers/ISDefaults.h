//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface ISDefaults : NSObject
{
    struct os_unfair_lock_s _lock;
    NSNumber *__usePerstentCache;
}

+ (id)sharedInstance;
@property(readonly) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(retain) NSNumber *_usePerstentCache; // @synthesize _usePerstentCache=__usePerstentCache;
@property(readonly) _Bool usePerstentCache; // @dynamic usePerstentCache;

@end

