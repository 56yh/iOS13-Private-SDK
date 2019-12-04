//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol MapsSuggestionsFlightRequester, MapsSuggestionsNetworkRequester;

@interface MapsSuggestionsFlightUpdater : NSObject
{
    id <MapsSuggestionsFlightRequester> _flightRequester;
    id <MapsSuggestionsNetworkRequester> _networkRequester;
    struct Queue _queue;
}

- (id).cxx_construct;
- (_Bool)updateFlightsForEntry:(id)arg1 handler:(id /* block */)arg2;
- (_Bool)_updateGateIfNeededForEntry:(id)arg1 handler:(id /* block */)arg2;
- (void)_updateFlightsForEntry:(id)arg1 handler:(id /* block */)arg2;
- (_Bool)_getGateMapItemForFlightEntry:(id)arg1 handler:(id /* block */)arg2;
- (_Bool)_getTerminalMapItemForFlightEntry:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithFlightRequester:(id)arg1 networkRequester:(id)arg2;

@end

