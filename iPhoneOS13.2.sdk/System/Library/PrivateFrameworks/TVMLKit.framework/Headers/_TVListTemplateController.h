//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TVMLKit/_TVBgImageLoadingViewController.h>

#import <TVMLKit/TVAppTemplateController-Protocol.h>
#import <TVMLKit/TVAppTemplateImpressionable-Protocol.h>
#import <TVMLKit/_TVListViewControllerDelegate-Protocol.h>

@class IKAudioElement, IKCollectionElement, IKImageElement, IKViewElement, NSString, UIView, UIViewController, _TVFocusCaptureView, _TVListViewController;

__attribute__((visibility("hidden")))
@interface _TVListTemplateController : _TVBgImageLoadingViewController <_TVListViewControllerDelegate, TVAppTemplateController, TVAppTemplateImpressionable>
{
    IKViewElement *_templateElement;
    IKCollectionElement *_listElement;
    IKViewElement *_bannerElement;
    IKImageElement *_bgImageElement;
    IKAudioElement *_bgAudioElement;
    IKImageElement *_heroImageElement;
    UIView *_overlayView;
    _TVFocusCaptureView *_disabledTemplateFocusCaptureView;
    double _impressionThreshold;
    UIViewController *_focusedController;
    _TVListViewController *_listViewController;
    UIViewController *_previewViewController;
}

@property(retain, nonatomic) UIViewController *previewViewController; // @synthesize previewViewController=_previewViewController;
@property(retain, nonatomic) _TVListViewController *listViewController; // @synthesize listViewController=_listViewController;
@property(retain, nonatomic) UIViewController *focusedController; // @synthesize focusedController=_focusedController;
- (id)impressionableElementsContainedInDocument:(id)arg1;
- (void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2;
- (long long)_blurEffectStyle;
- (_Bool)_backgroundImageRequiresBlur;
- (id)_backgroundImageProxy;
- (struct CGSize)_backgroundImageProxySize;
- (void)_configureWithListElement:(id)arg1;
- (void)_configureWithBgElement:(id)arg1;
- (id)_listTemplateView;
- (void)listViewController:(id)arg1 didScrollWithScrollView:(id)arg2;
- (void)listViewController:(id)arg1 updatePreviewViewController:(id)arg2;
- (void)_updateView;
- (id)preferredFocusEnvironments;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (void)loadView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)setNeedsFocusUpdateToList;
- (void)updateWithViewElement:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

