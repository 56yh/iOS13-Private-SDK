//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <TeaUI/TUBarCompressionAnimating-Protocol.h>

@class TUAnimationFloatFunction, UINavigationBar, UIView;

@interface TUNavigationBarDefaultCompressionAnimation : NSObject <TUBarCompressionAnimating>
{
    _Bool shouldCompressAtTop;
    _Bool _hideTitleOnTop;
    _Bool _compressTitleView;
    double topOffset;
    UIView *_titleView;
    UINavigationBar *_navigationBar;
    TUAnimationFloatFunction *_opacityFunction;
    TUAnimationFloatFunction *_scaleFunction;
    TUAnimationFloatFunction *_translateFunction;
}

@property(nonatomic) _Bool compressTitleView; // @synthesize compressTitleView=_compressTitleView;
@property(retain, nonatomic) TUAnimationFloatFunction *translateFunction; // @synthesize translateFunction=_translateFunction;
@property(retain, nonatomic) TUAnimationFloatFunction *scaleFunction; // @synthesize scaleFunction=_scaleFunction;
@property(retain, nonatomic) TUAnimationFloatFunction *opacityFunction; // @synthesize opacityFunction=_opacityFunction;
@property(readonly, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) _Bool hideTitleOnTop; // @synthesize hideTitleOnTop=_hideTitleOnTop;
@property(nonatomic) double topOffset; // @synthesize topOffset;
- (id)fetchRegularTitleView;
- (id)fetchCustomTitleView;
- (void)reloadWithTraitCollection:(id)arg1;
@property(readonly, nonatomic) _Bool shouldCompressAtTop; // @synthesize shouldCompressAtTop;
- (void)scrollViewIsAtTop:(_Bool)arg1;
- (_Bool)animationShouldBeginForScrollView:(id)arg1 currentlyFullyCompressed:(_Bool)arg2;
- (double)minimumBarHeightForTraitCollection:(id)arg1;
- (double)maximumBarHeightForTraitCollection:(id)arg1;
- (void)updateWithPercentage:(double)arg1;
- (id)initWithNavigationBar:(id)arg1;

@end

