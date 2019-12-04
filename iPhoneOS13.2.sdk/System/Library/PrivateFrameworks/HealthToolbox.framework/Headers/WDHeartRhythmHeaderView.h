//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <HealthToolbox/UITextViewDelegate-Protocol.h>

@class NSAttributedString, NSLayoutConstraint, NSString, NSURL, UILabel, UITextView;

__attribute__((visibility("hidden")))
@interface WDHeartRhythmHeaderView : UITableViewHeaderFooterView <UITextViewDelegate>
{
    UILabel *_titleLabel;
    UITextView *_bodyTextView;
    NSString *_bodyText;
    NSString *_bodyURLText;
    NSURL *_bodyURL;
    NSLayoutConstraint *_titleFirstBaselineToTopMarginConstraint;
    NSLayoutConstraint *_bodyFirstBaslineToTitleLastBaslineConstraint;
    NSLayoutConstraint *_bottomMarginToBodyLastBaselineConstraint;
}

+ (id)defaultReuseIdentifier;
@property(retain, nonatomic) NSLayoutConstraint *bottomMarginToBodyLastBaselineConstraint; // @synthesize bottomMarginToBodyLastBaselineConstraint=_bottomMarginToBodyLastBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *bodyFirstBaslineToTitleLastBaslineConstraint; // @synthesize bodyFirstBaslineToTitleLastBaslineConstraint=_bodyFirstBaslineToTitleLastBaslineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *titleFirstBaselineToTopMarginConstraint; // @synthesize titleFirstBaselineToTopMarginConstraint=_titleFirstBaselineToTopMarginConstraint;
@property(copy, nonatomic) NSURL *bodyURL; // @synthesize bodyURL=_bodyURL;
@property(copy, nonatomic) NSString *bodyURLText; // @synthesize bodyURLText=_bodyURLText;
@property(copy, nonatomic) NSString *bodyText; // @synthesize bodyText=_bodyText;
@property(retain, nonatomic) UITextView *bodyTextView; // @synthesize bodyTextView=_bodyTextView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
@property(readonly, nonatomic) NSAttributedString *bodyURLAttributedString;
@property(readonly, nonatomic) NSAttributedString *bodyTextAttributedString;
- (void)setBodyText:(id)arg1 URLText:(id)arg2 URL:(id)arg3;
@property(copy, nonatomic) NSString *titleText;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateBodyTextView;
- (void)updateConstraintConstants;
- (void)setUpUI;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

