//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIBezierPath, UIColor, _UIShapeView;

__attribute__((visibility("hidden")))
@interface _UIPlatterShadowView : UIView
{
    _Bool _punchOut;
    _UIShapeView *_shadowMaskView;
}

@property(readonly, nonatomic) _UIShapeView *shadowMaskView; // @synthesize shadowMaskView=_shadowMaskView;
@property(nonatomic) _Bool punchOut; // @synthesize punchOut=_punchOut;
@property(retain, nonatomic) UIBezierPath *shadowPath;
@property(nonatomic) struct CGSize shadowOffset;
@property(nonatomic) double shadowOpacity;
@property(nonatomic) double shadowRadius;
@property(retain, nonatomic) UIColor *shadowColor;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)initWithShadowPath:(id)arg1;

@end

