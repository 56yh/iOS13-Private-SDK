//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSuggestions/MapsSuggestionsBaseDeduper.h>

#import <MapsSuggestions/MapsSuggestionsDeduper-Protocol.h>

@class NSString;

@interface MapsSuggestionsAppConnectionDeduper : MapsSuggestionsBaseDeduper <MapsSuggestionsDeduper>
{
}

+ (_Bool)isEnabled;
- (_Bool)dedupeByEnrichingEntry:(id)arg1 withEntry:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSString *uniqueName;

@end

