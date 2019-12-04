//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIInputViewController, UIKBRenderConfig, UIKeyboard, UIResponder, UIView;

__attribute__((visibility("hidden")))
@interface UIInputViewSet : NSObject
{
    _Bool _isSplit;
    double _splitHeightDelta;
    UIResponder *_restorableResponder;
    UIKBRenderConfig *_restorableRenderConfig;
    UIResponder *_accessoryViewNextResponder;
    _Bool _restoreUsingBecomeFirstResponder;
    UIView *_inputView;
    UIView *_inputAccessoryView;
    UIView *_inputAssistantView;
    UIInputViewController *_inputViewController;
    UIInputViewController *_accessoryViewController;
    UIInputViewController *_assistantViewController;
    _Bool _isNullInputView;
    _Bool _isCustomInputView;
    _Bool _isRemoteKeyboard;
    struct CGRect _inputAssistantViewBounds;
}

+ (id)emptyInputSet;
+ (id)inputSetWithOriginalInputSet:(id)arg1 duplicateInputView:(_Bool)arg2 duplicateInputAccessoryView:(_Bool)arg3 duplicateInputAssistantView:(_Bool)arg4;
+ (id)inputSetWithPlaceholderAndAccessoryView:(id)arg1;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1;
+ (id)inputSetWithKeyboardAndAccessoryView:(id)arg1 assistantView:(id)arg2;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2;
+ (id)inputSetWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3;
@property(nonatomic) _Bool isRemoteKeyboard; // @synthesize isRemoteKeyboard=_isRemoteKeyboard;
@property(nonatomic) _Bool isCustomInputView; // @synthesize isCustomInputView=_isCustomInputView;
@property(readonly, nonatomic) struct CGRect inputAssistantViewBounds; // @synthesize inputAssistantViewBounds=_inputAssistantViewBounds;
@property(readonly, nonatomic) _Bool isNullInputView; // @synthesize isNullInputView=_isNullInputView;
@property(nonatomic) __weak UIResponder *accessoryViewNextResponder; // @synthesize accessoryViewNextResponder=_accessoryViewNextResponder;
@property(retain, nonatomic) UIKBRenderConfig *restorableRenderConfig; // @synthesize restorableRenderConfig=_restorableRenderConfig;
@property(nonatomic) __weak UIResponder *restorableResponder; // @synthesize restorableResponder=_restorableResponder;
@property(nonatomic) double splitHeightDelta; // @synthesize splitHeightDelta=_splitHeightDelta;
@property(retain, nonatomic) UIInputViewController *accessoryViewController; // @synthesize accessoryViewController=_accessoryViewController;
@property(retain, nonatomic) UIInputViewController *assistantViewController; // @synthesize assistantViewController=_assistantViewController;
@property(retain, nonatomic) UIInputViewController *inputViewController; // @synthesize inputViewController=_inputViewController;
@property(retain, nonatomic) UIView *inputAssistantView; // @synthesize inputAssistantView=_inputAssistantView;
@property(retain, nonatomic) UIView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) UIView *inputView; // @synthesize inputView=_inputView;
- (void)_setSplitProgress:(double)arg1;
- (void)_endSplitTransitionIfNeeded;
- (void)_beginSplitTransitionIfNeeded;
- (_Bool)_accessorySuppressesShadow;
- (id)_splittableInputAccessoryView;
- (id)_themableInputAccessoryView;
- (_Bool)setAccessoryViewVisible:(_Bool)arg1 delay:(double)arg2;
- (_Bool)hierarchyContainsView:(id)arg1;
- (void)refreshPresentation;
- (struct CGRect)_rightInputViewSetFrame;
- (struct CGRect)_leftInputViewSetFrame;
@property(readonly, nonatomic) struct CGRect inputAccessoryViewBounds;
@property(readonly, nonatomic) struct CGRect inputViewBounds;
@property(readonly, nonatomic) _Bool _inputViewIsSplit;
@property(readonly, nonatomic) _Bool isSplit; // @synthesize isSplit=_isSplit;
@property(readonly, nonatomic) _Bool supportsSplit;
@property(readonly, nonatomic) _Bool isInputAccessoryViewPlaceholder;
@property(readonly, nonatomic) _Bool isInputAssistantViewPlaceholder;
@property(readonly, nonatomic) _Bool isInputViewPlaceholder;
@property(readonly, nonatomic) _Bool inputViewKeyboardCanSplit;
- (_Bool)_inputViewSetSupportsSplit;
- (_Bool)_actLikeInputAccessoryViewSupportsSplit;
- (_Bool)_inputAccessoryViewSupportsSplit;
- (_Bool)_inputViewSupportsSplit;
- (_Bool)_isFullscreen;
- (_Bool)__isCKAccessoryView;
- (_Bool)inSyncWithOrientation:(long long)arg1 forKeyboard:(id)arg2;
- (long long)keyboardOrientation:(id)arg1;
- (id)description;
- (_Bool)isStrictSupersetOfViewSet:(id)arg1;
- (_Bool)containsResponder:(id)arg1;
@property(readonly, nonatomic) _Bool visible;
- (_Bool)_inputViewIsVisible;
@property(readonly, nonatomic) _Bool usesKeyClicks;
- (_Bool)isEqual:(id)arg1;
- (_Bool)containsView:(id)arg1;
@property(readonly, nonatomic, getter=isEmpty) _Bool empty;
@property(nonatomic) _Bool restoreUsingBecomeFirstResponder;
- (void)_forceRestoreUsingBecomeFirstResponder:(_Bool)arg1;
@property(readonly, nonatomic) UIView *splitExemptSubview;
@property(readonly, nonatomic) UIView *layeringView;
- (void)_setRenderConfig:(id)arg1;
- (id)normalizePlaceholders;
- (id)inputSetWithInputAccessoryViewFromInputSet:(id)arg1;
- (id)inputSetWithInputAccessoryViewOnly;
- (void)setKeyboardAssistantBar:(id)arg1;
- (void)inheritNullState:(id)arg1;
- (void)dealloc;
- (id)initWithInputView:(id)arg1 accessoryView:(id)arg2 assistantView:(id)arg3 isKeyboard:(_Bool)arg4;
@property(readonly, nonatomic) UIKeyboard *keyboard;
- (_Bool)_isKeyboard;
- (_Bool)canAnimateToInputViewSet:(id)arg1;

@end

