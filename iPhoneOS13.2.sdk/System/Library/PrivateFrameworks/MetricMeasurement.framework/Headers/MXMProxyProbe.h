//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MetricMeasurement/MXMProbe.h>



@class MXMProxyMetric;

@interface MXMProxyProbe : MXMProbe <NSSecureCoding>
{
    MXMProxyMetric *_proxyMetric;
}

+ (_Bool)supportsSecureCoding;
@property(readonly) MXMProxyMetric *proxyMetric; // @synthesize proxyMetric=_proxyMetric;
- (id)sampleWithTimeout:(double)arg1 stopReason:(unsigned long long *)arg2;
- (void)updateNowUntilStoppedWithUpdateHandler:(id /* block */)arg1 stopHandler:(id /* block */)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProxyMetric:(id)arg1;

@end

