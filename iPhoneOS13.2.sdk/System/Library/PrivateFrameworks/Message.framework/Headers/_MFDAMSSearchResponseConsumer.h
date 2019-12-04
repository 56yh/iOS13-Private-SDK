//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Message/_MFDAMSBasicConsumer.h>

#import <Message/DASearchQueryConsumer-Protocol.h>

@class MFConditionLock, MFMailMessageStoreSearchResult, NSDate;

@interface _MFDAMSSearchResponseConsumer : _MFDAMSBasicConsumer <DASearchQueryConsumer>
{
    NSDate *latestDateToAdd;
    NSDate *earliestDateAdded;
    MFConditionLock *doneCondition;
    double timeReceivedLastResponse;
    unsigned int totalCount;
    MFMailMessageStoreSearchResult *searchResult;
}

@property(readonly, nonatomic) NSDate *earliestDateAdded; // @synthesize earliestDateAdded;
@property(readonly, nonatomic) MFMailMessageStoreSearchResult *searchResult; // @synthesize searchResult;
@property(retain, nonatomic) NSDate *latestDateToAdd; // @synthesize latestDateToAdd;
- (void)searchQuery:(id)arg1 returnedTotalCount:(id)arg2;
- (void)searchQuery:(id)arg1 finishedWithError:(id)arg2;
- (void)searchQuery:(id)arg1 returnedResults:(id)arg2;
- (_Bool)handleItems:(id)arg1;
- (void)resetDoneCondition;
- (void)waitUntilDone;
- (_Bool)waitUntilDoneBeforeDate:(id)arg1;
- (id)initWithMaximumSize:(unsigned int)arg1 latency:(double)arg2;

@end

