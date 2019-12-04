//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UserNotificationsUIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UserNotificationsUIKit/_UIClickInteractionDelegate-Protocol.h>

@class MTMaterialView, NCClickInteractionPresentedControl, NCTouchEaterGestureRecognizer, NSString, UIView, _UIClickInteraction;
@protocol NCClickInteractionPresenterDelegate;

@interface NCClickInteractionPresenter : NSObject <UIGestureRecognizerDelegate, _UIClickInteractionDelegate>
{
    _Bool _presented;
    _Bool _hinting;
    UIView *_sourceView;
    NSString *_groupName;
    long long _materialRecipe;
    id <NCClickInteractionPresenterDelegate> _delegate;
    long long _overrideUserInterfaceStyle;
    _UIClickInteraction *_clickInteraction;
    UIView *_containerView;
    UIView *_portalView;
    NCTouchEaterGestureRecognizer *_touchEater;
    NCClickInteractionPresentedControl *_presentedControl;
    MTMaterialView *_backgroundMaterialView;
    struct CGRect _sourceViewVisibleRect;
}

@property(nonatomic, getter=_isHinting, setter=_setHinting:) _Bool hinting; // @synthesize hinting=_hinting;
@property(readonly, nonatomic, getter=_backgroundMaterialView) MTMaterialView *backgroundMaterialView; // @synthesize backgroundMaterialView=_backgroundMaterialView;
@property(readonly, nonatomic, getter=_presentedControl) NCClickInteractionPresentedControl *presentedControl; // @synthesize presentedControl=_presentedControl;
@property(readonly, nonatomic, getter=_touchEater) __weak NCTouchEaterGestureRecognizer *touchEater; // @synthesize touchEater=_touchEater;
@property(readonly, nonatomic, getter=_portalView) UIView *portalView; // @synthesize portalView=_portalView;
@property(readonly, nonatomic, getter=_containerView) UIView *containerView; // @synthesize containerView=_containerView;
@property(readonly, nonatomic, getter=_clickInteraction) _UIClickInteraction *clickInteraction; // @synthesize clickInteraction=_clickInteraction;
@property(nonatomic) long long overrideUserInterfaceStyle; // @synthesize overrideUserInterfaceStyle=_overrideUserInterfaceStyle;
@property(nonatomic, getter=isPresented, setter=_setPresented:) _Bool presented; // @synthesize presented=_presented;
@property(nonatomic) __weak id <NCClickInteractionPresenterDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) long long materialRecipe; // @synthesize materialRecipe=_materialRecipe;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(nonatomic) struct CGRect sourceViewVisibleRect; // @synthesize sourceViewVisibleRect=_sourceViewVisibleRect;
@property(readonly, nonatomic) __weak UIView *sourceView; // @synthesize sourceView=_sourceView;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)_handleEatenTouch:(id)arg1;
- (void)_tearDown;
- (void)_performCancel;
- (void)_performPresentation;
- (void)_animatePresentation:(_Bool)arg1 cancelled:(_Bool)arg2 completion:(id /* block */)arg3;
- (double)_frictionForTransitionPresentation:(_Bool)arg1 cancelled:(_Bool)arg2;
- (double)_tensionForTransitionPresentation:(_Bool)arg1 cancelled:(_Bool)arg2;
- (struct CGRect)_finalPresentedViewFrame;
- (struct CGRect)_initialPresentedViewFrame;
- (void)_setUpSubviews;
- (void)_setUpPresentedControl;
- (void)_configurePresentedControlIfNecessaryWithTitle:(id)arg1;
- (void)_setUpPortalView;
- (void)_configurePortalViewIfNecessary;
- (void)_setUpBackgroundMaterialView;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_setUpContainerView;
- (void)_configureContainerViewIfNecessary;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)clickInteractionDidEnd:(id)arg1;
- (void)clickInteractionDidClickUp:(id)arg1;
- (id)highlightEffectForClickInteraction:(id)arg1;
- (_Bool)clickInteractionShouldBegin:(id)arg1;
- (_Bool)dismissModalFullScreenIfNeeded;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
@property(readonly, copy, nonatomic) NSString *title;
- (void)dealloc;
- (id)initWithTitle:(id)arg1 sourceView:(id)arg2 materialRecipe:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

