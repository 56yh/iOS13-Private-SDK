//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITextView.h>

@class NSString, UITapGestureRecognizer, UIViewController;

@interface ICLearnMoreTextView : UITextView
{
    _Bool _isShowingLearnMore;
    NSString *_helpTopicID;
    NSString *_helpVersion;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIViewController *_parentViewController;
}

@property(nonatomic) _Bool isShowingLearnMore; // @synthesize isShowingLearnMore=_isShowingLearnMore;
@property(nonatomic) __weak UIViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(retain, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;
@property(retain, nonatomic) NSString *helpVersion; // @synthesize helpVersion=_helpVersion;
@property(retain, nonatomic) NSString *helpTopicID; // @synthesize helpTopicID=_helpTopicID;
- (void)updateForAccessibilityDarkerSystemColors;
- (_Bool)_accessibilityHasTextOperations;
- (id)accessibilityHint;
- (id)accessibilityValue;
- (unsigned long long)accessibilityTraits;
- (_Bool)accessibilityActivate;
- (void)sizeToFitWidthUsingHeightConstraint:(id)arg1;
- (id)letterpressedString:(id)arg1 withColor:(id)arg2 font:(id)arg3;
- (void)didTapLearnMore;
- (void)tapGesture:(id)arg1;
- (void)setAttributedText:(id)arg1 font:(id)arg2 lineSpacing:(double)arg3 addLearnMore:(_Bool)arg4;
- (void)setAttributedText:(id)arg1 addLearnMore:(_Bool)arg2 letterpress:(_Bool)arg3;
- (void)setText:(id)arg1 font:(id)arg2 color:(id)arg3 lineSpacing:(double)arg4 addLearnMore:(_Bool)arg5;
- (void)resetTextView;
- (void)dealloc;
- (void)awakeFromNib;

@end

