//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <HomeUI/HUQuickControlInteractiveView-Protocol.h>

@class HUQuickControlViewProfile, MTMaterialView;
@protocol HUQuickControlViewInteractionDelegate;

__attribute__((visibility("hidden")))
@interface _HUQuickControlControllableHostView : UIView <HUQuickControlInteractiveView>
{
    BOOL _userInteractionActive;
    HUQuickControlViewProfile *_profile;
    id <HUQuickControlViewInteractionDelegate> _interactionDelegate;
    id _value;
    MTMaterialView *_backgroundView;
}

@property(retain, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic, getter=isUserInteractionActive) BOOL userInteractionActive; // @synthesize userInteractionActive=_userInteractionActive;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(nonatomic) __weak id <HUQuickControlViewInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(copy, nonatomic) HUQuickControlViewProfile *profile; // @synthesize profile=_profile;
// - (void).cxx_destruct;
- (void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1;
- (id)intrinsicSizeDescriptorForControlSize:(NSUInteger)arg1;
- (id)initWithProfile:(id)arg1;

@end

