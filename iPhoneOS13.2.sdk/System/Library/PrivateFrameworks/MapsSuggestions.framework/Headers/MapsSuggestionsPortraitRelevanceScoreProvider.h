//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <MapsSuggestions/MapsSuggestionsRelevanceScoreProvider-Protocol.h>

@class NSDate, NSLocale, NSMutableArray, NSString;

@interface MapsSuggestionsPortraitRelevanceScoreProvider : NSObject <MapsSuggestionsRelevanceScoreProvider>
{
    NSDate *_fetchEntriesFromDate;
    NSMutableArray *_portraitStrings;
    struct Queue _queue;
    NSLocale *_currentLocale;
    NSString *_languageCode;
    NSString *_currentCountryCode;
}

- (id).cxx_construct;
- (void)_fetchStringsFromPortrait;
- (_Bool)_searchForName:(id)arg1;
- (void)preLoad;
- (_Bool)relevanceScoreForNames:(id)arg1 addresses:(id)arg2 mapItems:(id)arg3 completion:(id /* block */)arg4;
- (id)init;
@property(readonly, nonatomic) NSString *uniqueName;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

