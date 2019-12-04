//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class FPSpotlightCollector, NSArray, NSError, NSPredicate;

@protocol FPSpotlightCollectorObserving 
- (unsigned long long)maximumNumberOfItemsForCollector:(FPSpotlightCollector *)arg1;
- (NSPredicate *)itemPredicateForCollector:(FPSpotlightCollector *)arg1;
- (void)collector:(FPSpotlightCollector *)arg1 didUpdateItemsOrigin:(unsigned long long)arg2;
- (void)collector:(FPSpotlightCollector *)arg1 didEncounterError:(NSError *)arg2;
- (void)collector:(FPSpotlightCollector *)arg1 didRemoveItemIDs:(NSArray *)arg2;
- (void)collector:(FPSpotlightCollector *)arg1 didUpdateItems:(NSArray *)arg2;
- (void)collector:(FPSpotlightCollector *)arg1 didGatherItems:(NSArray *)arg2;
@end

