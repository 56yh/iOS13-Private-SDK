//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface SearchUICheckView : UIView
{
    CAShapeLayer *_checkLayer;
}

@property(retain, nonatomic) CAShapeLayer *checkLayer; // @synthesize checkLayer=_checkLayer;
- (void)tlk_updateForAppearance:(id)arg1;
- (void)didMoveToWindow;
- (void)_dynamicUserInterfaceTraitDidChange;

@end

