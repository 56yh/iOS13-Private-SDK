//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer, NSString, UIColor, UILabel;

@interface HUColorSwatchView : UIView
{
    _Bool _labelHidden;
    unsigned long long _selectionState;
    NSString *_text;
    CAShapeLayer *_circleLayer;
    CAShapeLayer *_selectedCircleLayer;
    CAShapeLayer *_selectedCircleInnerLayer;
    CAShapeLayer *_selectedCircleOuterLayer;
    UILabel *_label;
}

+ (Class)layerClass;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) CAShapeLayer *selectedCircleOuterLayer; // @synthesize selectedCircleOuterLayer=_selectedCircleOuterLayer;
@property(retain, nonatomic) CAShapeLayer *selectedCircleInnerLayer; // @synthesize selectedCircleInnerLayer=_selectedCircleInnerLayer;
@property(retain, nonatomic) CAShapeLayer *selectedCircleLayer; // @synthesize selectedCircleLayer=_selectedCircleLayer;
@property(retain, nonatomic) CAShapeLayer *circleLayer; // @synthesize circleLayer=_circleLayer;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) _Bool labelHidden; // @synthesize labelHidden=_labelHidden;
@property(nonatomic) unsigned long long selectionState; // @synthesize selectionState=_selectionState;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)layoutSubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)_updateTextColor;
- (void)_updateLayout;
@property(retain, nonatomic) UIColor *color;
- (id)initWithFrame:(struct CGRect)arg1 text:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

