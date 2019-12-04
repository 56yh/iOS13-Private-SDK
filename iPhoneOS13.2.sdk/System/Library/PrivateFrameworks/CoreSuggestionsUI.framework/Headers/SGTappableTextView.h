//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSAttributedString, NSMutableIndexSet, UIColor;
@protocol SGTappableTextViewDelegate;

@interface SGTappableTextView : UITextView
{
    UIColor *_activeRangeNormalColor;
    UIColor *_activeRangeHighlightedColor;
    NSAttributedString *_clientText;
    NSMutableIndexSet *_activeRanges;
    struct _NSRange _trackingRange;
    _Bool _trackingRangeHighlighted;
    _Bool _needsLabelUpdate;
    long long _currentStyle;
    id <SGTappableTextViewDelegate> _tappableDelegate;
}

@property(nonatomic) __weak id <SGTappableTextViewDelegate> tappableDelegate; // @synthesize tappableDelegate=_tappableDelegate;
- (void)_updateCurrentAppearance;
- (id)_textColor;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct _NSRange)_rangeAtPoint:(struct CGPoint)arg1;
- (unsigned long long)_characterIndexAtPoint:(struct CGPoint)arg1;
- (void)_updateLabelIfNeeded;
- (void)_setNeedUpdateLabel;
- (void)tintColorDidChange;
- (void)layoutSubviews;
@property(retain, nonatomic) UIColor *activeRangeHighlightedColor;
@property(retain, nonatomic) UIColor *activeRangeNormalColor;
- (void)setAttributedText:(id)arg1;
- (id)text;
- (void)_updateAttributedTextColor;
- (void)setText:(id)arg1;
- (void)_highlightTrackingRange:(_Bool)arg1;
- (_Bool)isTracking;
- (struct _NSRange)trackingRange;
- (void)setTrackingRange:(struct _NSRange)arg1;
- (void)removeAllActiveRanges;
- (void)removeActiveRange:(struct _NSRange)arg1;
- (void)addActiveRange:(struct _NSRange)arg1;
@property(readonly, nonatomic) struct CGRect activeRangesRect;
@property(readonly, nonatomic) _Bool hasActiveRanges;
- (void)_commonInit;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

