//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsPreloadableSource-Protocol.h>

@class EKCalendarVisibilityManager, EKEventStore, MapsSuggestionsCanKicker, MapsSuggestionsNetworkRequester, NSMutableDictionary, NSObject, NSSet, NSString;
@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsCalendarSource : MapsSuggestionsBaseSource <MapsSuggestionsPreloadableSource>
{
    _Bool _suspended;
    EKEventStore *_eventStore;
    EKCalendarVisibilityManager *_calVisibilityManager;
    NSObject<OS_dispatch_queue> *_fimQueue;
    NSMutableDictionary *_handleToGEOMapItemMapping;
    NSString *_siriFoundThisString;
    MapsSuggestionsNetworkRequester *_requester;
    NSSet *_setOfEventReservationSubtypes;
    MapsSuggestionsCanKicker *_changedNotificationCanKicker;
}

+ (unsigned long long)disposition;
+ (_Bool)isEnabled;
@property(retain, nonatomic) MapsSuggestionsCanKicker *changedNotificationCanKicker; // @synthesize changedNotificationCanKicker=_changedNotificationCanKicker;
@property(retain, nonatomic) NSSet *setOfEventReservationSubtypes; // @synthesize setOfEventReservationSubtypes=_setOfEventReservationSubtypes;
@property(retain, nonatomic) MapsSuggestionsNetworkRequester *requester; // @synthesize requester=_requester;
@property(retain, nonatomic) NSString *siriFoundThisString; // @synthesize siriFoundThisString=_siriFoundThisString;
@property(retain, nonatomic) NSMutableDictionary *handleToGEOMapItemMapping; // @synthesize handleToGEOMapItemMapping=_handleToGEOMapItemMapping;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *fimQueue; // @synthesize fimQueue=_fimQueue;
@property(retain, nonatomic) EKCalendarVisibilityManager *calVisibilityManager; // @synthesize calVisibilityManager=_calVisibilityManager;
@property(retain, nonatomic) EKEventStore *eventStore; // @synthesize eventStore=_eventStore;
@property _Bool suspended; // @synthesize suspended=_suspended;
- (void)dealloc;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (id)_predicateForPeriod:(struct NSDateInterval *)arg1;
- (long long)_entryTypeFromSchema:(id)arg1;
- (_Bool)_addRestaurantReservationFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (_Bool)_addCalendarEventFieldsToEntry:(id)arg1 event:(id)arg2;
- (_Bool)_addTicketedEventFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (_Bool)_addCarRentalFieldsToEntry:(id)arg1 event:(id)arg2;
- (_Bool)_addHotelFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (_Bool)_addTravelFlightFieldsToEntry:(id)arg1 fromSchemaOrgDictionary:(id)arg2 event:(id)arg3;
- (_Bool)_createEntriesWithinPeriod:(struct NSDateInterval *)arg1 location:(id)arg2 handler:(id /* block */)arg3;
- (_Bool)suggestionsEntriesAtLocation:(id)arg1 period:(struct NSDateInterval *)arg2 handler:(id /* block */)arg3;
- (double)updateSuggestionEntries;
- (void)stop;
- (void)_callUpdateSuggestionEntries;
- (void)start;
- (void)eventStoreDidChange:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

