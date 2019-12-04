//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchFoundation/SFSearchResult.h>

#import <SafariShared/WBSCompletionListItem-Protocol.h>

@class NSString, WBSQuerySuggestion;

@interface SFSearchResult (SafariSharedExtras) <WBSCompletionListItem>
+ (id)safari_sfSearchResultWithUniqueIdentifier;
@property(readonly, nonatomic) NSString *safari_loggingDescription;
- (id)_firstCardSectionOfClass:(Class)arg1 ofCard:(id)arg2 outIndex:(unsigned long long *)arg3;
- (unsigned long long)safari_indexOfFirstInlineCardSectionOfClass:(Class)arg1;
- (id)safari_firstInlineCardSectionOfClass:(Class)arg1;
- (id)safari_firstCardSectionOfClass:(Class)arg1;
@property(readonly, nonatomic) unsigned long long engagementDestination;
@property(readonly, nonatomic) long long parsecQueryID;
@property(readonly, nonatomic) SFSearchResult *sfSearchResultValue;
@property(readonly, nonatomic) NSString *parsecDomainIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly, nonatomic) NSString *lastSearchQuery;
@property(retain, nonatomic) WBSQuerySuggestion *siriSuggestion;
@property(readonly) Class superclass;
@end

