//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKGraphSeriesChartData-Protocol.h>

@class NSString;

@interface HKInteractiveChartAudioData : NSObject <HKGraphSeriesChartData>
{
    double _averageLEQ;
    double _duration;
    HKInteractiveChartAudioData *_overviewData;
}

@property(retain, nonatomic) HKInteractiveChartAudioData *overviewData; // @synthesize overviewData=_overviewData;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(nonatomic) double averageLEQ; // @synthesize averageLEQ=_averageLEQ;
- (id)_durationString:(double)arg1;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

