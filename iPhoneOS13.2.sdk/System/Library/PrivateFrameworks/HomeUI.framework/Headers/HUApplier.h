//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface HUApplier : NSObject
{
    NSMutableArray *_applierBlocks;
    NSMutableArray *_completionBlocks;
    unsigned long long _state;
    double _progress;
}

+ (void)unregisterStandaloneApplier:(id)arg1;
+ (void)registerStandaloneApplier:(id)arg1;
@property(readonly, nonatomic) double progress; // @synthesize progress=_progress;
@property(readonly, nonatomic) unsigned long long state; // @synthesize state=_state;
- (_Bool)complete:(_Bool)arg1;
- (_Bool)_hasCompleted;
- (_Bool)cancel;
- (void)updateProgress:(double)arg1;
- (_Bool)start;
- (void)addCompletionBlock:(id /* block */)arg1;
- (void)addApplierBlock:(id /* block */)arg1;
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
- (id)init;

@end

