//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "UIView.h"

@class UIBezierPath, _UIPlatterShadowView;

__attribute__((visibility("hidden")))
@interface _UIPlatterSoftShadowView : UIView
{
    BOOL _needsPunchOut;
    UIBezierPath *_shadowPath;
    UIView *_backgroundView;
    _UIPlatterShadowView *_diffuseShadowView;
    _UIPlatterShadowView *_rimShadowView;
}

@property(readonly, nonatomic) _UIPlatterShadowView *rimShadowView; // @synthesize rimShadowView=_rimShadowView;
@property(readonly, nonatomic) _UIPlatterShadowView *diffuseShadowView; // @synthesize diffuseShadowView=_diffuseShadowView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) BOOL needsPunchOut; // @synthesize needsPunchOut=_needsPunchOut;
@property(copy, nonatomic) UIBezierPath *shadowPath; // @synthesize shadowPath=_shadowPath;
// - (void).cxx_destruct;
- (void)_updateForShadowPath;
- (id)initWithFrame:(CGRect)arg1 shadowPath:(id)arg2;

@end
