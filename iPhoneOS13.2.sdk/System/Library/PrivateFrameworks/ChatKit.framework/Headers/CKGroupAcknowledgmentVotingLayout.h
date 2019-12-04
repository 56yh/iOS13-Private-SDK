//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewLayout.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface CKGroupAcknowledgmentVotingLayout : UICollectionViewLayout
{
    _Bool _isAnimatedLayoutChange;
    unsigned long long _layoutMode;
    long long _expandedSection;
    NSArray *_ballotItems;
    NSArray *_fromBallotItems;
    struct CGPoint _previousCollapsedContentOffset;
    struct CGSize _fromContentSize;
    struct CGPoint _fromContentOffset;
}

@property(nonatomic) struct CGPoint fromContentOffset; // @synthesize fromContentOffset=_fromContentOffset;
@property(nonatomic) struct CGSize fromContentSize; // @synthesize fromContentSize=_fromContentSize;
@property(retain, nonatomic) NSArray *fromBallotItems; // @synthesize fromBallotItems=_fromBallotItems;
@property(nonatomic) _Bool isAnimatedLayoutChange; // @synthesize isAnimatedLayoutChange=_isAnimatedLayoutChange;
@property(copy, nonatomic) NSArray *ballotItems; // @synthesize ballotItems=_ballotItems;
@property(nonatomic) struct CGPoint previousCollapsedContentOffset; // @synthesize previousCollapsedContentOffset=_previousCollapsedContentOffset;
@property(nonatomic) long long expandedSection; // @synthesize expandedSection=_expandedSection;
@property(nonatomic) unsigned long long layoutMode; // @synthesize layoutMode=_layoutMode;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)finalLayoutAttributesForDisappearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)arg1 atIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (void)finalizeAnimatedBoundsChange;
- (void)prepareLayout;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1;
- (void)_setupExpandedLayout;
- (void)_setupAnimatedCollapsedLayout;
- (void)_setupCollapsedLayout;
- (void)_initializeBallotItems;
- (struct CGSize)collectionViewContentSize;
- (double)_totalBallotContainersWidth;
- (_Bool)_shouldFillInFromCenter;
- (long long)_numberOfBallots;
- (void)cleanupAnimationCache;
- (void)preapareForLayoutAnimationAroundSection:(long long)arg1;
- (id)init;

@end

