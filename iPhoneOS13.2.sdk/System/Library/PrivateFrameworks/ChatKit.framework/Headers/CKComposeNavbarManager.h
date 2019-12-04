//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CKComposeNavbarCanvasViewController, CKComposeNavbarManagerContentView, CKNavbarCanvasViewController, UIButton, UIView;

__attribute__((visibility("hidden")))
@interface CKComposeNavbarManager : NSObject
{
    CKComposeNavbarManagerContentView *_contentView;
    CKComposeNavbarCanvasViewController *_defaultNavbarCanvasViewController;
    CKNavbarCanvasViewController *_avatarNavbarCanvasViewController;
    UIView *_customStatusBackgroundView;
}

@property(retain, nonatomic) UIView *customStatusBackgroundView; // @synthesize customStatusBackgroundView=_customStatusBackgroundView;
@property(retain, nonatomic) CKNavbarCanvasViewController *avatarNavbarCanvasViewController; // @synthesize avatarNavbarCanvasViewController=_avatarNavbarCanvasViewController;
@property(retain, nonatomic) CKComposeNavbarCanvasViewController *defaultNavbarCanvasViewController; // @synthesize defaultNavbarCanvasViewController=_defaultNavbarCanvasViewController;
@property(retain, nonatomic) CKComposeNavbarManagerContentView *contentView; // @synthesize contentView=_contentView;
- (void)commitTransitionAnimationWithConversation:(id)arg1 shouldShowBackButtonView:(_Bool)arg2;
- (void)_setupAvatarNavBarViewControllerWithConversation:(id)arg1 shouldShowBackButtonView:(_Bool)arg2;
- (void)_setupDefaultNavbarCanvasViewController;
- (void)setCanvasViewControllerDelegate:(id)arg1;
@property(readonly, nonatomic) UIButton *cancelButton;
- (void)updateTitle:(id)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)init;

@end

