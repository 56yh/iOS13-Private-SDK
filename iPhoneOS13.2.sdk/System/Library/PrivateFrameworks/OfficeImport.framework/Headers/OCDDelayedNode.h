//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OCDDelayedNodeContext;

__attribute__((visibility("hidden")))
@interface OCDDelayedNode : NSObject
{
    id <OCDDelayedNodeContext> mDelayedContext;
    _Bool mLoaded;
}

- (_Bool)load;
- (void)setLoaded:(_Bool)arg1;
- (_Bool)isLoaded;
- (id)delayedContext;
- (void)setDelayedContext:(id)arg1;

@end

