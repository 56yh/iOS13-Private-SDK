//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUILayoutCacheDelegate-Protocol.h>

@class NSString, SKUILayoutCache, SKUIMetricsImpressionSession, SKUIPanelTemplateViewElement, SKUIPanelView, SKUIViewElementLayoutContext, UIImageView, UIScrollView;

__attribute__((visibility("hidden")))
@interface SKUIPanelDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUIDocumentViewController>
{
    UIImageView *_backgroundImageView;
    _Bool _didAttemptBecomeFirstResponder;
    struct CGRect _keyboardFrame;
    long long _lastContentWidth;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIMetricsImpressionSession *_metricsImpressionSession;
    SKUIPanelView *_panelView;
    SKUILayoutCache *_textLayoutCache;
    UIScrollView *_scrollView;
    SKUIPanelTemplateViewElement *_templateElement;
}

- (id)_templateBackgroundColor;
- (void)_requestPanelViewLayoutWithContentWidth:(long long)arg1 forced:(_Bool)arg2;
- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize)arg1;
- (void)_reloadContentSize;
- (void)_reloadBackgroundImageView;
- (void)_layoutScrollView;
- (id)_layoutContext;
- (void)_layoutBackgroundImageView;
- (id)_imageForBackgroundImageElement:(id)arg1;
- (id)_activeBackgroundColor;
- (void)_keyboardWillChangeNotification:(id)arg1;
- (void)_keyboardHideNotification:(id)arg1;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (id)impressionableViewElements;
- (void)documentDidUpdate:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)loadView;
- (id)contentScrollView;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

