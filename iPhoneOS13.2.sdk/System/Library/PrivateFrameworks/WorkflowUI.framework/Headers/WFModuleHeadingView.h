//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class WFAction;

@interface WFModuleHeadingView : UIView
{
    WFAction *_accessibilityAnnouncementAction;
}

@property(nonatomic) __weak WFAction *accessibilityAnnouncementAction; // @synthesize accessibilityAnnouncementAction=_accessibilityAnnouncementAction;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityLabel;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)accessibilityActivate;

@end

