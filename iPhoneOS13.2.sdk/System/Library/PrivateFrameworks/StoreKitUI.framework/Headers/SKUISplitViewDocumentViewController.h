//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUINavigationDocumentDelegate-Protocol.h>

@class NSString, SKUINavigationDocumentController, SKUISplitViewTemplateElement, UISplitViewController, UIViewController;

__attribute__((visibility("hidden")))
@interface SKUISplitViewDocumentViewController : SKUIViewController <SKUINavigationDocumentDelegate, SKUIDocumentViewController>
{
    UIViewController *_delayingPresentationViewController;
    UISplitViewController *_splitViewController;
    SKUISplitViewTemplateElement *_templateElement;
    SKUINavigationDocumentController *_leftNavigationDocumentController;
    SKUINavigationDocumentController *_rightNavigationDocumentController;
}

+ (_Bool)_shouldForwardViewWillTransitionToSize;
@property(retain, nonatomic) SKUINavigationDocumentController *rightNavigationDocumentController; // @synthesize rightNavigationDocumentController=_rightNavigationDocumentController;
@property(retain, nonatomic) SKUINavigationDocumentController *leftNavigationDocumentController; // @synthesize leftNavigationDocumentController=_leftNavigationDocumentController;
- (void)_skui_endDelayingPresentation;
- (void)_reloadSplitViewControllers;
- (_Bool)_isFullyPopulated;
- (id)_defaultBackgroundColor;
- (void)navigationDocumentStackDidChange:(id)arg1;
- (void)loadView;
- (void)skui_viewWillAppear:(_Bool)arg1;
- (id)leftBarButtonItemsForDocument:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (void)delayPresentationIfNeededForParentViewController:(id)arg1;
- (void)dealloc;
- (id)initWithTemplateElement:(id)arg1 clientContext:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

