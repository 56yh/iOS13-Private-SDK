//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthUI/HKInteractiveChartsAxisScalingRule-Protocol.h>

@class NSArray, NSString;

@interface HKNumericClampingAxisScalingRule : NSObject <HKInteractiveChartsAxisScalingRule>
{
    NSArray *_chartBoundsRuleChoices;
}

+ (id)ruleWithChartBoundsRuleChoices:(id)arg1;
- (id)portraitYValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;
- (id)yValueRangeForRange:(id)arg1 zoomLevel:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end

