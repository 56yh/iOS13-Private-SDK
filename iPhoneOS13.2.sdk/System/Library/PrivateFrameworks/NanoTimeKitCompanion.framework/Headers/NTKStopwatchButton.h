//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class CLKDevice, NTKColoringImageView, UIColor, UIView;

@interface NTKStopwatchButton : UIControl
{
    CLKDevice *_device;
    UIView *_innerView;
    NTKColoringImageView *_glyphView;
    UIColor *_glyphColor;
    UIColor *_glyphBackgroundColor;
    struct UIEdgeInsets _touchEdgeInsets;
}

@property(retain, nonatomic) UIColor *glyphBackgroundColor; // @synthesize glyphBackgroundColor=_glyphBackgroundColor;
@property(retain, nonatomic) UIColor *glyphColor; // @synthesize glyphColor=_glyphColor;
@property(nonatomic) struct UIEdgeInsets touchEdgeInsets; // @synthesize touchEdgeInsets=_touchEdgeInsets;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 forDevice:(id)arg2;
- (_Bool)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;

@end

