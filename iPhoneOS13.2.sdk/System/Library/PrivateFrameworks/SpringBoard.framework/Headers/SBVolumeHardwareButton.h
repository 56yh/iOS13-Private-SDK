//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/SBPressPrecedenceArbiter-Protocol.h>
#import <SpringBoard/UIGestureRecognizerDelegate-Protocol.h>

@class NSHashTable, NSString, SBPressGestureRecognizer, SBPressSequenceObserver, SBVolumeHardwareButtonActions, UIGestureRecognizer;

@interface SBVolumeHardwareButton : NSObject <UIGestureRecognizerDelegate, SBPressPrecedenceArbiter>
{
    unsigned long long _volumeUpAggdStartTime;
    unsigned long long _volumeDownAggdStartTime;
    long long _homeButtonType;
    SBPressGestureRecognizer *_volumeIncreaseButtonPressGestureRecognizer;
    SBPressGestureRecognizer *_volumeDecreaseButtonPressGestureRecognizer;
    UIGestureRecognizer *_screenshotGestureRecognizer;
    UIGestureRecognizer *_shutdownGestureRecognizer;
    NSHashTable *_volumePressBandits;
    SBPressSequenceObserver *_volumeIncreaseSequenceObserver;
    SBPressSequenceObserver *_volumeDecreaseSequenceObserver;
    SBVolumeHardwareButtonActions *_buttonActions;
}

@property(readonly, nonatomic) SBVolumeHardwareButtonActions *buttonActions; // @synthesize buttonActions=_buttonActions;
@property(readonly, nonatomic) SBPressSequenceObserver *volumeDecreaseSequenceObserver; // @synthesize volumeDecreaseSequenceObserver=_volumeDecreaseSequenceObserver;
@property(readonly, nonatomic) SBPressSequenceObserver *volumeIncreaseSequenceObserver; // @synthesize volumeIncreaseSequenceObserver=_volumeIncreaseSequenceObserver;
@property(nonatomic) __weak NSHashTable *volumePressBandits; // @synthesize volumePressBandits=_volumePressBandits;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)preemptablePressGestureRecognizers;
- (void)_aggdLogVolumeDecreaseButtonDown:(_Bool)arg1;
- (void)_aggdLogVolumeIncreaseButtonDown:(_Bool)arg1;
- (void)_logVolumeButtonWithObserver:(id)arg1 down:(_Bool)arg2;
- (void)volumeDecreasePress:(id)arg1;
- (void)volumeIncreasePress:(id)arg1;
- (void)_createGestureRecognizers;
- (void)cancelVolumePress;
- (void)removeVolumePressBandit:(id)arg1;
- (void)addVolumePressBandit:(id)arg1;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 shutdownGestureRecognizer:(id)arg2 homeButtonType:(long long)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

