//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;

@interface NCNotificationDestinationsRegistry : NSObject
{
    NSMutableDictionary _destinations;
    NSMutableDictionary _activeDestinations;
    NSMutableDictionary _readyDestinations;
}

@property(retain, nonatomic) NSMutableDictionary *readyDestinations; // @synthesize readyDestinations=_readyDestinations;
@property(retain, nonatomic) NSMutableDictionary *activeDestinations; // @synthesize activeDestinations=_activeDestinations;
@property(retain, nonatomic) NSMutableDictionary *destinations; // @synthesize destinations=_destinations;
// - (void).cxx_destruct;
- (id)_destinationsForRequestDestinations:(id)arg1 inDestinationDict:(NSMutableDictionary )arg2;
- (id)readyDestinationsForRequestDestinations:(id)arg1;
- (void)setDestination:(id)arg1 ready:(BOOL)arg2;
@property(readonly, nonatomic) NSUInteger count;
@property(readonly, nonatomic) NSArray *registeredDestinations;
- (void)setDestinationWithIdentifier:(id)arg1 enabled:(BOOL)arg2;
- (void)setDestination:(id)arg1 enabled:(BOOL)arg2;
- (id)destinationsForRequestDestinations:(id)arg1;
- (id)destinationIdentifiersForRequestDestinations:(id)arg1;
- (BOOL)hasActiveDestinationsForRequest:(id)arg1;
- (void)unregisterDestinationForIdentifier:(id)arg1;
- (void)unregisterDestination:(id)arg1;
- (BOOL)isRegisteredDestination:(id)arg1;
- (void)registerDestination:(id)arg1 forIdentifier:(id)arg2;
- (void)registerDestination:(id)arg1;
- (id)init;

@end

