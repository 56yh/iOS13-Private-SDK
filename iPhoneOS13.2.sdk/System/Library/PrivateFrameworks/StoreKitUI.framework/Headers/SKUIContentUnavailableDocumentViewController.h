//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUILayoutCacheDelegate-Protocol.h>

@class NSString, SKUIContentUnavailableTemplateElement, SKUIContentUnavailableView, SKUILayoutCache, SKUIViewElementLayoutContext;

__attribute__((visibility("hidden")))
@interface SKUIContentUnavailableDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController>
{
    SKUIContentUnavailableView *_contentUnavailableView;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIContentUnavailableTemplateElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

- (void)_reloadContentUnavailableView:(id)arg1 width:(double)arg2;
- (id)_layoutContext;
- (struct UIEdgeInsets)_contentInsets;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)documentDidUpdate:(id)arg1;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

