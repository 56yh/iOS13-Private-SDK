//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCountedSet, NSSet;

@interface WBSCacheRetainReleasePolicy : NSObject
{
    id /* CDUnknownBlockType */ _purgeBlock;
    NSCountedSet *_entryRetainCounts;
    NSCountedSet *_negativeEntryRetainCounts;
}

// - (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSSet *retainedKeyStrings;
- (BOOL)isEntryRetainedForKeyString:(id)arg1;
- (void)_releaseEntryForKeyString:(id)arg1;
- (void)releaseEntryWithKeyStringProvider:(id /* CDUnknownBlockType */)arg1;
- (void)releaseEntriesForKeyStrings:(id)arg1;
- (void)releaseEntryForKeyString:(id)arg1;
- (void)_retainEntryForKeyString:(id)arg1;
- (void)retainEntryWithKeyStringProvider:(id /* CDUnknownBlockType */)arg1;
- (void)retainEntriesForKeyStrings:(id)arg1;
- (void)retainEntryForKeyString:(id)arg1;
- (id)initWithPurgeBlock:(id /* CDUnknownBlockType */)arg1;

@end

