//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/_UIShadowView.h>

__attribute__((visibility("hidden")))
@interface _UIRoundedRectShadowView : _UIShadowView
{
    struct UIEdgeInsets _shadowOutsets;
    double _maskCornerRadius;
}

+ (struct UIEdgeInsets)_expansionInsetForShadowImage;
+ (_Bool)_shouldCutoutShadow;
@property(readonly, nonatomic) double maskCornerRadius; // @synthesize maskCornerRadius=_maskCornerRadius;
- (void)_loadImageIfNecessary;
- (void)_updateShadowOutsetsIfNecessary;
- (void)layoutSubviews;
- (struct CGRect)frameWithContentWithFrame:(struct CGRect)arg1;
- (id)initWithCornerRadius:(double)arg1;

@end

