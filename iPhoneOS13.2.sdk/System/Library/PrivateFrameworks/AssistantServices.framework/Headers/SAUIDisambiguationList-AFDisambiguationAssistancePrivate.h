//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SAObjects/SAUIDisambiguationList.h>

#import <AssistantServices/AFDisambiguationAssistancePrivate-Protocol.h>

@class AFDisambiguationInfo, NSData;

@interface SAUIDisambiguationList (AFDisambiguationAssistancePrivate) <AFDisambiguationAssistancePrivate>
- (void)af_saveItemSelection:(id)arg1 forType:(long long)arg2;
- (id)af_assistedSelectionItem;
@property(retain, nonatomic, setter=af_setDisambiguationInfo:) AFDisambiguationInfo *af_disambiguationInfo;
- (id)af_itemForIndexIdentifier:(id)arg1;
- (id)af_indexIdentifierForItem:(id)arg1;
@property(readonly, nonatomic) NSData *af_disambiguationIdentifier;
@end

