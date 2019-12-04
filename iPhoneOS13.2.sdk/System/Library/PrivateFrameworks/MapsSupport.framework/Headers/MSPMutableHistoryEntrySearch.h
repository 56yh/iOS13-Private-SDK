//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapsSupport/MSPMutableHistoryEntry.h>

#import <MapsSupport/MSPHistoryEntrySearch-Protocol.h>

@class GEOMapRegion, NSDate, NSString;

@interface MSPMutableHistoryEntrySearch : MSPMutableHistoryEntry <MSPHistoryEntrySearch>
{
}

+ (id)mutableObjectProtocol;
+ (Class)mutableObjectClass;
+ (id)immutableObjectProtocol;
+ (Class)immutableObjectClass;
- (_Bool)_isUserVisibleDuplicateOfSameClassObject:(id)arg1;
- (id)transferToImmutableIfValidWithError:(out id *)arg1;
@property(copy, nonatomic) GEOMapRegion *mapRegion;
@property(copy, nonatomic) NSString *languageCode;
@property(copy, nonatomic) NSString *locationDisplayString;
@property(copy, nonatomic) NSString *query;
- (id)initWithStorage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool tracksRAPReportingOnly;
@property(readonly, copy, nonatomic) NSDate *usageDate;

@end

