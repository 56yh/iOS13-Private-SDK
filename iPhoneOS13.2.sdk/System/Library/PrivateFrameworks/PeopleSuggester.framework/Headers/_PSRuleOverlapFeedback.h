//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BMBehaviorRetriever, _CDInteractionStore;
@protocol _DKKnowledgeQuerying;

@interface _PSRuleOverlapFeedback : NSObject
{
    BMBehaviorRetriever *_behaviorRetriever;
    _CDInteractionStore *_interactionStore;
    id <_DKKnowledgeQuerying> _knowledgeStore;
}

@property(retain, nonatomic) id <_DKKnowledgeQuerying> knowledgeStore; // @synthesize knowledgeStore=_knowledgeStore;
@property(retain, nonatomic) _CDInteractionStore *interactionStore; // @synthesize interactionStore=_interactionStore;
@property(readonly, nonatomic) BMBehaviorRetriever *behaviorRetriever; // @synthesize behaviorRetriever=_behaviorRetriever;
- (id)interactionStoreEventsSinceDate:(id)arg1;
- (id)sharesheetFeedbackEventsSinceDate:(id)arg1;
- (int)bucketedValue:(int)arg1;
- (id)subsetOfLoiItems:(id)arg1;
- (id)contextItemsFromEvent:(id)arg1;
- (id)constantFeaturesFromContextItems:(id)arg1;
- (_Bool)targetAppPredictedCorrectlyByRule:(id)arg1 bundleId:(id)arg2;
- (_Bool)recipientPredictedCorrectlyByRule:(id)arg1 interaction:(id)arg2 bundleId:(id)arg3;
- (id)feedbackPayloadForRule:(id)arg1 ForInteraction:(id)arg2 ForContextItems:(id)arg3 WithConstantFeatures:(id)arg4;
- (void)loggingForKnowledgeStoreEvent:(id)arg1 WithMatchingInteraction:(id)arg2;
- (id)matchFeedbackEvent:(id)arg1 WithInteractions:(id)arg2;
- (void)reviewLastDayOfShares;
- (id)init;

@end

