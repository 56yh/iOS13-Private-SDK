//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardFoundation/SBFTouchPassThroughView.h>

@class SBIconImageView, UIView;

@interface SBIconImageCrossfadeView : SBFTouchPassThroughView
{
    UIView *_containerView;
    UIView *_crossfadeContainerView;
    SBIconImageView *_iconImageView;
    UIView *_crossfadeView;
    double _containerScaleX;
    double _containerScaleY;
    double _morphFraction;
    _Bool _masksCorners;
    _Bool _performsTrueCrossfade;
    struct CGPoint _stretchAnchorPoint;
}

@property(readonly, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(nonatomic) struct CGPoint stretchAnchorPoint; // @synthesize stretchAnchorPoint=_stretchAnchorPoint;
@property(nonatomic) _Bool performsTrueCrossfade; // @synthesize performsTrueCrossfade=_performsTrueCrossfade;
@property(nonatomic) _Bool masksCorners; // @synthesize masksCorners=_masksCorners;
@property(readonly, nonatomic) UIView *crossfadeView;
@property(readonly, nonatomic) SBIconImageView *iconImageView;
- (void)applyCornerRadius:(double)arg1;
- (void)setCornerRadiusEnabled:(_Bool)arg1;
- (void)_updateCornerMask;
- (void)cleanup;
- (void)setMorphFraction:(double)arg1;
- (void)setAppSnapshotCornerRadius:(double)arg1;
- (void)setCrossfadeFraction:(double)arg1;
- (void)layoutSubviews;
- (void)prepareGeometry;
- (id)initWithImageView:(id)arg1 crossfadeView:(id)arg2;

@end

