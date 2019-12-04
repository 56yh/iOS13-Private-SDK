//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/SKUIItemOfferButtonDelegate-Protocol.h>
#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSMapTable, NSMutableArray, NSNumber, NSString, UIButton;
@protocol SKUIOfferViewDelegate;

__attribute__((visibility("hidden")))
@interface SKUIOfferView : SKUIViewReuseView <SKUIItemOfferButtonDelegate, SKUIViewElementView>
{
    _Bool _showingConfirmation;
    _Bool _compactModeEnabled;
    id <SKUIOfferViewDelegate> _delegate;
    long long _metadataPosition;
    unsigned long long _alignment;
    NSMapTable *_buttonElements;
    NSMapTable *_buyButtonDescriptorToButton;
    NSMapTable *_notices;
    UIButton *_hlsPlayButton;
    NSNumber *_hlsID;
    NSMutableArray *_metadataViews;
    NSMutableArray *_offerButtonViews;
}

+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (id)_attributedStringForButton:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(retain, nonatomic) NSMutableArray *offerButtonViews; // @synthesize offerButtonViews=_offerButtonViews;
@property(retain, nonatomic) NSMutableArray *metadataViews; // @synthesize metadataViews=_metadataViews;
@property(retain, nonatomic) NSNumber *hlsID; // @synthesize hlsID=_hlsID;
@property(retain, nonatomic) UIButton *hlsPlayButton; // @synthesize hlsPlayButton=_hlsPlayButton;
@property(retain, nonatomic) NSMapTable *notices; // @synthesize notices=_notices;
@property(retain, nonatomic) NSMapTable *buyButtonDescriptorToButton; // @synthesize buyButtonDescriptorToButton=_buyButtonDescriptorToButton;
@property(retain, nonatomic) NSMapTable *buttonElements; // @synthesize buttonElements=_buttonElements;
@property(nonatomic) unsigned long long alignment; // @synthesize alignment=_alignment;
@property(nonatomic, getter=isCompactModeEnabled) _Bool compactModeEnabled; // @synthesize compactModeEnabled=_compactModeEnabled;
@property(nonatomic, getter=isShowingConfirmation) _Bool showingConfirmation; // @synthesize showingConfirmation=_showingConfirmation;
@property(nonatomic) long long metadataPosition; // @synthesize metadataPosition=_metadataPosition;
@property(nonatomic) __weak id <SKUIOfferViewDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)_shouldHideNoticesWithBuyButtonDescriptor:(id)arg1 context:(id)arg2;
- (void)_sendWillAnimate;
- (void)_showConfirmationAction:(id)arg1;
- (void)_cancelConfirmationAction:(id)arg1;
- (void)_buttonAction:(id)arg1;
- (void)itemOfferButtonWillAnimateTransition:(id)arg1;
- (void)itemOfferButtonDidAnimateTransition:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)viewForElementIdentifier:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
@property(readonly, nonatomic) NSString *offerViewStateDescription;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

