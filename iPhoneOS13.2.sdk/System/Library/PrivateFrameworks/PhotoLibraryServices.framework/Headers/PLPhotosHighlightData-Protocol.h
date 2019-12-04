//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoLibraryServices/PLHighlightItem-Protocol.h>
#import <PhotoLibraryServices/PLMomentRefreshable-Protocol.h>

@class NSArray, NSDate, NSObject, NSSet, NSString;
@protocol NSCopying, PLMomentAssetData, PLPhotosHighlightData;

@protocol PLPhotosHighlightData <PLMomentRefreshable, PLHighlightItem>
+ (NSArray *)sortByTimeSortDescriptors;
@property(retain, nonatomic) NSSet *dayGroupSummaryAssets;
@property(retain, nonatomic) NSSet *dayGroupExtendedAssets;
@property(retain, nonatomic) NSSet *dayGroupAssets;
@property(retain, nonatomic) NSSet *extendedAssets;
@property(retain, nonatomic) NSSet *summaryAssets;
@property(retain, nonatomic) NSSet *assets;
@property(retain, nonatomic) id <PLMomentAssetData> monthFirstAsset;
@property(retain, nonatomic) id <PLMomentAssetData> keyAssetForKind;
@property(readonly, retain, nonatomic) NSArray *momentsSortedByTime;
@property(retain, nonatomic) NSSet *moments;
@property(readonly, retain, nonatomic) NSObject<NSCopying> *uniqueObjectID;
@property(retain, nonatomic) NSSet *childDayGroupPhotosHighlights;
@property(retain, nonatomic) NSSet *childPhotosHighlights;
@property(retain, nonatomic) id <PLPhotosHighlightData> parentDayGroupPhotosHighlight;
@property(retain, nonatomic) id <PLPhotosHighlightData> parentPhotosHighlight;
@property(nonatomic) unsigned short enrichmentState;
@property(nonatomic) unsigned short visibilityState;
@property(nonatomic) unsigned short category;
@property(nonatomic) unsigned short kind;
@property(nonatomic) unsigned short type;
@property(nonatomic) double promotionScore;
@property(nonatomic) _Bool isCurated;
@property(nonatomic) int endTimeZoneOffset;
@property(nonatomic) int startTimeZoneOffset;
@property(readonly, retain, nonatomic) NSDate *localEndDate;
@property(readonly, retain, nonatomic) NSDate *localStartDate;
@property(retain, nonatomic) NSDate *startDate;
@property(retain, nonatomic) NSDate *endDate;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
@property(retain, nonatomic) NSString *uuid;
- (void)removeAssetData:(id <PLMomentAssetData>)arg1;
- (void)bumpHighlightVersion;
- (void)refreshAssets;
- (void)delete;
- (_Bool)isDeleted;
@end

