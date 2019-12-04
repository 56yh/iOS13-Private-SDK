//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet, UIView;

@interface SKUIFocusedTouchGestureRecognizer : UIGestureRecognizer
{
    NSMutableSet *_activeTouches;
    _Bool _didTouchOutside;
    UIView *_focusedView;
    struct UIEdgeInsets _touchAllowance;
}

@property(nonatomic) struct UIEdgeInsets touchAllowance; // @synthesize touchAllowance=_touchAllowance;
@property(readonly, nonatomic) UIView *focusedView; // @synthesize focusedView=_focusedView;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)reset;
- (id)initWithFocusedView:(id)arg1 touchAllowance:(struct UIEdgeInsets)arg2;

@end

