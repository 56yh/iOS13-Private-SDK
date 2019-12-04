//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Preferences/PSListController.h>

#import <InternalPreferences/UITextFieldDelegate-Protocol.h>

@class NSObject, NSString, PSSpecifier;
@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface DeadlockMakerController : PSListController <UITextFieldDelegate>
{
    _Bool _enabled;
    float _priority;
    float _runDuration;
    NSObject<OS_xpc_object> *_connection;
    PSSpecifier *_textSpec;
    PSSpecifier *_prioritySlider;
    PSSpecifier *_priorityLabel;
    PSSpecifier *_runDurationText;
    PSSpecifier *_runDurationSlider;
    PSSpecifier *_runDurationLabel;
    PSSpecifier *_startNowButton;
}

- (void)launchSpinForeverD:(id)arg1;
- (void)triggerTimeout;
- (_Bool)startConnectionIfNeeded;
- (void)stopConnectionIfNeeded;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)handleSliderTouchUpEvent:(id)arg1;
- (void)handleSliderChangedEvent:(id)arg1;
- (id)specifiers;
- (id)runDurationText:(id)arg1;
- (id)runDuration:(id)arg1;
- (void)setRunDuration:(id)arg1 specifier:(id)arg2;
- (id)priorityText:(id)arg1;
- (id)priority:(id)arg1;
- (void)setPriority:(id)arg1 specifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

