//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UICollectionView, UICollectionViewLayoutAttributes;

@interface UICollectionReusableView : UIView
{
    UICollectionViewLayoutAttributes *_layoutAttributes;
    UICollectionView *_collectionView;
    long long _updateAnimationCount;
    _Bool _shouldConstrainWidth;
    _Bool _shouldConstrainHeight;
    struct {
        unsigned int wasDequeued:1;
        unsigned int preferredAttributesValid:1;
        unsigned int generatingPreferredAttributes:1;
        unsigned int didSetMaskedCorners:1;
        unsigned int isBeingReused:1;
    } _reusableViewFlags;
    _Bool _preferredAttributesValid;
    NSString *_reuseIdentifier;
}

@property(nonatomic, getter=_arePreferredAttributesValid) _Bool preferredAttributesValid; // @synthesize preferredAttributesValid=_preferredAttributesValid;
@property(copy, nonatomic, setter=_setReuseIdentifier:) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
@property(nonatomic, getter=_shouldConstrainHeight, setter=_setShouldConstrainHeight:) _Bool shouldConstrainHeight;
@property(nonatomic, getter=_shouldConstrainWidth, setter=_setShouldConstrainWidth:) _Bool shouldConstrainWidth;
- (void)setEditing:(_Bool)arg1;
- (_Bool)isEditing;
- (_Bool)canBeEdited;
- (void)_invalidatePreferredAttributes;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (id)_preferredLayoutAttributesFittingAttributes:(id)arg1;
@property(nonatomic, getter=_isBeingReused, setter=_setIsBeingReused:) _Bool isBeingReused;
- (_Bool)_disableRasterizeInAnimations;
- (_Bool)_wasDequeued;
- (void)_markAsDequeued;
- (void)_clearUpdateAnimation;
- (void)_addUpdateAnimation;
@property(readonly, nonatomic, getter=_isInUpdateAnimation) _Bool inUpdateAnimation;
@property(nonatomic, getter=_collectionView, setter=_setCollectionView:) __weak UICollectionView *collectionView;
@property(copy, nonatomic, getter=_layoutAttributes, setter=_setLayoutAttributes:) UICollectionViewLayoutAttributes *layoutAttributes;
- (struct UIEdgeInsets)_concreteDefaultLayoutMargins;
- (void)_setBaseLayoutAttributes:(id)arg1;
- (void)didTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)willTransitionFromLayout:(id)arg1 toLayout:(id)arg2;
- (void)applyLayoutAttributes:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

