//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/PKPaletteViewDelegate-Protocol.h>
#import <PencilKit/UIInputResponderControllerVisibilityObserver-Protocol.h>

@class NSHashTable, NSString, PKPaletteHostView, PKPaletteViewInteraction, PKTool, UIResponder;
@protocol PKToolPickerPrivateDelegate;

@interface PKToolPicker : NSObject <PKPaletteViewDelegate, UIInputResponderControllerVisibilityObserver>
{
    _Bool __paletteWasCompact;
    NSHashTable *__observers;
    NSHashTable *__firstRespondersForVisibleUI;
    PKPaletteViewInteraction *__interaction;
    UIResponder *__previousFirstResponder;
    id <PKToolPickerPrivateDelegate> __delegate;
}

+ (id)sharedToolPickerForWindow:(id)arg1;
+ (id)activeToolPickerForWindow:(id)arg1;
@property(nonatomic) __weak id <PKToolPickerPrivateDelegate> _delegate; // @synthesize _delegate=__delegate;
@property(nonatomic) __weak UIResponder *_previousFirstResponder; // @synthesize _previousFirstResponder=__previousFirstResponder;
@property(nonatomic) _Bool _paletteWasCompact; // @synthesize _paletteWasCompact=__paletteWasCompact;
@property(retain, nonatomic) PKPaletteViewInteraction *_interaction; // @synthesize _interaction=__interaction;
@property(retain, nonatomic) NSHashTable *_firstRespondersForVisibleUI; // @synthesize _firstRespondersForVisibleUI=__firstRespondersForVisibleUI;
@property(retain, nonatomic) NSHashTable *_observers; // @synthesize _observers=__observers;
- (_Bool)_internalClassWantsToolPickerVisibleForResponder:(id)arg1;
- (id)_internalClassesAcceptingFirstResponder;
- (void)_updatePaletteTraitCollection:(id)arg1;
@property(readonly, nonatomic) PKPaletteHostView *_paletteHostView;
@property(nonatomic, getter=_isBackgroundMaterialUpdatingPaused, setter=_setBackgroundMaterialUpdatingPaused:) _Bool _backgroundMaterialUpdatingPaused;
- (_Bool)_wantsPaletteToStayVisibleForPopovers;
- (void)inputResponderController:(id)arg1 inputViewSetVisibilityDidChange:(_Bool)arg2 includedReset:(_Bool)arg3;
- (id)paletteViewColorPickerPopoverPresentationSourceView:(id)arg1;
- (struct CGRect)paletteViewColorPickerPopoverPresentationSourceRect:(id)arg1;
- (void)paletteView:(id)arg1 didChangeColor:(id)arg2;
- (void)paletteViewDidChangePosition:(id)arg1;
- (void)paletteViewDidToggleRuler:(id)arg1;
- (void)paletteViewSelectedToolInkDidChange:(id)arg1;
- (id)paletteViewUndoManager:(id)arg1;
- (id)initWithInteraction:(id)arg1;
- (struct CGRect)frameObscuredInView:(id)arg1;
@property(nonatomic) long long colorUserInterfaceStyle;
@property(nonatomic) long long overrideUserInterfaceStyle;
- (void)_setVisible:(_Bool)arg1;
@property(readonly, nonatomic) _Bool isVisible;
@property(nonatomic, getter=isRulerActive) _Bool rulerActive;
@property(retain, nonatomic) PKTool *selectedTool;
- (id)_paletteView;
- (void)_updateVisibilityForFirstResponder:(id)arg1;
- (void)setVisible:(_Bool)arg1 forFirstResponder:(id)arg2;
- (void)_saveStateIfNecessary;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (_Bool)_currentFirstResponderWantsToolPickerVisible;
- (id)_currentFirstResponder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

