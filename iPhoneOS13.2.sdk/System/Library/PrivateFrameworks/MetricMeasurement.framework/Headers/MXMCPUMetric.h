//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetricMeasurement/MXMMetric.h>

@class MXMInstrument, NSNumber, NSString;

@interface MXMCPUMetric : MXMMetric
{
}

+ (id)instrumentThread;
+ (id)currentProcess;
- (_Bool)harvestData:(id *)arg1 error:(id *)arg2;
- (id)_constructProbe;
- (_Bool)_shouldConstructProbe;
@property(readonly, nonatomic) NSNumber *processIdentifier;
@property(readonly, nonatomic) NSString *processName;
- (id)initWithIdentifier:(id)arg1 filter:(id)arg2;
- (id)initWithBundleIdentifier:(id)arg1;
- (id)initWithProcessName:(id)arg1;
- (id)initWithProcessIdentifier:(int)arg1;

// Remaining properties
@property(readonly, copy, nonatomic) MXMInstrument *instrument; // @dynamic instrument;

@end

