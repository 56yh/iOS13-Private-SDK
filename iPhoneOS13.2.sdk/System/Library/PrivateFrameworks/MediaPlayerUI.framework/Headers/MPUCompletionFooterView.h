//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <MediaPlayerUI/SKUIItemOfferButtonDelegate-Protocol.h>

@class MPStoreCompletionOffering, MPUItemOfferButton, NSString, UILabel, UISegmentedControl, UITapGestureRecognizer, UIView;
@protocol MPUCompletionFooterViewDelegate;

@interface MPUCompletionFooterView : UITableViewHeaderFooterView <SKUIItemOfferButtonDelegate>
{
    UITapGestureRecognizer *_tapGestureRecognizer;
    _Bool _showsVariants;
    _Bool _purchasing;
    long long _style;
    id <MPUCompletionFooterViewDelegate> _delegate;
    NSString *_title;
    NSString *_completeTitleFormat;
    NSString *_completeSubtitleFormat;
    NSString *_completeMyCollectionTitle;
    NSString *_completionTotalFormat;
    MPStoreCompletionOffering *_completionOffering;
    long long _preferredVariant;
    MPUItemOfferButton *_itemOfferButton;
    UIView *_topSeparatorView;
    UIView *_bottomSeparatorView;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UISegmentedControl *_variantSegmentedControl;
    struct UIEdgeInsets _contentInsets;
}

+ (double)defaultHeight;
@property(retain, nonatomic) UISegmentedControl *variantSegmentedControl; // @synthesize variantSegmentedControl=_variantSegmentedControl;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bottomSeparatorView; // @synthesize bottomSeparatorView=_bottomSeparatorView;
@property(retain, nonatomic) UIView *topSeparatorView; // @synthesize topSeparatorView=_topSeparatorView;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(retain, nonatomic) MPUItemOfferButton *itemOfferButton; // @synthesize itemOfferButton=_itemOfferButton;
@property(nonatomic, getter=isPurchasing) _Bool purchasing; // @synthesize purchasing=_purchasing;
@property(nonatomic) _Bool showsVariants; // @synthesize showsVariants=_showsVariants;
@property(nonatomic) long long preferredVariant; // @synthesize preferredVariant=_preferredVariant;
@property(retain, nonatomic) MPStoreCompletionOffering *completionOffering; // @synthesize completionOffering=_completionOffering;
@property(copy, nonatomic) NSString *completionTotalFormat; // @synthesize completionTotalFormat=_completionTotalFormat;
@property(copy, nonatomic) NSString *completeMyCollectionTitle; // @synthesize completeMyCollectionTitle=_completeMyCollectionTitle;
@property(copy, nonatomic) NSString *completeSubtitleFormat; // @synthesize completeSubtitleFormat=_completeSubtitleFormat;
@property(copy, nonatomic) NSString *completeTitleFormat; // @synthesize completeTitleFormat=_completeTitleFormat;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) __weak id <MPUCompletionFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) long long style; // @synthesize style=_style;
- (id)_createItemOfferButton;
- (void)_configureViewsForCompletionOffering;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)_handleTapGesture:(id)arg1;
- (void)_changedVariants:(id)arg1;
- (void)_buttonPurchaseAction:(id)arg1;
- (void)_buttonShowConfirmationAction:(id)arg1;
- (void)_buttonCancelConfirmationAction:(id)arg1;
- (void)layoutSubviews;
- (void)layoutSeparatorsWithInset:(struct UIEdgeInsets)arg1;
- (void)dealloc;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

