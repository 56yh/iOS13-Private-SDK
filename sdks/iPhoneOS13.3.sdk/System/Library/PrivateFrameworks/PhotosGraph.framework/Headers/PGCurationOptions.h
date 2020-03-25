//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>


@class NSSet;

@interface PGCurationOptions : NSObject <NSCopying>
{
    BOOL _includesAllFaces;
    BOOL _semanticalDedupingEnabled;
    BOOL _semanticalDedupingUsesAdaptiveSimilarStacking;
    BOOL _movieDedupingEnabled;
    BOOL _lastPassMovieAdditionEnabled;
    BOOL _focusOnPeople;
    BOOL _focusOnInterestingItems;
    NSUInteger _duration;
    NSUInteger _precision;
    long long _cardinalMode;
    NSSet *_uuidsOfRequiredAssets;
}

@property(nonatomic) BOOL focusOnInterestingItems; // @synthesize focusOnInterestingItems=_focusOnInterestingItems;
@property(nonatomic) BOOL focusOnPeople; // @synthesize focusOnPeople=_focusOnPeople;
@property(copy, nonatomic) NSSet *uuidsOfRequiredAssets; // @synthesize uuidsOfRequiredAssets=_uuidsOfRequiredAssets;
@property(nonatomic) long long cardinalMode; // @synthesize cardinalMode=_cardinalMode;
@property(nonatomic, getter=lastPassMovieAdditionIsEnabled) BOOL lastPassMovieAdditionEnabled; // @synthesize lastPassMovieAdditionEnabled=_lastPassMovieAdditionEnabled;
@property(nonatomic, getter=movieDedupingIsEnabled) BOOL movieDedupingEnabled; // @synthesize movieDedupingEnabled=_movieDedupingEnabled;
@property(nonatomic) BOOL semanticalDedupingUsesAdaptiveSimilarStacking; // @synthesize semanticalDedupingUsesAdaptiveSimilarStacking=_semanticalDedupingUsesAdaptiveSimilarStacking;
@property(nonatomic, getter=semanticalDedupingIsEnabled) BOOL semanticalDedupingEnabled; // @synthesize semanticalDedupingEnabled=_semanticalDedupingEnabled;
@property(nonatomic) BOOL includesAllFaces; // @synthesize includesAllFaces=_includesAllFaces;
@property(nonatomic) NSUInteger precision; // @synthesize precision=_precision;
@property(nonatomic) NSUInteger duration; // @synthesize duration=_duration;
// - (void).cxx_destruct;
- (id)dictionaryRepresentation;
// - (id)copyWithZone:(_NSZone )arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithDuration:(NSUInteger)arg1 precision:(NSUInteger)arg2;

@end
