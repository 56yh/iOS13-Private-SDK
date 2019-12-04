//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIAccessibilityHUDGestureDelegateInternal-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>

@class NSString, UIGestureRecognizer, UIView;
@protocol UILargeContentViewerInteractionDelegate;

@interface UILargeContentViewerInteraction : NSObject <UIAccessibilityHUDGestureDelegateInternal, UIInteraction>
{
    UIView *_view;
    id <UILargeContentViewerInteractionDelegate> _delegate;
}

+ (_Bool)isEnabled;
+ (void)initialize;
@property(readonly, nonatomic) __weak id <UILargeContentViewerInteractionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)_viewControllerForAccessibilityHUDGestureManager:(id)arg1;
- (_Bool)_accessibilityHUDGestureManager:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_accessibilityHUDGestureManager:(id)arg1 gestureLiftedAtPoint:(struct CGPoint)arg2;
- (id)_accessibilityHUDGestureManager:(id)arg1 HUDItemForPoint:(struct CGPoint)arg2;
- (id)_itemAtPoint:(struct CGPoint)arg1;
- (void)didMoveToView:(id)arg1;
- (void)willMoveToView:(id)arg1;
@property(readonly, nonatomic) __weak UIView *view;
@property(readonly, nonatomic) UIGestureRecognizer *gestureRecognizerForExclusionRelationship;
- (id)init;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

