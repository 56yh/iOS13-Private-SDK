//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UIFocusUpdateRequesting-Protocol.h>

@class NSString, UIFocusAnimationCoordinator, UIFocusSystem, UIWindow, _UIFocusInputDeviceInfo, _UIFocusItemInfo, _UIFocusMovementInfo, _UIFocusSearchInfo;

__attribute__((visibility("hidden")))
@interface _UIFocusMovementRequest : NSObject <_UIFocusUpdateRequesting>
{
    _Bool _shouldPerformHapticFeedback;
    UIFocusSystem *_focusSystem;
    _UIFocusInputDeviceInfo *_inputDeviceInfo;
    UIWindow *_window;
    _UIFocusItemInfo *_focusedItemInfo;
    _UIFocusMovementInfo *_movementInfo;
    _UIFocusSearchInfo *_searchInfo;
}

@property(retain, nonatomic) _UIFocusSearchInfo *searchInfo; // @synthesize searchInfo=_searchInfo;
@property(retain, nonatomic) _UIFocusMovementInfo *movementInfo; // @synthesize movementInfo=_movementInfo;
@property(retain, nonatomic) _UIFocusItemInfo *focusedItemInfo; // @synthesize focusedItemInfo=_focusedItemInfo;
@property(readonly, nonatomic) __weak UIWindow *window; // @synthesize window=_window;
@property(retain, nonatomic) _UIFocusInputDeviceInfo *inputDeviceInfo; // @synthesize inputDeviceInfo=_inputDeviceInfo;
@property(nonatomic) _Bool shouldPerformHapticFeedback; // @synthesize shouldPerformHapticFeedback=_shouldPerformHapticFeedback;
@property(readonly, nonatomic) __weak UIFocusSystem *focusSystem; // @synthesize focusSystem=_focusSystem;
@property(readonly, nonatomic) _Bool allowsFocusRestoration;
@property(readonly, nonatomic) _Bool allowsDeferral;
@property(readonly, nonatomic) _Bool allowsFocusingCurrentItem;
@property(readonly, nonatomic) _Bool requiresEnvironmentValidation;
@property(readonly, nonatomic) _Bool requiresNextFocusedItem;
@property(readonly, nonatomic) _Bool shouldPlayFocusSound;
@property(readonly, nonatomic) UIFocusAnimationCoordinator *animationCoordinator;
@property(readonly, nonatomic) _UIFocusMovementRequest *fallbackRequest;
- (id)_requestByRedirectingRequestToFocusSystem:(id)arg1;
- (id)initWithFocusSystem:(id)arg1 window:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

