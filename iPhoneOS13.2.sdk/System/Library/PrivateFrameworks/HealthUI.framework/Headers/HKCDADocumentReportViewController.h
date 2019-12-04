//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKViewController.h>

#import <HealthUI/HKIncrementalSearchBarDelegate-Protocol.h>

@class HKIncrementalSearchBar, NSData, NSMutableArray, UIView, WKWebView;

@interface HKCDADocumentReportViewController : HKViewController <HKIncrementalSearchBarDelegate>
{
    _Bool _javascriptSearchInstalled;
    _Bool _javascriptIsRunning;
    _Bool _searchInProgress;
    NSData *_documentData;
    UIView *_disclosureView;
    WKWebView *_webView;
    HKIncrementalSearchBar *_incrementalSearchBar;
    long long _hitCount;
    long long _currentHighlightedHit;
    NSMutableArray *_javascriptOperationQueue;
}

+ (id)xmlToHTMLTranslator;
@property(retain, nonatomic) NSMutableArray *javascriptOperationQueue; // @synthesize javascriptOperationQueue=_javascriptOperationQueue;
@property(nonatomic) long long currentHighlightedHit; // @synthesize currentHighlightedHit=_currentHighlightedHit;
@property(nonatomic) long long hitCount; // @synthesize hitCount=_hitCount;
@property(nonatomic) _Bool searchInProgress; // @synthesize searchInProgress=_searchInProgress;
@property(nonatomic) _Bool javascriptIsRunning; // @synthesize javascriptIsRunning=_javascriptIsRunning;
@property(nonatomic) _Bool javascriptSearchInstalled; // @synthesize javascriptSearchInstalled=_javascriptSearchInstalled;
@property(readonly, nonatomic) HKIncrementalSearchBar *incrementalSearchBar; // @synthesize incrementalSearchBar=_incrementalSearchBar;
@property(readonly, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(readonly, nonatomic) UIView *disclosureView; // @synthesize disclosureView=_disclosureView;
@property(readonly) NSData *documentData; // @synthesize documentData=_documentData;
- (void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2;
- (void)searchBarChangeSearch:(id)arg1 searchString:(id)arg2;
- (void)searchBarDoneAction:(id)arg1;
- (void)searchBarDownAction:(id)arg1;
- (void)searchBarUpAction:(id)arg1;
- (void)_incrementCurrentHitBy:(long long)arg1;
- (void)_updateMatchDisplayString:(long long)arg1 numMatches:(long long)arg2;
- (void)_updateSearchBarState;
- (void)_updateSearchHits:(long long)arg1;
- (void)_finishJavascriptOperation;
- (void)_runJavascriptOperation:(id)arg1 clearQueuedCommands:(_Bool)arg2;
- (void)_runJavascript:(id)arg1 clearQueuedCommands:(_Bool)arg2 completion:(id /* block */)arg3;
- (void)startIncrementalSearch;
- (unsigned long long)supportedInterfaceOrientations;
- (void)_translateXMLInBackground;
- (void)viewDidLoad;
- (id)buildDisclosureView;
- (void)hideDisclosure:(id)arg1;
- (id)initWithDocumentData:(id)arg1;

@end

