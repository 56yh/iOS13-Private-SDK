//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

#import <UIKitCore/UIKeyboardDockViewDelegate-Protocol.h>

@class NSString, UIButton, UIKeyboardDockItem, UIKeyboardDockView;

__attribute__((visibility("hidden")))
@interface UISystemKeyboardDockController : UIViewController <UIKeyboardDockViewDelegate>
{
    _Bool _dictationHasUsedServerManualEndpointing;
    _Bool _dictationUsingServerManualEndpointing;
    _Bool _isSuppressingDockItemTouch;
    UIKeyboardDockItem *_globeDockItem;
    UIKeyboardDockItem *_dictationDockItem;
    UIKeyboardDockItem *_keyboardDockItem;
    UIButton *_stopDictationButton;
    UIKeyboardDockView *_dockView;
}

@property(retain, nonatomic) UIKeyboardDockView *dockView; // @synthesize dockView=_dockView;
- (void)updateDockItemsVisibility;
- (void)keyboardDockView:(id)arg1 didPressDockItem:(id)arg2 withEvent:(id)arg3;
- (void)keyboardItemButtonWasTapped:(id)arg1 withEvent:(id)arg2;
- (void)globeItemButtonWasPressed:(id)arg1 withEvent:(id)arg2;
- (void)dictationItemButtonWasPressed:(id)arg1 withEvent:(id)arg2;
- (void)_dictationDidBeginNotification:(id)arg1;
- (void)setKeyboardDockItem;
- (void)viewDidLoad;
- (void)traitCollectionDidChange:(id)arg1;
- (void)loadView;
- (_Bool)_canShowWhileLocked;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

