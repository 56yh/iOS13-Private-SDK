//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseSource.h>

#import <MapsSuggestions/MapsSuggestionsSource-Protocol.h>

@class MSPFavoritesContainer, MSPHistoryContainer, MapsSuggestionsCanKicker, NSObject, NSString;
@protocol MapsSuggestionsSourceDelegate, OS_dispatch_queue;

@interface MapsSuggestionsMSPSource : MapsSuggestionsBaseSource <MapsSuggestionsSource>
{
    NSObject<OS_dispatch_queue> *_queue;
    _Bool _notificationsRegistered;
    MapsSuggestionsCanKicker *_canKickerHistoryNotification;
    MapsSuggestionsCanKicker *_canKickerFavoriteNotification;
    MSPHistoryContainer *_historyContainer;
    MSPFavoritesContainer *_favoritesContainer;
    struct NSMutableArray *_recentsEntriesToAdd;
    struct NSMutableArray *_favoritesEntriesToAdd;
    int _notificationTokenForRecentHistory;
    int _notificationTokenForFavorites;
    _Bool _favoritesEnabled;
}

+ (unsigned long long)disposition;
+ (_Bool)isEnabled;
- (id)_extractTitleAndSubtitleFromMapItem:(struct GEOMapItemStorage *)arg1;
- (_Bool)_addFieldsToSuggestionsEntry:(id)arg1;
- (struct NSArray *)_mergeRecentsAndFavoritesList;
- (void)_unregisterNotification;
- (void)_registerNotification;
- (id)_createEntryFromFavoritePlace:(id)arg1;
- (id)_createEntryFromRecentHistoryPlaceDisplay:(id)arg1;
- (id)_createEntryFromRecentHistoryRoute:(id)arg1;
- (void)_updateFavoritesEntries;
- (void)_updateRecentHistoryEntries;
- (_Bool)_removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (_Bool)removeEntry:(id)arg1 behavior:(long long)arg2 handler:(id /* block */)arg3;
- (_Bool)canProduceEntriesOfType:(long long)arg1;
- (double)updateSuggestionEntries;
- (void)dealloc;
- (void)stop;
- (void)start;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <MapsSuggestionsSourceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

