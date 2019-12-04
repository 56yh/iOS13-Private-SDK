//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ClockKit/CLKGaugeProvider.h>

@class NSDate, NSMutableDictionary;

@interface CLKTimeIntervalGaugeProvider : CLKGaugeProvider
{
    unsigned long long _nextUpdateToken;
    NSMutableDictionary *_updateHandlersByToken;
    struct NSNumber *_timerToken;
    _Bool _paused;
    float _startFillFraction;
    float _endFillFraction;
    NSDate *_startDate;
    NSDate *_endDate;
}

+ (_Bool)supportsSecureCoding;
+ (id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 startDate:(id)arg4 endDate:(id)arg5;
+ (id)gaugeProviderWithStyle:(long long)arg1 gaugeColors:(id)arg2 gaugeColorLocations:(id)arg3 startDate:(id)arg4 startFillFraction:(float)arg5 endDate:(id)arg6 endFillFraction:(float)arg7;
@property(nonatomic) float endFillFraction; // @synthesize endFillFraction=_endFillFraction;
@property(nonatomic) float startFillFraction; // @synthesize startFillFraction=_startFillFraction;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (void)validate;
- (id)JSONObjectRepresentation;
- (id)initWithJSONObjectRepresentation:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_update;
- (void)_maybeStartOrStopUpdates;
- (void)stopUpdatesForToken:(struct NSNumber *)arg1;
- (struct NSNumber *)startUpdatesWithHandler:(id /* block */)arg1;
- (double)progressFractionForNow:(id)arg1;
- (_Bool)needsTimerUpdates;
- (_Bool)paused;
- (void)setPaused:(_Bool)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

