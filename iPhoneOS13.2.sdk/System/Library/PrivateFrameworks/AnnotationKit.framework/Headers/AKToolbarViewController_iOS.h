//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AnnotationKit/AKToolbarViewController.h>

#import <AnnotationKit/AKSignatureCreationControllerDelegate-Protocol.h>
#import <AnnotationKit/AKSignaturesViewControllerDelegate-Protocol.h>
#import <AnnotationKit/UIPopoverPresentationControllerDelegate-Protocol.h>

@class AKColorPickerViewController, AKFloatingAttributePickerViewController, AKLineStylesViewController, AKSignaturesViewController_iOS, AKTextAttributesViewController, NSArray, NSLayoutConstraint, NSString, UIAlertController, UIBarButtonItem, UIColor, UIView;

@interface AKToolbarViewController_iOS : AKToolbarViewController <AKSignaturesViewControllerDelegate, AKSignatureCreationControllerDelegate, UIPopoverPresentationControllerDelegate>
{
    UIColor *_barTintColor;
    UIColor *_tintColor;
    UIView *_floatingAttributeToolbarContainer;
    UIBarButtonItem *_richSketchButton;
    UIBarButtonItem *_sketchButton;
    UIBarButtonItem *_inkButton;
    UIBarButtonItem *_textButton;
    UIBarButtonItem *_loupeButton;
    UIBarButtonItem *_signatureButton;
    UIBarButtonItem *_undoButton;
    UIBarButtonItem *_redoButton;
    UIBarButtonItem *_textStyleButton;
    UIBarButtonItem *_lineStyleButton;
    UIBarButtonItem *_strokeColorButton;
    NSArray *_staticToolbarItems;
    UIAlertController *_signaturesAlertController;
    UIAlertController *_undoAlertController;
    AKSignaturesViewController_iOS *_signaturesSheetViewController;
    AKLineStylesViewController *_lineStylesViewController;
    AKTextAttributesViewController *_textAttributesViewController;
    AKColorPickerViewController *_colorPickerPopoverViewController;
    AKFloatingAttributePickerViewController *_attributeToolbarViewController;
    NSLayoutConstraint *_attributeToolbarViewControllerConstraint;
}

@property(retain, nonatomic) NSLayoutConstraint *attributeToolbarViewControllerConstraint; // @synthesize attributeToolbarViewControllerConstraint=_attributeToolbarViewControllerConstraint;
@property(retain, nonatomic) AKFloatingAttributePickerViewController *attributeToolbarViewController; // @synthesize attributeToolbarViewController=_attributeToolbarViewController;
@property(retain, nonatomic) AKColorPickerViewController *colorPickerPopoverViewController; // @synthesize colorPickerPopoverViewController=_colorPickerPopoverViewController;
@property(retain, nonatomic) AKTextAttributesViewController *textAttributesViewController; // @synthesize textAttributesViewController=_textAttributesViewController;
@property(retain, nonatomic) AKLineStylesViewController *lineStylesViewController; // @synthesize lineStylesViewController=_lineStylesViewController;
@property(retain, nonatomic) AKSignaturesViewController_iOS *signaturesSheetViewController; // @synthesize signaturesSheetViewController=_signaturesSheetViewController;
@property(retain, nonatomic) UIAlertController *undoAlertController; // @synthesize undoAlertController=_undoAlertController;
@property(retain, nonatomic) UIAlertController *signaturesAlertController; // @synthesize signaturesAlertController=_signaturesAlertController;
@property(retain, nonatomic) NSArray *staticToolbarItems; // @synthesize staticToolbarItems=_staticToolbarItems;
@property(retain, nonatomic) UIBarButtonItem *strokeColorButton; // @synthesize strokeColorButton=_strokeColorButton;
@property(retain, nonatomic) UIBarButtonItem *lineStyleButton; // @synthesize lineStyleButton=_lineStyleButton;
@property(retain, nonatomic) UIBarButtonItem *textStyleButton; // @synthesize textStyleButton=_textStyleButton;
@property(retain, nonatomic) UIBarButtonItem *redoButton; // @synthesize redoButton=_redoButton;
@property(retain, nonatomic) UIBarButtonItem *undoButton; // @synthesize undoButton=_undoButton;
@property(retain, nonatomic) UIBarButtonItem *signatureButton; // @synthesize signatureButton=_signatureButton;
@property(retain, nonatomic) UIBarButtonItem *loupeButton; // @synthesize loupeButton=_loupeButton;
@property(retain, nonatomic) UIBarButtonItem *textButton; // @synthesize textButton=_textButton;
@property(retain, nonatomic) UIBarButtonItem *inkButton; // @synthesize inkButton=_inkButton;
@property(retain, nonatomic) UIBarButtonItem *sketchButton; // @synthesize sketchButton=_sketchButton;
@property(retain, nonatomic) UIBarButtonItem *richSketchButton; // @synthesize richSketchButton=_richSketchButton;
@property(retain, nonatomic) UIView *floatingAttributeToolbarContainer; // @synthesize floatingAttributeToolbarContainer=_floatingAttributeToolbarContainer;
@property(retain, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property(retain, nonatomic) UIColor *barTintColor; // @synthesize barTintColor=_barTintColor;
- (void)_peripheralAvailabilityDidUpdate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)signatureCreationControllerDidCreateSignature:(id)arg1;
- (void)signaturesViewControllerContinueToCreateSignature:(id)arg1;
- (void)signaturesViewControllerEnterSignatureMode:(id)arg1;
- (void)signaturesViewControllerContinueToManageSignatures:(id)arg1;
- (void)signaturesViewControllerDidSelectSignature:(id)arg1;
- (void)signaturesViewControllerDidCancel:(id)arg1;
- (_Bool)popoverPresentationControllerShouldDismissPopover:(id)arg1;
- (void)dismissAttributeToolbarImmediately;
- (void)dismissAttributeToolbarForSelectedAnnotations;
- (void)showAttributeToolbarForSelectedAnnotations:(id)arg1 andToolMode:(unsigned long long)arg2;
- (void)_layoutAttributeContainer;
- (void)_setupPassthroughViewsForViewController:(id)arg1;
- (void)_dismissCurrentlyPresentedPopoverAnimated:(_Bool)arg1 withCompletion:(id /* block */)arg2;
- (void)_showColorPickerPopover:(id)arg1;
- (void)_showTextStylePopover:(id)arg1;
- (void)_showLineStylePopover:(id)arg1;
- (void)_showSignaturesPopover:(id)arg1;
- (void)dismissPresentedPopovers;
- (_Bool)isPresentingPopovers;
- (_Bool)_validateUndoButton;
- (id)_buildUndoAlertController;
- (void)_showUndoAlert:(id)arg1;
- (void)_undoAllButtonAction:(id)arg1;
- (void)_redoButtonAction:(id)arg1;
- (void)_undoButtonAction:(id)arg1;
- (void)_undoLongPressAction:(id)arg1;
- (void)_undoManagerNotification:(id)arg1;
- (_Bool)isPresentingPopover;
- (long long)_attributeTagForCurrentSelectionState;
@property(readonly, nonatomic) double visibleHeightOfAttributeBar;
@property(readonly, nonatomic) double heightIncludingAdditionalVisibleBars;
- (id)_doodleModeToolbarImage;
- (id)_createNewCustomViewToolbarButtonWithImage:(id)arg1 target:(id)arg2 selector:(SEL)arg3;
- (id)_createNewColorPickerToolbarButtonWithTarget:(id)arg1 selector:(SEL)arg2;
- (id)_createNewToggleToolbarButtonWithImage:(id)arg1 tag:(long long)arg2 target:(id)arg3 selector:(SEL)arg4 autoUpdatesColor:(_Bool)arg5;
- (id)_toolbarButtonItemOfType:(unsigned long long)arg1;
- (void)_deleteSelectedItems:(id)arg1;
- (id)_barButtonForToolbarType:(unsigned long long)arg1;
- (void)syncUIToSelectedColor;
- (void)setStrokeColorUIDisplayToColor:(id)arg1;
- (void)setFillColorUIDisplayToColor:(id)arg1;
- (void)revalidateItems;
- (void)_updateToggleButton:(id)arg1 withTraitCollection:(id)arg2;
- (void)_layoutToolbarForTraitCollection:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_buildBasicItems;
- (void)loadView;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (unsigned long long)_workaroundToolbarPopoverPositioningBug26744300;
- (_Bool)_legacyDoodlesEnabled;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

