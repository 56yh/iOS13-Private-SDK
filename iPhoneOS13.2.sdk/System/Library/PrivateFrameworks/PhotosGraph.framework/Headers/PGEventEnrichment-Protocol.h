//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//



@class NSArray, NSSet, NSString, PGGraphPersonNode, PHAssetCollection;

@protocol PGEventEnrichment 
@property(readonly) _Bool isAggregation;
@property(readonly) _Bool isTrip;
@property(readonly) _Bool isShortTrip;
@property(readonly) _Bool isLongTrip;
@property(readonly, nonatomic) NSString *uuid;
- (PHAssetCollection *)fetchAssetCollection;
- (PGGraphPersonNode *)anniversaryPersonNode;
- (PGGraphPersonNode *)birthdayPersonNode;
- (NSArray *)sortedMomentNodes;
- (NSSet *)momentNodes;
- (NSSet *)reliableMeaningLabels;
- (NSSet *)meaningLabels;
@end

