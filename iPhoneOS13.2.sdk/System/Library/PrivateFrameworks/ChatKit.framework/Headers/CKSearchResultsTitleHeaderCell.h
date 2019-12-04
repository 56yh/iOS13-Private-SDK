//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <ChatKit/CKSearchResultSupplementryCell-Protocol.h>

@class CALayer, NSString, UIButton, UILabel;
@protocol CKSearchResultsTitleHeaderCellDelegate;

@interface CKSearchResultsTitleHeaderCell : UICollectionViewCell <CKSearchResultSupplementryCell>
{
    id <CKSearchResultsTitleHeaderCellDelegate> _delegate;
    unsigned long long _sectionIndex;
    UIButton *_showAllButton;
    UILabel *_sectionTitle;
    CALayer *_topHairline;
    double _titleTopPadding;
    double _titleBottomPadding;
    struct UIEdgeInsets marginInsets;
}

+ (double)desiredZPosition;
+ (id)reuseIdentifier;
+ (id)supplementaryViewType;
@property(nonatomic) double titleBottomPadding; // @synthesize titleBottomPadding=_titleBottomPadding;
@property(nonatomic) double titleTopPadding; // @synthesize titleTopPadding=_titleTopPadding;
@property(retain, nonatomic) CALayer *topHairline; // @synthesize topHairline=_topHairline;
@property(retain, nonatomic) UILabel *sectionTitle; // @synthesize sectionTitle=_sectionTitle;
@property(retain, nonatomic) UIButton *showAllButton; // @synthesize showAllButton=_showAllButton;
@property(nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property(nonatomic) __weak id <CKSearchResultsTitleHeaderCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct UIEdgeInsets marginInsets; // @synthesize marginInsets;
- (void)_showAllButtonTapped:(id)arg1;
- (id)preferredLayoutAttributesFittingAttributes:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

