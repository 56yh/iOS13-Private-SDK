//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsAutocomplete/CNAutocompleteResult.h>

@class NSDate;

@interface CNAutocompleteRecentResult : CNAutocompleteResult
{
    NSDate *_date;
    _Bool _matchesSendingAddress;
    _Bool _completesChosenGroup;
}

+ (id)comparators;
+ (id)groupResultWithDisplayName:(id)arg1 date:(id)arg2;
+ (id)contactResultWithDisplayName:(id)arg1 value:(id)arg2 lastSendingAddress:(id)arg3 date:(id)arg4;
@property _Bool completesChosenGroup; // @synthesize completesChosenGroup=_completesChosenGroup;
@property _Bool matchesSendingAddress; // @synthesize matchesSendingAddress=_matchesSendingAddress;
@property(readonly) NSDate *date; // @synthesize date=_date;

@end

