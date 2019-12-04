//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UILabel;

@interface HRListItemLabel : UIView
{
    _Bool _centerItemViewToFirstLine;
    _Bool _boldText;
    UIView *_itemView;
    UILabel *_textLabel;
    NSString *_text;
    NSLayoutConstraint *_itemViewTextAlignmentConstraint;
    NSLayoutConstraint *_topToTextLabelFirstBaselineConstraint;
    struct CGSize _itemViewSize;
}

@property(retain, nonatomic) NSLayoutConstraint *topToTextLabelFirstBaselineConstraint; // @synthesize topToTextLabelFirstBaselineConstraint=_topToTextLabelFirstBaselineConstraint;
@property(retain, nonatomic) NSLayoutConstraint *itemViewTextAlignmentConstraint; // @synthesize itemViewTextAlignmentConstraint=_itemViewTextAlignmentConstraint;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) struct CGSize itemViewSize; // @synthesize itemViewSize=_itemViewSize;
@property(nonatomic) _Bool boldText; // @synthesize boldText=_boldText;
@property(nonatomic) _Bool centerItemViewToFirstLine; // @synthesize centerItemViewToFirstLine=_centerItemViewToFirstLine;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIView *itemView; // @synthesize itemView=_itemView;
- (double)_textLabelLastBaselineToBottom;
- (double)_topToTextLabelFirstBaseline;
- (id)_textLabelBoldFont;
- (id)_textLabelFont;
- (id)_textLabelFontStyle;
- (void)_updateItemViewTextAlignmentConstraint;
- (void)_updateTextLabelFont;
- (void)_setUpConstraints;
- (void)_setUpUI;
- (id)viewForLastBaselineLayout;
- (id)viewForFirstBaselineLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithView:(id)arg1 size:(struct CGSize)arg2 text:(id)arg3;

@end

