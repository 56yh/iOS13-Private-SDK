//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/WKNavigationDelegate-Protocol.h>
#import <HomeUI/WKUIDelegate-Protocol.h>

@class NSString, WKUserContentController, WKWebView;
@protocol HUInlineWebContainerViewDelegate;

@interface HUInlineWebContainerView : UIView <WKUIDelegate, WKNavigationDelegate>
{
    WKWebView *_webView;
    NSString *_HTMLContent;
    id <HUInlineWebContainerViewDelegate> _delegate;
    double _estimatedHeight;
    WKUserContentController *_contentController;
}

@property(readonly, nonatomic) WKUserContentController *contentController; // @synthesize contentController=_contentController;
@property(nonatomic) double estimatedHeight; // @synthesize estimatedHeight=_estimatedHeight;
@property(nonatomic) __weak id <HUInlineWebContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *HTMLContent; // @synthesize HTMLContent=_HTMLContent;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (_Bool)webView:(id)arg1 shouldPreviewElement:(id)arg2;
- (void)webView:(id)arg1 decidePolicyForNavigationAction:(id)arg2 decisionHandler:(id /* block */)arg3;
- (id)_defaultFont;
- (double)heightForWidth:(double)arg1;
- (void)layoutSubviews;
- (void)setUserStyleSheet;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

