//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface CLKUIWheelsOfTimeButton : UIButton
{
    struct UIEdgeInsets _touchEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets touchEdgeInsets; // @synthesize touchEdgeInsets=_touchEdgeInsets;
- (id)_createButtonImage:(struct __CFAttributedString *)arg1;
- (void)setButtonText:(id)arg1 selectedFont:(id)arg2 selectedTextColor:(id)arg3 unselectedFont:(id)arg4 unselectedTextColor:(id)arg5 kerning:(double)arg6;
- (struct __CFAttributedString *)_newAttributedString:(id)arg1 withFont:(id)arg2 usingKerning:(double)arg3 textColor:(id)arg4;
- (struct CGRect)_getMaxTextBounds;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end

