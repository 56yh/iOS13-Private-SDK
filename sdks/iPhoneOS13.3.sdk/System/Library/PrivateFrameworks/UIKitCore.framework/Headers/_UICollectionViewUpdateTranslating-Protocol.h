//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class NSIndexPath, NSString;

@protocol _UICollectionViewUpdateTranslating <NSObject>
- (long long)finalSectionCount;
- (long long)initialSectionCount;
- (NSRange)finalSectionGlobalItemRangeForSection:(long long)arg1;
- (NSRange)initalSectionGlobalItemRangeForSection:(long long)arg1;
- (NSIndexPath *)initialIndexPathForSupplementaryElementOfKind:(NSString *)arg1 forFinalIndexPath:(NSIndexPath *)arg2;
- (NSIndexPath *)finalIndexPathForSupplementaryElementOfKind:(NSString *)arg1 forInitialIndexPath:(NSIndexPath *)arg2;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (NSIndexPath *)initialIndexPathForFinalIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)finalIndexPathForInitialIndexPath:(NSIndexPath *)arg1;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;
@end

