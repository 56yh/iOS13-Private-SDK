//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ICInAppMessageMetadataEntry, NSArray, NSDictionary;
@protocol IAMApplicationContextProvider;

@interface IAMEvaluator : NSObject
{
    ICInAppMessageMetadataEntry *_currentMetadata;
    ICInAppMessageMetadataEntry *_currentProximityMetadata;
    NSArray *_messageEntries;
    NSDictionary *_metadataEntries;
    id <IAMApplicationContextProvider> _applicationContext;
    NSArray *_passingMessageEntries;
    NSArray *_messagesCloseToPassing;
}

+ (long long)_compareCurrentTimeWithMessageTime:(double)arg1;
+ (_Bool)_isMessageWithinDateRange:(id)arg1;
+ (_Bool)applicationContext:(id)arg1 allowsPresentationForPolicyGroup:(long long)arg2;
@property(retain) NSArray *messagesCloseToPassing; // @synthesize messagesCloseToPassing=_messagesCloseToPassing;
@property(retain) NSArray *passingMessageEntries; // @synthesize passingMessageEntries=_passingMessageEntries;
- (unsigned long long)_calculateConditionProximity:(id)arg1;
- (unsigned long long)_calculateCompoundRuleProximity:(id)arg1;
- (unsigned long long)_calculateRuleProximity:(id)arg1;
- (unsigned long long)_messageEntryProximity:(id)arg1;
- (_Bool)_evaluateCondition:(id)arg1;
- (_Bool)_evaluateCompoundRule:(id)arg1;
- (_Bool)_evaluateRule:(id)arg1;
- (id)computeMessagesCloseToPassingWithProximityThreshold:(unsigned long long)arg1;
- (id)computePassingMessageEntries;
- (id)initWithMessageEntries:(id)arg1 metadataEntries:(id)arg2 applicationContext:(id)arg3;

@end

