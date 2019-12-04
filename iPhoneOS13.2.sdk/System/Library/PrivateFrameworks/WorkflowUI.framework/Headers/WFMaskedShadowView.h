//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <WorkflowUI/WFActionEventObserver-Protocol.h>

@class CAShapeLayer, NSString, UIColor, WFAction;

@interface WFMaskedShadowView : UIView <WFActionEventObserver>
{
    _Bool _attributesChanged;
    _Bool _actionRunning;
    long long _mode;
    double _cornerRadius;
    UIColor *_shadowColor;
    UIColor *_runningShadowColor;
    UIColor *_borderColor;
    double _borderWidth;
    CAShapeLayer *_borderLayer;
    WFAction *_action;
}

@property(nonatomic) __weak WFAction *action; // @synthesize action=_action;
@property(nonatomic) __weak CAShapeLayer *borderLayer; // @synthesize borderLayer=_borderLayer;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(retain, nonatomic) UIColor *runningShadowColor; // @synthesize runningShadowColor=_runningShadowColor;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor=_shadowColor;
@property(nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property(nonatomic) long long mode; // @synthesize mode=_mode;
- (void)actionRunningStateDidChange:(id)arg1;
- (void)layoutSubviews;
- (void)updateShadowColorAnimated:(_Bool)arg1;
- (void)applyAttributes;
- (void)attributesDidChange;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

