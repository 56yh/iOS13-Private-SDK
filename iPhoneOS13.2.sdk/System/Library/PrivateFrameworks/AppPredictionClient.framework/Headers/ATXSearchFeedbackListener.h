//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/SFFeedbackListener-Protocol.h>

@class NSArray, NSMutableArray, NSString, PETGoalConversionEventTracker, SFSearchResult;
@protocol ATXSearchFeedbackListenerTarget;

@interface ATXSearchFeedbackListener : NSObject <SFFeedbackListener>
{
    NSObject<ATXSearchFeedbackListenerTarget> *_target;
    NSArray *_currentZKWItems;
    NSString *_query;
    unsigned char _appConsumerSubType;
    unsigned char _actionConsumerSubType;
    PETGoalConversionEventTracker *_apAppPredictionsShownTracker;
    _Bool _waitingForPredictedAppFeedback;
    _Bool _waitingForPredictedActionFeedback;
    SFSearchResult *_engagedResult;
    NSMutableArray *_explicitlyDismissedActions;
    _Bool _cardWasEngaged;
    struct {
        CDStruct_a7b080c6 resultsDidBecomeVisible;
        CDStruct_a7b080c6 didStartSearch;
        CDStruct_a7b080c6 searchViewDidAppear;
        CDStruct_a7b080c6 searchViewDidDisappear;
        CDStruct_a7b080c6 didEngageResult;
        CDStruct_a7b080c6 didEngageCardSection;
    } _debounce;
    _Bool _shouldDebounce;
}

+ (id)mergeNewSearchResults:(id)arg1 intoExistingResults:(id)arg2;
@property(nonatomic) _Bool shouldDebounce; // @synthesize shouldDebounce=_shouldDebounce;
- (void)didEngageCardSection:(id)arg1;
- (void)cardViewDidDisappear:(id)arg1;
- (void)didEngageResult:(id)arg1;
- (void)resultsDidBecomeVisible:(id)arg1;
- (void)didStartSearch:(id)arg1;
- (void)searchViewDidDisappear:(id)arg1;
- (void)searchViewDidAppear:(id)arg1;
- (void)_sendAppFeedback:(id)arg1 searchResults:(id)arg2;
- (void)_sendActionFeedback:(id)arg1 searchedActionType:(unsigned long long)arg2 engagedAppString:(id)arg3 searchResults:(id)arg4 executedInBackground:(_Bool)arg5;
- (void)_sendFeedbackForEngagement:(_Bool)arg1 actionExecutedInBackground:(_Bool)arg2;
- (void)_resetState;
- (void)_zkwItemsDidAppear:(id)arg1;
- (void)_setQuery:(id)arg1;
- (void)_setAppConsumerSubType:(unsigned char)arg1 actionConsumerSubType:(unsigned char)arg2;
- (_Bool)_isDuplicateEventWithState:(CDStruct_a7b080c6 *)arg1 timestamp:(unsigned long long)arg2 method:(SEL)arg3;
- (id)initWithTarget:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

