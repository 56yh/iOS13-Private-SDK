//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetricMeasurement/MXMProbe.h>

@class MXMMutableSampleData, NSThread;

@interface MXMSystemProbe : MXMProbe
{
    MXMMutableSampleData *_data;
    NSThread *_updateThread;
}

+ (id)probe;
- (void)_pollSystemBatteryWithData:(id)arg1;
- (void)_pollSystemThermalsWithData:(id)arg1;
- (void)_pollSystemLoadInformationWithData:(id)arg1;
- (void)_pollProcessorLoadInformationWithData:(id)arg1;
- (void)_pollSystemHostProcessorInfoWithData:(id)arg1;
- (void)_pollSystemMainBody;
- (void)_gatherConstantSystemProperties;
- (void)_pollSystemLoop;
- (void)_stopUpdates;
- (void)_beginUpdates;
- (void)_prepareData;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 hostInfo:(struct vm_statistics64 *)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 loadInfo:(struct processor_set_load_info *)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 cpuInfo:(struct processor_basic_info *)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 cpuLoad:(struct processor_cpu_load_info *)arg3;
- (void)_buildData:(id)arg1 timestamp:(unsigned long long)arg2 processorCount:(unsigned int)arg3;
- (id)init;

@end

