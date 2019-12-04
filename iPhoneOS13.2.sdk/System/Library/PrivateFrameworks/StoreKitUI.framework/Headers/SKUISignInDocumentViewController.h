//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIArtworkRequestDelegate-Protocol.h>
#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUILayoutCacheDelegate-Protocol.h>
#import <StoreKitUI/SKUISignInViewDelegate-Protocol.h>

@class NSString, SKUILayoutCache, SKUISignInTemplateView, SKUISignInTemplateViewElement, SKUIViewElementLayoutContext, UIScrollView;

__attribute__((visibility("hidden")))
@interface SKUISignInDocumentViewController : SKUIViewController <SKUIArtworkRequestDelegate, SKUILayoutCacheDelegate, SKUISignInViewDelegate, SKUIDocumentViewController>
{
    struct CGRect _keyboardFrame;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUISignInTemplateView *_loginView;
    UIScrollView *_scrollView;
    SKUISignInTemplateViewElement *_templateElement;
    SKUILayoutCache *_textLayoutCache;
}

- (void)_reloadPanelViewWithScrollViewSize:(struct CGSize)arg1;
- (void)_reloadContentSize;
- (void)_layoutScrollView;
- (void)_signInSuccess:(id)arg1;
- (void)_signInFailed:(id)arg1 error:(id)arg2;
- (id)_layoutContext;
- (id)_backgroundColor;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillChangeFrame:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)signInEntryComplete:(id)arg1 accountName:(id)arg2 password:(id)arg3;
- (void)layoutCacheDidFinishBatch:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

