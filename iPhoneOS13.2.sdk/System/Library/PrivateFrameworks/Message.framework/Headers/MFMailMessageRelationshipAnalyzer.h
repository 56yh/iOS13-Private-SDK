//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MFMailMessageRelationshipAnalyzer : NSObject
{
    NSArray *_messages;
    NSArray *_relationships;
}

+ (_Bool)isMessage:(id)arg1 sentByAddress:(id)arg2;
+ (id)myEmailAddresses;
+ (_Bool)isMessage:(id)arg1 forwardOfMessage:(id)arg2 myEmailAddresses:(id)arg3;
+ (_Bool)isMessageDraft:(id)arg1;
+ (id)recipientsOfMessage:(id)arg1;
+ (_Bool)isMessage:(id)arg1 addressedToMailingListForMessage:(id)arg2;
+ (_Bool)isMessage:(id)arg1 addressedToPreviousSender:(id)arg2;
+ (_Bool)isMessage:(id)arg1 responseToMessage:(id)arg2 previousSenders:(id)arg3 myEmailAddresses:(id)arg4;
+ (unsigned long long)relationOfMessage:(id)arg1 toMessage:(id)arg2 previousSenders:(id)arg3 myEmailAddresses:(id)arg4;
+ (unsigned long long)relationOfMessage:(id)arg1 toMessage:(id)arg2;
+ (id)sendersOfMessage:(id)arg1;
+ (id)analyzeMessages:(id)arg1 myEmailAddresses:(id)arg2;
+ (id)analysisOfConversation:(id)arg1;
- (unsigned long long)relationOfMessage:(id)arg1;
- (id)initWithMessages:(id)arg1 relationships:(id)arg2;

@end

