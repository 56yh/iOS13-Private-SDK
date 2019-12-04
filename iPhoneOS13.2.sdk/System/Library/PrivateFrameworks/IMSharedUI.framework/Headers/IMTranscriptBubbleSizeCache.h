//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface IMTranscriptBubbleSizeCache : NSObject
{
    NSMutableArray *_sizeCache;
}

@property(retain) NSMutableArray *sizeCache; // @synthesize sizeCache=_sizeCache;
- (id)_cacheEntryForMaximumWidth:(double)arg1 getEffectiveIndex:(unsigned long long *)arg2;
- (void)_insertCacheEntry:(id)arg1;
- (void)flush;
- (void)setSize:(struct CGSize)arg1 forMaximumWidth:(double)arg2;
- (struct CGSize)sizeForMaximumWidth:(double)arg1;
- (id)init;

@end

