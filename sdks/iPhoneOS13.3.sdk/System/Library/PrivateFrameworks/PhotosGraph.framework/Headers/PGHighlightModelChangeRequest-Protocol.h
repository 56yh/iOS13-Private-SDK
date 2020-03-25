//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSArray, NSString, PHAsset, PHPhotoLibrary;
@protocol NSFastEnumeration;

@protocol PGHighlightModelChangeRequest <NSObject>
@property(nonatomic) unsigned short enrichmentState;
@property(nonatomic) NSUInteger mood;
@property(nonatomic) double promotionScore;
@property(retain, nonatomic) NSString *verboseSmartDescription;
@property(retain, nonatomic) NSString *smartDescription;
@property(retain, nonatomic) NSString *dateDescription;
- (void)didEnrichHighlight;
- (void)enumerateMomentChangeRequestsForUUIDs:(NSArray *)arg1 inPhotoLibrary:(PHPhotoLibrary *)arg2 usingBlock:(void (^)(id <PGHighlightModelMomentChangeRequest>, NSString *, BOOL ))arg3;
- (void)clearCurations;
- (void)setAssets:(id <NSFastEnumeration>)arg1 forCurationType:(unsigned short)arg2;
- (void)setKeyAsset:(PHAsset *)arg1;
@end
