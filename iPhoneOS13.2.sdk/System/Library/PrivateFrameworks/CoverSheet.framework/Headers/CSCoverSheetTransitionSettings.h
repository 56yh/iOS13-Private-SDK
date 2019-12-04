//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PrototypeTools/PTSettings.h>

#import <CoverSheet/BSDescriptionProviding-Protocol.h>

@class NSString;

@interface CSCoverSheetTransitionSettings : PTSettings <BSDescriptionProviding>
{
    _Bool _blursPanel;
    _Bool _fadesContent;
    _Bool _darkensContent;
    _Bool _panelWallpaper;
    _Bool _trackingWallpaper;
    _Bool _revealWallpaper;
    _Bool _fadePanelWallpaper;
    _Bool _iconsFlyIn;
    double _blurRadius;
    double _blurStart;
    double _blurEnd;
    double _blurEndReducedTransparency;
    double _maxContentAlpha;
    double _contentFadeStart;
    double _contentFadeEnd;
    double _darkeningColorWhite;
    double _darkeningColorAlpha;
    double _darkeningStart;
    double _darkeningEnd;
    double _trackingWallpaperParallaxFactor;
    double _fadePanelWallpaperStart;
    double _fadePanelWallpaperEnd;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool iconsFlyIn; // @synthesize iconsFlyIn=_iconsFlyIn;
@property(nonatomic) double fadePanelWallpaperEnd; // @synthesize fadePanelWallpaperEnd=_fadePanelWallpaperEnd;
@property(nonatomic) double fadePanelWallpaperStart; // @synthesize fadePanelWallpaperStart=_fadePanelWallpaperStart;
@property(nonatomic) _Bool fadePanelWallpaper; // @synthesize fadePanelWallpaper=_fadePanelWallpaper;
@property(nonatomic) _Bool revealWallpaper; // @synthesize revealWallpaper=_revealWallpaper;
@property(nonatomic) double trackingWallpaperParallaxFactor; // @synthesize trackingWallpaperParallaxFactor=_trackingWallpaperParallaxFactor;
@property(nonatomic) _Bool trackingWallpaper; // @synthesize trackingWallpaper=_trackingWallpaper;
@property(nonatomic) _Bool panelWallpaper; // @synthesize panelWallpaper=_panelWallpaper;
@property(nonatomic) double darkeningEnd; // @synthesize darkeningEnd=_darkeningEnd;
@property(nonatomic) double darkeningStart; // @synthesize darkeningStart=_darkeningStart;
@property(nonatomic) double darkeningColorAlpha; // @synthesize darkeningColorAlpha=_darkeningColorAlpha;
@property(nonatomic) double darkeningColorWhite; // @synthesize darkeningColorWhite=_darkeningColorWhite;
@property(nonatomic) _Bool darkensContent; // @synthesize darkensContent=_darkensContent;
@property(nonatomic) double contentFadeEnd; // @synthesize contentFadeEnd=_contentFadeEnd;
@property(nonatomic) double contentFadeStart; // @synthesize contentFadeStart=_contentFadeStart;
@property(nonatomic) double maxContentAlpha; // @synthesize maxContentAlpha=_maxContentAlpha;
@property(nonatomic) _Bool fadesContent; // @synthesize fadesContent=_fadesContent;
@property(nonatomic) double blurEndReducedTransparency; // @synthesize blurEndReducedTransparency=_blurEndReducedTransparency;
@property(nonatomic) double blurEnd; // @synthesize blurEnd=_blurEnd;
@property(nonatomic) double blurStart; // @synthesize blurStart=_blurStart;
@property(nonatomic) double blurRadius; // @synthesize blurRadius=_blurRadius;
@property(nonatomic) _Bool blursPanel; // @synthesize blursPanel=_blursPanel;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)setDefaultValues;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

