//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

#import <SpringBoard/UITextFieldDelegate-Protocol.h>

@class NSString;

@interface SBPasscodeAlertItem : SBAlertItem <UITextFieldDelegate>
{
    int _mode;
    int _unlockScreenType;
    int _simplePasscodeType;
    NSString *_errorString;
    _Bool _hasEmergencyCall;
    _Bool _alreadySubmittedPassword;
}

- (void)didEndCall;
- (void)_setErrorString:(id)arg1;
- (_Bool)shouldShowInLockScreen;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)configureTextField:(id)arg1;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)_clearAlertController;
- (void)makeEmergencyCall;
- (void)submitPassword;
- (void)dealloc;
- (id)initWithPasscodeMode:(int)arg1 unlockScreenType:(int)arg2 simplePasscodeType:(int)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

