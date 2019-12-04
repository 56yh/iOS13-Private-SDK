//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CSBatteryChargingView, NSMutableSet, SBLockScreenDeviceInformationTextView, SBLoginAppContainerOverlayWrapperView, _UILegibilitySettings;

@interface SBLoginAppContainerView : UIView
{
    NSMutableSet *_contentHiddenRequesters;
    UIView *_contentView;
    CSBatteryChargingView *_batteryChargingView;
    SBLoginAppContainerOverlayWrapperView *_thermalWarningView;
    SBLockScreenDeviceInformationTextView *_deviceInformationTextView;
    UIView *_pluginView;
    _UILegibilitySettings *_legibilitySettings;
}

@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(retain, nonatomic) UIView *pluginView; // @synthesize pluginView=_pluginView;
@property(retain, nonatomic) SBLockScreenDeviceInformationTextView *deviceInformationTextView; // @synthesize deviceInformationTextView=_deviceInformationTextView;
@property(retain, nonatomic) SBLoginAppContainerOverlayWrapperView *thermalWarningView; // @synthesize thermalWarningView=_thermalWarningView;
@property(retain, nonatomic) CSBatteryChargingView *batteryChargingView; // @synthesize batteryChargingView=_batteryChargingView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void)_showOrHidePluginViewAppropriately;
- (void)setContentHidden:(_Bool)arg1 forRequester:(id)arg2;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

