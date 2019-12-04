//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMSharedUtilities/CNChangeHistoryEventVisitor-Protocol.h>

@class NSMutableDictionary, NSString;

@interface IMDContactStoreChangeHistoryEventsHandler : NSObject <CNChangeHistoryEventVisitor>
{
    NSMutableDictionary *_aliasToCNIDMap;
    NSMutableDictionary *_CNIDToAliasesMap;
}

@property(retain, nonatomic) NSMutableDictionary *CNIDToAliasesMap; // @synthesize CNIDToAliasesMap=_CNIDToAliasesMap;
@property(retain, nonatomic) NSMutableDictionary *aliasToCNIDMap; // @synthesize aliasToCNIDMap=_aliasToCNIDMap;
- (id)matchAliasesFromCacheForCNContact:(id)arg1;
- (void)handleAddOrUpdateEventForCNContact:(id)arg1;
- (void)visitDeleteContactEvent:(id)arg1;
- (void)visitUpdateContactEvent:(id)arg1;
- (void)visitAddContactEvent:(id)arg1;
- (void)visitDropEverythingEvent:(id)arg1;
- (id)generateCNIDToAliasesMapFrom:(id)arg1;
- (id)getAliasToCNIDMap;
- (id)initWithAliasToCNIDMap:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

