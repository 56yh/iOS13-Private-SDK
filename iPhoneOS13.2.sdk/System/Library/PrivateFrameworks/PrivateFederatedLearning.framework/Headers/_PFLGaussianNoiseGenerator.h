//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface _PFLGaussianNoiseGenerator : NSObject
{
    double _mean;
    double _deviation;
}

+ (id)generatorWithMean:(double)arg1 deviation:(double)arg2;
@property(readonly) double deviation; // @synthesize deviation=_deviation;
@property(readonly) double mean; // @synthesize mean=_mean;
- (id)description;
- (double)sample;
- (id)initWithMean:(double)arg1 deviation:(double)arg2;
- (id)init;

@end

