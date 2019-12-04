//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <InternalPreferences/UITextFieldDelegate-Protocol.h>

@class NSString, PSSpecifier;

__attribute__((visibility("hidden")))
@interface HangTracerController : PSListController <UITextFieldDelegate>
{
    float _hudThresholdMS;
    PSSpecifier *_hangtracerExplanation;
    PSSpecifier *_emptyGap;
    PSSpecifier *_hudTitle;
    PSSpecifier *_enabledHUD;
    PSSpecifier *_hudThresholdText;
    PSSpecifier *_hudThresholdSlider;
    PSSpecifier *_hudThresholdLabel;
}

- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)handleSliderTouchUpEvent:(id)arg1;
- (void)handleSliderChangedEvent:(id)arg1;
- (id)specifiers;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (id)hudThresholdText:(id)arg1;
- (id)hudThreshold:(id)arg1;
- (void)setHUDThreshold:(id)arg1 specifier:(id)arg2;
- (void)updateHUDThreshold:(float)arg1;
- (void)setHUDEnabled:(id)arg1 specifier:(id)arg2;
- (id)isEnabledHUD:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

