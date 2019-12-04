//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreHandwriting/CHQuery.h>

@class NSArray, NSString;

@interface CHSearchQuery : CHQuery
{
    NSArray *_foundItems;
    NSString *_queryString;
}

- (id)debugName;
@property(copy, nonatomic, setter=_setFoundItems:) NSArray *foundItems; // @synthesize foundItems=_foundItems;
@property(copy, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
- (_Bool)_isMatchStringForToken:(id)arg1 queryString:(id)arg2 fromIndex:(long long)arg3 requirePrefixMatch:(_Bool)arg4 matchedLength:(long long *)arg5;
- (_Bool)_isMatchSeparatorBeforeToken:(id)arg1 atLocation:(CDStruct_2ec95fd7)arg2 inResult:(id)arg3 queryString:(id)arg4 fromIndex:(long long)arg5 matchedLength:(long long *)arg6;
- (_Bool)_findMatchingTokenPathInResult:(id)arg1 initialTokenLocation:(CDStruct_2ec95fd7)arg2 queryString:(id)arg3 fromIndex:(long long)arg4 coveredStrokeIndexes:(id)arg5 reverseMatchedTokens:(id *)arg6;
- (void)_enumerateMatchesForStrokeGroupResult:(id)arg1 locales:(id)arg2 queryString:(id)arg3 usingBlock:(id /* block */)arg4;
- (id)q_foundItemsForSearchString:(id)arg1 sessionResult:(id)arg2;
- (void)q_updateQueryResult;
- (void)stop;
- (void)dealloc;
- (id)initWithRecognitionSession:(id)arg1;

@end

