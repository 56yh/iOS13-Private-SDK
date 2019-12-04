//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDateComponents, NSMutableDictionary, PETDistributionEventTracker, PETScalarEventTracker;

@interface WGWidgetEventTracker : NSObject
{
    NSDateComponents *_previousTodayViewAppearDateComponents;
    NSDate *_previousTodayViewAppearanceDate;
    NSMutableDictionary *_previousWidgetAppearanceDateByIdentifier;
    unsigned long long _location;
    PETDistributionEventTracker *_widgetLingerTracker;
    PETScalarEventTracker *_widgetShownTracker;
    PETScalarEventTracker *_widgetStatusTracker;
    PETDistributionEventTracker *_widgetListLingerTracker;
    PETScalarEventTracker *_widgetToggleContractTracker;
    PETScalarEventTracker *_widgetToggleExpandTracker;
    PETScalarEventTracker *_widgetListShownTracker;
    PETScalarEventTracker *_widgetToggleContract;
    PETScalarEventTracker *_widgetToggleExpand;
    _Bool _authenticated;
}

+ (id)sharedInstance;
- (void)_trackWidgetListShownEventWithLocation:(unsigned long long)arg1 authenticated:(_Bool)arg2;
- (id)widgetListShownTracker;
- (void)_trackWidgetListLingerEventWithLocation:(unsigned long long)arg1 authenticated:(_Bool)arg2 duration:(double)arg3;
- (id)_widgetListLingerTracker;
- (void)_trackWidgetExpandEventForWidget:(id)arg1;
- (id)widgetToggleExpandTracker;
- (void)_trackWidgetContractEventForWidget:(id)arg1;
- (id)_widgetToggleContractTracker;
- (void)_trackWidgetStatusEventForWidget:(id)arg1 withStatus:(_Bool)arg2;
- (id)_widgetStatusTracker;
- (void)_trackWidgetShownEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(_Bool)arg3 mode:(long long)arg4;
- (id)_widgetShownTracker;
- (void)_trackWidgetLingerEventForWidget:(id)arg1 withLocation:(unsigned long long)arg2 authenticated:(_Bool)arg3 mode:(long long)arg4 duration:(double)arg5;
- (id)_widgetLingerTracker;
- (id)_widgetProperty;
- (id)_statusProperty;
- (id)_modeProperty;
- (id)_locationProperty;
- (id)_authenticationProperty;
- (void)widget:(id)arg1 didChangeUserSpecifiedDisplayMode:(long long)arg2;
- (void)widget:(id)arg1 didDisappearInMode:(long long)arg2;
- (void)widget:(id)arg1 didAppearInMode:(long long)arg2;
- (void)widgetViewDidDisappearWithWidget:(id)arg1;
- (void)widgetViewDidAppearWithWidget:(id)arg1;
- (void)widgetListDidDisappearAtLocation:(unsigned long long)arg1;
- (void)widgetListDidAppearAtLocation:(unsigned long long)arg1 withEnabledWidgets:(id)arg2 disabledWidgets:(id)arg3;
- (void)_lockedStateDidChange;
- (void)dealloc;
- (id)init;

@end

