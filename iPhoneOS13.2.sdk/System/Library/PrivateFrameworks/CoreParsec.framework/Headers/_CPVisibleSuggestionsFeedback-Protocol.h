//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSData, NSDictionary, _CPSearchSuggestionForFeedback;

@protocol _CPVisibleSuggestionsFeedback 
@property(readonly, nonatomic) NSData *jsonData;
@property(copy, nonatomic) NSArray *suggestions;
@property(nonatomic) unsigned long long timestamp;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (_CPSearchSuggestionForFeedback *)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (void)addSuggestions:(_CPSearchSuggestionForFeedback *)arg1;
- (void)clearSuggestions;
@end

