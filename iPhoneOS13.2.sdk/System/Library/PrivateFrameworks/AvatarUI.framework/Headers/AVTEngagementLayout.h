//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AvatarUI/AVTCollectionViewLayout-Protocol.h>

@interface AVTEngagementLayout : NSObject <AVTCollectionViewLayout>
{
    id /* block */ _interItemSpacingProvider;
    struct CGSize _defaultCellSize;
    struct CGSize _engagedCellSize;
    struct UIEdgeInsets _engagementBoundsInsets;
}

+ (struct UIEdgeInsets)insetsToCenterFirstAndLastItemsGivenContainerSize:(struct CGSize)arg1 itemSize:(struct CGSize)arg2;
+ (double)minimumInterItemSpacingForVisibileBoundsSize:(struct CGSize)arg1 defaultCellSize:(struct CGSize)arg2 engagedCellSize:(struct CGSize)arg3;
@property(readonly, copy, nonatomic) id /* block */ interItemSpacingProvider; // @synthesize interItemSpacingProvider=_interItemSpacingProvider;
@property(nonatomic) struct UIEdgeInsets engagementBoundsInsets; // @synthesize engagementBoundsInsets=_engagementBoundsInsets;
@property(readonly, nonatomic) struct CGSize engagedCellSize; // @synthesize engagedCellSize=_engagedCellSize;
@property(readonly, nonatomic) struct CGSize defaultCellSize; // @synthesize defaultCellSize=_defaultCellSize;
- (struct CGRect)finalFrameForDisappearingElementAtOriginForVisibleBounds:(struct CGRect)arg1;
- (struct CGRect)initialFrameForAppearingElementAtOriginForVisibleBounds:(struct CGRect)arg1;
- (struct CGRect)frameForElementBeforeOriginForVisibleBounds:(struct CGRect)arg1;
- (struct CGSize)contentSizeForVisibleBounds:(struct CGRect)arg1 numberOfItems:(long long)arg2;
- (struct CGPoint)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(struct CGSize)arg2 proposedOrigin:(struct CGPoint)arg3;
- (id)indexesForElementsInRect:(struct CGRect)arg1 visibleBounds:(struct CGRect)arg2 numberOfItems:(long long)arg3;
- (double)interitemSpacingForEngagement:(double)arg1;
- (struct CGSize)cellSizeForEngagement:(double)arg1;
- (double)engagementForValue:(double)arg1 withRangeMin:(double)arg2 rangeMax:(double)arg3 rangePeakBegin:(double)arg4 rangePeakEnd:(double)arg5;
- (double)engagementForValue:(double)arg1 withRangeMin:(double)arg2 rangeMax:(double)arg3 rangePeak:(double)arg4;
- (double)spacingBeforElementStartingAt:(double)arg1 engagementBounds:(struct CGRect)arg2;
- (struct CGRect)frameForElementBeforeElementStartingAt:(double)arg1 engagementBounds:(struct CGRect)arg2 verticalBounds:(CDStruct_c3b9c2ee)arg3;
- (double)spacingAfterElementEndingAt:(double)arg1 engagementBounds:(struct CGRect)arg2;
- (struct CGRect)frameForElementAfterElementEndingAt:(double)arg1 engagementBounds:(struct CGRect)arg2 verticalBounds:(CDStruct_c3b9c2ee)arg3;
- (struct CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect)arg2 engagementBounds:(struct CGRect)arg3 verticalBounds:(CDStruct_c3b9c2ee)arg4;
- (struct CGRect)frameForElementAtIndex:(long long)arg1 visibleBounds:(struct CGRect)arg2;
- (double)contentTrailingXForVisibleSize:(struct CGSize)arg1;
- (double)contentOriginXForVisibleSize:(struct CGSize)arg1;
- (double)xAxisScale;
- (struct CGSize)engagementSizeForVisibleBoundsSize:(struct CGSize)arg1;
- (struct CGRect)engagementBoundsForContainerBounds:(struct CGRect)arg1;
- (id)initWithDefaultCellSize:(struct CGSize)arg1 engagedCellSize:(struct CGSize)arg2 interItemSpacingProvider:(id /* block */)arg3;
- (id)initWithDefaultCellSize:(struct CGSize)arg1 engagedCellSize:(struct CGSize)arg2 baseInteritemSpacing:(double)arg3;

@end

