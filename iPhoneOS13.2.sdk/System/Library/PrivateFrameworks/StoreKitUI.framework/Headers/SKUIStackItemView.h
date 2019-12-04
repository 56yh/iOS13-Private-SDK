//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewReuseView.h>

#import <StoreKitUI/SKUIViewElementView-Protocol.h>

@class NSArray, NSMapTable, NSString, SKUIAttributedStringView, SKUIStackItemViewElement, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIStackItemView : SKUIViewReuseView <SKUIViewElementView>
{
    SKUIStackItemViewElement *_viewElement;
    SKUIViewElementLayoutContext *_lastContext;
    SKUIAttributedStringView *_textView;
    NSArray *_imageViews;
    NSMapTable *_imageViewToImageResourceCacheKey;
    struct UIEdgeInsets _contentInset;
}

+ (id)_textViewLayoutWithWidth:(double)arg1 string:(id)arg2;
+ (id)_attributedStringForLabel:(id)arg1 context:(id)arg2;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 numberOfLines:(unsigned long long *)arg4;
+ (struct CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
+ (void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+ (struct CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+ (_Bool)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
@property(retain, nonatomic) NSMapTable *imageViewToImageResourceCacheKey; // @synthesize imageViewToImageResourceCacheKey=_imageViewToImageResourceCacheKey;
@property(copy, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(retain, nonatomic) SKUIAttributedStringView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) SKUIViewElementLayoutContext *lastContext; // @synthesize lastContext=_lastContext;
@property(retain, nonatomic) SKUIStackItemViewElement *viewElement; // @synthesize viewElement=_viewElement;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)viewForElementIdentifier:(id)arg1;
- (_Bool)updateWithItemState:(id)arg1 context:(id)arg2 animated:(_Bool)arg3;
- (_Bool)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
- (void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
@property(readonly, nonatomic) unsigned long long numberOfLines; // @dynamic numberOfLines;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

