//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKUtilityComplicationView.h>

#import <NanoTimeKitCompanion/CLKMonochromeComplicationView-Protocol.h>
#import <NanoTimeKitCompanion/CLKMonochromeFilterProvider-Protocol.h>

@class NSString, NTKColoringLabel, NTKCurvedColoringLabel, UIImageView, UIView;
@protocol CLKMonochromeFilterProvider, NTKComplicationImageView, NTKUtilityFlatComplicationViewDelegate;

@interface NTKUtilityFlatComplicationView : NTKUtilityComplicationView <CLKMonochromeFilterProvider, CLKMonochromeComplicationView>
{
    UIView<NTKComplicationImageView> *_imageView;
    NTKColoringLabel *_label;
    NTKCurvedColoringLabel *_curvedLabel;
    UIImageView *_curvedHighlightView;
    NTKColoringLabel *_activeLabel;
    id <CLKMonochromeFilterProvider> _filterProvider;
    id <NTKUtilityFlatComplicationViewDelegate> _delegate;
    double _textWidthInRadians;
}

+ (void)circleRadius:(double *)arg1 centerAngle:(double *)arg2 maxAngularWidth:(double *)arg3 interior:(_Bool *)arg4 forPlacement:(unsigned long long)arg5 forDevice:(id)arg6;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
@property(nonatomic) double textWidthInRadians; // @synthesize textWidthInRadians=_textWidthInRadians;
@property(nonatomic) __weak id <NTKUtilityFlatComplicationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <CLKMonochromeFilterProvider> filterProvider; // @synthesize filterProvider=_filterProvider;
- (id)colorForView:(id)arg1 accented:(_Bool)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2;
- (id)filterForView:(id)arg1 style:(long long)arg2 fraction:(double)arg3;
- (void)updateMonochromeColor;
- (void)transitionToMonochromeWithFraction:(double)arg1;
- (void)_enumerateColoringStackedImagesViewsWithBlock:(id /* block */)arg1;
- (void)_enumerateColoringViewsWithBlock:(id /* block */)arg1;
- (id)_backgroundPlatterImage;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)_updateForTemplateChange;
- (double)_widthThatFits;
- (void)_updateLabelMaxWidth;
- (_Bool)_shouldLayoutWithImageView;
- (void)_updateContentForMaxSizeChange;
- (void)_updateHighlightViewCornerRadius;
- (void)setShouldUseBackgroundPlatter:(_Bool)arg1;
- (unsigned long long)imagePlacement;
- (void)setUseBlockyHighlightCorners:(_Bool)arg1;
@property(nonatomic) double circleRadius;
@property(nonatomic) double maxAngularWidth;
- (void)setPlacement:(unsigned long long)arg1;
- (void)setForegroundColor:(id)arg1;
- (void)setCanUseCurvedText:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)updateTextWidthIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

