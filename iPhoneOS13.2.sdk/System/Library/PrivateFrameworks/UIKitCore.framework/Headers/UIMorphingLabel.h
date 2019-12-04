//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSString, UIColor, UIFont, UIMorphingLabelGlyphSet, _UIViewAnimationAttributes;

@interface UIMorphingLabel : UIView
{
    UIMorphingLabelGlyphSet *_srcGlyphSet;
    UIMorphingLabelGlyphSet *_dstGlyphSet;
    NSMutableArray *_hiddenGlyphViews;
    UIView *_colorView;
    unsigned long long _alignmentSrc[100];
    unsigned long long _alignmentDst[100];
    _Bool _alignmentIsEqual[100];
    unsigned long long _alignmentSize;
    double _alignmentDelays[100];
    _UIViewAnimationAttributes *_textAnimationAttributes;
    _UIViewAnimationAttributes *_textColorAnimationAttributes;
    double _lastUpdateTime;
    double _slowdown;
    double _rippleFactor;
    double _scaleFactor;
    _Bool _isDoingFastAnimation;
    _Bool _textDidChange;
    _Bool _textColorDidChange;
    _Bool _suppressLayoutSubviews;
    _Bool _enableAnimation;
    NSString *_text;
    UIFont *_font;
    UIColor *_textColor;
    long long _textAlignment;
    double _initialScale;
    double _glyphScaleAnimationSpeed;
    double _rippleDuration;
    struct CGRect _visibleRect;
}

+ (id)preferredFontWithSize:(double)arg1;
@property(nonatomic) double rippleDuration; // @synthesize rippleDuration=_rippleDuration;
@property(nonatomic) double glyphScaleAnimationSpeed; // @synthesize glyphScaleAnimationSpeed=_glyphScaleAnimationSpeed;
@property(nonatomic) double initialScale; // @synthesize initialScale=_initialScale;
@property(nonatomic) _Bool enableAnimation; // @synthesize enableAnimation=_enableAnimation;
@property(nonatomic) _Bool suppressLayoutSubviews; // @synthesize suppressLayoutSubviews=_suppressLayoutSubviews;
@property(nonatomic) struct CGRect visibleRect; // @synthesize visibleRect=_visibleRect;
@property(nonatomic) long long textAlignment; // @synthesize textAlignment=_textAlignment;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (void)contentSizeDidChange:(id)arg1;
- (double)requiredWidthForText:(id)arg1;
- (double)flushAmount;
- (_Bool)canFitText:(id)arg1;
- (void)layoutSubviews;
- (id)attributedString;
- (id)attributedStringForText:(id)arg1;
- (void)animateTextColor;
- (void)animateGlyphs;
- (void)animateAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateMovementAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initMovementAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)copyStateFromGlyph:(id)arg1 toGlyph:(id)arg2;
- (void)animateSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initSubstitutionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateDeletionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initDeletionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateInsertionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)initInsertionAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateChangeInWidthOutsideAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateGlyphsInRange:(struct _NSRange)arg1 ofGlyphSet:(id)arg2 byOffset:(double)arg3 delay:(double)arg4;
- (double)changeInWidthDueToAlignmentHunkAtIndex:(unsigned long long)arg1;
- (double)totalRightOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1;
- (double)totalLeftOffsetForAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)animateHideGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3;
- (void)animateShowGlyph:(id)arg1 alpha:(double)arg2 alphaDuration:(double)arg3 delay:(double)arg4;
- (void)animateShowGlyph:(id)arg1 alphaDuration:(double)arg2 delay:(double)arg3;
- (void)animateGlyph:(id)arg1 toScale:(double)arg2 delay:(double)arg3;
- (void)animateGlyph:(id)arg1 toAlpha:(double)arg2 duration:(double)arg3 delay:(double)arg4;
- (void)animateGlyph:(id)arg1 toPosition:(struct CGPoint)arg2 delay:(double)arg3;
- (double)currentMediaTime;
- (id)uniqueStringWithPrefix:(id)arg1;
- (void)hideGlyph:(id)arg1;
- (id)glyphViewWithImage:(id)arg1 isColorGlyph:(_Bool)arg2;
- (struct _NSRange)dstRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1;
- (struct _NSRange)srcRangeOfAlignmentHunkAtIndex:(unsigned long long)arg1;
- (void)calculateGlyphAlignment;
- (unsigned long long)calculateHardAlignmentAtIndex:(unsigned long long)arg1 fromGlyphsInRange:(struct _NSRange)arg2 toGlyphsInRange:(struct _NSRange)arg3;
- (_Bool)_isRTL;
- (double)_rippleDurationForEndInsertion:(_Bool)arg1;
- (double)alphaForFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)baseInit;

@end

