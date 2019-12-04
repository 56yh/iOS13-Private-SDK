//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>


#import <UIKitCore/_UINavigationBarTransitionContextParticipant-Protocol.h>

@class NSArray, NSMutableArray, NSString, UILabel, UISearchBar, UIView, _UIBarBackground, _UIBarBackgroundLayout, _UIBarInsertLayoutData, _UINavigationBarContentView, _UINavigationBarContentViewLayout, _UINavigationBarLargeTitleView, _UINavigationBarLargeTitleViewLayout, _UINavigationBarModernPromptView, _UINavigationBarPalette, _UINavigationControllerRefreshControlHost;

__attribute__((visibility("hidden")))
@interface _UINavigationBarLayout : NSObject <NSCopying, _UINavigationBarTransitionContextParticipant>
{
    _UIBarInsertLayoutData *_promptLayoutData;
    _UIBarInsertLayoutData *_contentLayoutData;
    _UIBarInsertLayoutData *_canvasViewLayoutData;
    _UIBarInsertLayoutData *_largeTitleLayoutData;
    _UIBarInsertLayoutData *_refreshControlLayoutData;
    _UIBarInsertLayoutData *_searchBarLayoutData;
    _UIBarInsertLayoutData *_scopeBarLayoutData;
    _UIBarInsertLayoutData *_bottomPaletteLayoutData;
    NSMutableArray *_priorityOrderedLayout;
    NSMutableArray *_stackingOrderedLayout;
    NSArray *_restingHeights;
    _Bool _backgroundCoversContentOnly;
    _Bool _clientWantsBackgroundHidden;
    _Bool _useManualScrollEdgeAppearance;
    _Bool _clientWantsToPreserveSearchBarAcrossTransitions;
    _Bool _hidesSearchBarWhenScrolling;
    _UINavigationBarModernPromptView *_promptView;
    _UINavigationBarContentView *_contentView;
    _UINavigationBarLargeTitleView *_largeTitleView;
    _UINavigationBarContentViewLayout *_contentViewLayout;
    _UINavigationBarLargeTitleViewLayout *_largeTitleViewLayout;
    _UIBarBackground *_backgroundView;
    _UIBarBackgroundLayout *_compactBackgroundViewLayout;
    _UIBarBackgroundLayout *_standardBackgroundViewLayout;
    double _backgroundExtension;
    double _requestedBackgroundViewAlpha;
    double _manualScrollEdgeAppearanceProgress;
    _UINavigationControllerRefreshControlHost *_refreshControlHost;
    UILabel *_weeTitleLabel;
    UIView *_canvasView;
    UISearchBar *_searchBar;
    long long _representedSearchLayoutState;
    _UINavigationBarPalette *_bottomPalette;
    double _largeTitleExposure;
    double _chromelessTransitionProgress;
    double _computedBackgroundViewAlpha;
    long long _apiVersion;
    struct CGSize _layoutSize;
    struct NSDirectionalEdgeInsets _largeTitleViewInsets;
}

@property(nonatomic) struct CGSize layoutSize; // @synthesize layoutSize=_layoutSize;
@property(nonatomic) long long apiVersion; // @synthesize apiVersion=_apiVersion;
@property(readonly, nonatomic) double computedBackgroundViewAlpha; // @synthesize computedBackgroundViewAlpha=_computedBackgroundViewAlpha;
@property(readonly, nonatomic) double chromelessTransitionProgress; // @synthesize chromelessTransitionProgress=_chromelessTransitionProgress;
@property(readonly, nonatomic) double largeTitleExposure; // @synthesize largeTitleExposure=_largeTitleExposure;
@property(retain, nonatomic) _UINavigationBarPalette *bottomPalette; // @synthesize bottomPalette=_bottomPalette;
@property(nonatomic) long long representedSearchLayoutState; // @synthesize representedSearchLayoutState=_representedSearchLayoutState;
@property(nonatomic) _Bool hidesSearchBarWhenScrolling; // @synthesize hidesSearchBarWhenScrolling=_hidesSearchBarWhenScrolling;
@property(nonatomic) _Bool clientWantsToPreserveSearchBarAcrossTransitions; // @synthesize clientWantsToPreserveSearchBarAcrossTransitions=_clientWantsToPreserveSearchBarAcrossTransitions;
@property(retain, nonatomic) UISearchBar *searchBar; // @synthesize searchBar=_searchBar;
@property(retain, nonatomic) UIView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) UILabel *weeTitleLabel; // @synthesize weeTitleLabel=_weeTitleLabel;
@property(retain, nonatomic) _UINavigationControllerRefreshControlHost *refreshControlHost; // @synthesize refreshControlHost=_refreshControlHost;
@property(nonatomic) double manualScrollEdgeAppearanceProgress; // @synthesize manualScrollEdgeAppearanceProgress=_manualScrollEdgeAppearanceProgress;
@property(nonatomic) _Bool useManualScrollEdgeAppearance; // @synthesize useManualScrollEdgeAppearance=_useManualScrollEdgeAppearance;
@property(nonatomic) _Bool clientWantsBackgroundHidden; // @synthesize clientWantsBackgroundHidden=_clientWantsBackgroundHidden;
@property(nonatomic) double requestedBackgroundViewAlpha; // @synthesize requestedBackgroundViewAlpha=_requestedBackgroundViewAlpha;
@property(nonatomic) _Bool backgroundCoversContentOnly; // @synthesize backgroundCoversContentOnly=_backgroundCoversContentOnly;
@property(nonatomic) double backgroundExtension; // @synthesize backgroundExtension=_backgroundExtension;
@property(retain, nonatomic) _UIBarBackgroundLayout *standardBackgroundViewLayout; // @synthesize standardBackgroundViewLayout=_standardBackgroundViewLayout;
@property(retain, nonatomic) _UIBarBackgroundLayout *compactBackgroundViewLayout; // @synthesize compactBackgroundViewLayout=_compactBackgroundViewLayout;
@property(retain, nonatomic) _UIBarBackground *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) _UINavigationBarLargeTitleViewLayout *largeTitleViewLayout; // @synthesize largeTitleViewLayout=_largeTitleViewLayout;
@property(retain, nonatomic) _UINavigationBarContentViewLayout *contentViewLayout; // @synthesize contentViewLayout=_contentViewLayout;
@property(nonatomic) struct NSDirectionalEdgeInsets largeTitleViewInsets; // @synthesize largeTitleViewInsets=_largeTitleViewInsets;
@property(retain, nonatomic) _UINavigationBarLargeTitleView *largeTitleView; // @synthesize largeTitleView=_largeTitleView;
@property(retain, nonatomic) _UINavigationBarContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) _UINavigationBarModernPromptView *promptView; // @synthesize promptView=_promptView;
- (void)finalizeStateFromTransition:(id)arg1;
- (void)ensureBackButtonTruncationOccursWithContext:(id)arg1;
- (void)recordToStateForTransition:(id)arg1;
- (void)prepareToRecordToState:(id)arg1;
- (void)recordFromStateForTransition:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) CDStruct_39925896 layoutHeights;
@property(readonly, copy, nonatomic) NSArray *restingHeights;
- (id)layoutForMeasuringWidth:(double)arg1;
- (void)removeViewsNotInLayout:(id)arg1;
- (void)removeAllViews;
- (void)interleaveViewsWithLayout:(id)arg1 inNavigationBar:(id)arg2;
- (void)installViewsInNavigationBar:(id)arg1;
- (void)layoutViews;
@property(readonly, nonatomic) struct CGRect weeTitleLabelLayoutFrame;
- (struct CGRect)backgroundViewLayoutFrameForcingExpandedHeight:(_Bool)arg1;
@property(readonly, nonatomic) struct CGRect backgroundViewLayoutFrame;
- (struct CGRect)_backgroundViewLayoutFrameWithRelevantMaxY:(double)arg1;
@property(readonly, nonatomic) struct CGRect bottomPaletteLayoutFrame;
- (struct CGRect)_bottomPaletteLayoutFrameWithSearchBarMaxY:(double)arg1;
@property(readonly, nonatomic) struct CGRect searchBarLayoutFrame;
- (struct CGRect)_searchBarLayoutFrameWithLargeTitleMaxY:(double)arg1;
@property(readonly, nonatomic) struct CGRect largeTitleViewLayoutFrame;
- (struct CGRect)_largeTitleViewLayoutFrameWithContentOrCanvasOrRefreshControlMaxY:(double)arg1;
@property(readonly, nonatomic) struct CGRect refreshControlLayoutFrame;
- (struct CGRect)_refreshControlLayoutFrameWithContentOrCanvasMaxY:(double)arg1;
@property(readonly, nonatomic) struct CGRect canvasViewLayoutFrame;
- (struct CGRect)_canvasViewLayoutFrameWithPromptMaxY:(double)arg1;
@property(readonly, nonatomic) struct CGRect contentViewLayoutFrame;
- (struct CGRect)_contentViewLayoutFrameWithPromptMaxY:(double)arg1;
@property(readonly, nonatomic) struct CGRect promptViewLayoutFrame;
- (void)updateLayout;
- (void)_updateLayoutOutputs;
- (void)_updateLayoutParametersForWidth:(double)arg1;
- (void)_updateRefreshControlLayoutData;
- (void)_updateLargeTitleViewLayoutItem;
- (void)_resolveContentAndCanvasLayouts;
- (void)_reprioritizeLayoutItem:(id)arg1 toPriority:(long long)arg2;
- (void)_removeLayoutItem:(id)arg1;
- (void)_addLayoutItem:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithLayout:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

