//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosGraph/PGAbstractSuggester.h>

#import <PhotosGraph/PGCoordinatableSuggester-Protocol.h>

@class NSArray, NSDictionary, NSEnumerator, NSString, PGSuggestionOptions;

@interface PGOutstanderSuggester : PGAbstractSuggester <PGCoordinatableSuggester>
{
    PGSuggestionOptions *_options;
    NSDictionary *_assetUUIDsByScore;
    NSArray *_sortedScores;
    long long _currentScoreIndex;
    NSEnumerator *_currentSuggestedAssetEnumerator;
}

+ (id)suggestionSubtypes;
+ (id)suggestionTypes;
- (id)reasonsForSuggestion:(id)arg1;
- (id)nextSuggestedAssetEnumerator;
- (id)nextSuggestedAsset;
- (unsigned long long)scoreWithAsset:(id)arg1;
- (void)computeNiceAssetsBetweenStartDate:(id)arg1 andEndDate:(id)arg2;
- (void)reset;
- (id)nextSuggestion;
- (void)startSuggestingWithOptions:(id)arg1;
- (id)suggestionsWithOptions:(id)arg1 progress:(id /* block */)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

