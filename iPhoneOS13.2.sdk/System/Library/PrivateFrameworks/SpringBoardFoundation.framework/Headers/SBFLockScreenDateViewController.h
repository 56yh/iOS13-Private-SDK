//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <SpringBoardFoundation/PTSettingsKeyObserver-Protocol.h>

@class NSString, _UILegibilitySettings;
@protocol SBFDateProviding;

@interface SBFLockScreenDateViewController : UIViewController <PTSettingsKeyObserver>
{
    id _timerToken;
    _Bool _isVisible;
    id _minuteHandlerToken;
    _Bool _disablesUpdates;
    _Bool _screenOff;
    _UILegibilitySettings *_legibilitySettings;
    id <SBFDateProviding> _dateProvider;
}

@property(retain, nonatomic) id <SBFDateProviding> dateProvider; // @synthesize dateProvider=_dateProvider;
@property(retain, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property(nonatomic) _Bool screenOff; // @synthesize screenOff=_screenOff;
- (void)_startUpdateTimer;
- (void)_stopUpdateTimer;
- (void)_handleTimeZoneChange;
- (void)_updateView;
- (void)_updateFormat;
- (void)_updateFormatIfEnabled;
- (void)_addObservers;
- (void)_updateLegibilityStrength;
- (void)_updateState;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (_Bool)_canShowWhileLocked;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)willMoveToParentViewController:(id)arg1;
- (void)setView:(id)arg1;
- (void)loadView;
- (void)updateTimeNow;
- (void)setCustomSubtitleView:(id)arg1;
- (void)setContentAlpha:(double)arg1 withSubtitleVisible:(_Bool)arg2;
@property(nonatomic, getter=isSubtitleHidden) _Bool subtitleHidden;
- (id)dateViewIfExists;
- (id)dateView;
@property(readonly, copy) NSString *description;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

