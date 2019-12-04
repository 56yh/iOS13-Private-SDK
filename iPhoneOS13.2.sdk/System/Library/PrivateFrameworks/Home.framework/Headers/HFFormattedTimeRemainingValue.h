//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFDynamicFormattingValue-Protocol.h>
#import <Home/HFSynchronizedTimerObserver-Protocol.h>

@class NSDate, NSDateComponentsFormatter, NSMapTable, NSString;
@protocol HFStringGenerator;

@interface HFFormattedTimeRemainingValue : NSObject <HFSynchronizedTimerObserver, HFDynamicFormattingValue>
{
    NSMapTable *_observationBlocks;
    NSDate *_value;
    NSDateComponentsFormatter *_formatter;
    id <HFStringGenerator> _currentFormattedValue;
}

+ (id)valueWithRemainingDuration:(double)arg1 relativeToDate:(id)arg2;
+ (id)defaultFormatter;
@property(retain, nonatomic) id <HFStringGenerator> currentFormattedValue; // @synthesize currentFormattedValue=_currentFormattedValue;
@property(readonly, nonatomic) NSDateComponentsFormatter *formatter; // @synthesize formatter=_formatter;
@property(readonly, nonatomic) NSDate *value; // @synthesize value=_value;
- (void)countdownTimerDidFire:(id)arg1;
- (void)_stopTimer;
- (void)_updateTimerState;
- (id)observeFormattedValueChangesWithBlock:(id /* block */)arg1;
@property(readonly, nonatomic) NSMapTable *observationBlocks; // @synthesize observationBlocks=_observationBlocks;
- (id)_generateFormattedValue;
- (double)_timeRemaining;
- (id)initWithFireDate:(id)arg1 formatter:(id)arg2;
- (id)initWithFireDate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

