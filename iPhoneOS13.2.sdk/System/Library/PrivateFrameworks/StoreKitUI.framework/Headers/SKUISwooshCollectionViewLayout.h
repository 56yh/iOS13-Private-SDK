//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface SKUISwooshCollectionViewLayout : UICollectionViewFlowLayout
{
    UIColor *_backgroundColor;
    _Bool _snapsToItemBoundaries;
    _Bool _snapsToItemCenters;
}

+ (Class)layoutAttributesClass;
+ (float)snapToBoundariesDecelerationRate;
@property(nonatomic) _Bool snapsToItemCenters; // @synthesize snapsToItemCenters=_snapsToItemCenters;
@property(nonatomic) _Bool snapsToItemBoundaries; // @synthesize snapsToItemBoundaries=_snapsToItemBoundaries;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (struct CGPoint)targetContentOffsetForProposedContentOffset:(struct CGPoint)arg1 withScrollingVelocity:(struct CGPoint)arg2;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)init;

@end

