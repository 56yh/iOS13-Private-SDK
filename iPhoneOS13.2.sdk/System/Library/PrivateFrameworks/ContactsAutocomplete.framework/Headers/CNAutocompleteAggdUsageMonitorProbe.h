//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/CNAutocompleteUsageMonitorProbe-Protocol.h>

@class CNAutocompleteAggdProbe, NSNumber, NSString;

@interface CNAutocompleteAggdUsageMonitorProbe : NSObject <CNAutocompleteUsageMonitorProbe>
{
    CNAutocompleteAggdProbe *_aggdProbe;
    NSNumber *_selectedIndex;
    NSNumber *_selectedPredictionIndex;
    NSNumber *_lengthOfSearchString;
    NSNumber *_sourceType;
    NSNumber *_returnedDuetResults;
}

@property(retain, nonatomic) NSNumber *returnedDuetResults; // @synthesize returnedDuetResults=_returnedDuetResults;
@property(retain, nonatomic) NSNumber *sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSNumber *lengthOfSearchString; // @synthesize lengthOfSearchString=_lengthOfSearchString;
@property(retain, nonatomic) NSNumber *selectedPredictionIndex; // @synthesize selectedPredictionIndex=_selectedPredictionIndex;
@property(retain, nonatomic) NSNumber *selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(retain, nonatomic) CNAutocompleteAggdProbe *aggdProbe; // @synthesize aggdProbe=_aggdProbe;
- (void)sendData;
- (void)recordUserIgnoredPrefixedResultAfterDelay:(double)arg1 batch:(unsigned long long)arg2;
- (void)recordUserIgnoredPredictionAfterDelay:(double)arg1;
- (void)recordUserSelectedResultWithSourceType:(unsigned long long)arg1;
- (void)recordUserSelectedPredictionAtIndex:(unsigned long long)arg1;
- (void)recordUserTypedInNumberOfCharacters:(unsigned long long)arg1;
- (void)recordDuetReturnedResults:(_Bool)arg1;
- (void)recordUserSelectedIndex:(unsigned long long)arg1;
- (void)recordUserSawResultsConsideredSuggestion:(unsigned long long)arg1;
- (void)recordUserSawCuratedResults:(unsigned long long)arg1;
- (void)recordUserSawPredictions;
- (id)sourceKeysForSourceType:(unsigned long long)arg1;
- (id)initWithAggdProbe:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

