//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableDictionary;

@interface WFCollectionViewLeftAlignedLayout : UICollectionViewFlowLayout
{
    NSMutableDictionary *_frameCache;
    NSMutableDictionary *_sectionInsetCache;
}

@property(retain, nonatomic) NSMutableDictionary *sectionInsetCache; // @synthesize sectionInsetCache=_sectionInsetCache;
@property(retain, nonatomic) NSMutableDictionary *frameCache; // @synthesize frameCache=_frameCache;
- (void)invalidateLayout;
- (id)leftAlignedAttributesForAttribute:(id)arg1 sectionInset:(struct UIEdgeInsets)arg2;
- (struct UIEdgeInsets)sectionInsetForItemAtIndex:(long long)arg1;
- (double)minimumInteritemSpacingForSectionAtIndex:(long long)arg1;
- (id)layoutAttributesForItemAtIndexPath:(id)arg1;
- (id)layoutAttributesForElementsInRect:(struct CGRect)arg1;
- (id)init;

@end

